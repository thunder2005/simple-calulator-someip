/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.12.v201706201043.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/*
 * description: 
 * The interface provies APIs to perform calculator operations * author: 
 * Module Owner Name
 */
#ifndef V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_DBUS_STUB_ADAPTER_HPP_
#define V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_DBUS_STUB_ADAPTER_HPP_

#include <v1/SimpleCalculator/CalculatorInterface/CalculatorStub.hpp>
#include "v1/SimpleCalculator/CalculatorInterface/CalculatorDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusStubAdapterHelper.hpp>
#include <CommonAPI/DBus/DBusStubAdapter.hpp>
#include <CommonAPI/DBus/DBusDeployment.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace SimpleCalculator {
namespace CalculatorInterface {

template <typename _Stub = ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub, typename... _Stubs>
class CalculatorDBusStubAdapterInternal
    : public virtual CalculatorStubAdapter,
      public CommonAPI::DBus::DBusStubAdapterHelper< _Stub, _Stubs...>
     {
public:
    typedef CommonAPI::DBus::DBusStubAdapterHelper< _Stub, _Stubs...> CalculatorDBusStubAdapterHelper;

    ~CalculatorDBusStubAdapterInternal() {
        deactivateManagedInstances();
        CalculatorDBusStubAdapterHelper::deinit();
    }

    virtual bool hasFreedesktopProperties() {
        return false;
    }

    inline static const char* getInterface() {
        return Calculator::getInterface();
    }

    /*
     * description: 
     * This attribute reflects calculator operation value.
     */
    void fireCalattributeAttributeChanged(const int32_t& value);

    /*
     * description: 
     * This is a callback to update operation_status change.
     */
    void fireOperation_statusEvent(const uint32_t& status);

    void deactivateManagedInstances() {
    }

    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        CommonAPI::Version
        > getCalculatorInterfaceVersionStubDispatcher;

    /*
     * description: 
     * This attribute reflects calculator operation value.
     */
    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
            int32_t,
            CommonAPI::DBus::IntegerDeployment
            > getCalattributeAttributeStubDispatcher;
    static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
            ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
            int32_t,
            CommonAPI::DBus::IntegerDeployment
            > setCalattributeAttributeStubDispatcher;

    /*
     * description: 
     * Perform add operation.
     * (at)Return add result.
     */
    
    static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< uint32_t, uint32_t>,
        std::tuple< uint32_t>,
        std::tuple< CommonAPI::DBus::IntegerDeployment, CommonAPI::DBus::IntegerDeployment>,
        std::tuple< CommonAPI::DBus::IntegerDeployment>
    
        > addStubDispatcher;

    /*
     * description: 
     * Perform divide operation.
     * (at)Return add result.
     */
    
    static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< float, float>,
        std::tuple< Calculator::DIVISION_ERROR, float>,
        std::tuple< CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
        std::tuple< CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>
    
        > divisionStubDispatcher;


    CalculatorDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<_Stub> &_stub)
    : CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      CalculatorDBusStubAdapterHelper(_address, _connection, false, _stub) {
        /*
         * description: 
         * This attribute reflects calculator operation value.
         */
        CalculatorDBusStubAdapterHelper::addStubDispatcher({ "getCalattributeAttribute", "" }, &getCalattributeAttributeStubDispatcher);
        CalculatorDBusStubAdapterHelper::addStubDispatcher({ "setCalattributeAttribute", "i" }, &setCalattributeAttributeStubDispatcher);
        /*
         * description: 
         * Perform add operation.
         * (at)Return add result.
         */
        CalculatorDBusStubAdapterHelper::addStubDispatcher({ "add", "uu" }, &addStubDispatcher);
        /*
         * description: 
         * Perform divide operation.
         * (at)Return add result.
         */
        CalculatorDBusStubAdapterHelper::addStubDispatcher({ "division", "dd" }, &divisionStubDispatcher);
        CalculatorDBusStubAdapterHelper::addStubDispatcher({ "getInterfaceVersion", "" }, &getCalculatorInterfaceVersionStubDispatcher);
    }

protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const {
        static const std::string introspectionData =
            "<method name=\"getInterfaceVersion\">\n"
                "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"getCalattributeAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"setCalattributeAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"i\" direction=\"out\" />\n"
            "</method>\n"
            "<signal name=\"onCalattributeAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"i\" />\n"
            "</signal>\n"
            /*
             * description: 
             * This is a callback to update operation_status change.
             */
            "<signal name=\"operation_status\">\n"
            "<arg name=\"status\" type=\"u\" />\n"
            "</signal>\n"
            /*
             * description: 
             * Perform add operation.
             * (at)Return add result.
             */
            "<method name=\"add\">\n"
            "<arg name=\"_param1\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_param2\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_result\" type=\"u\" direction=\"out\" />\n"
            "</method>\n"
            /*
             * description: 
             * Perform divide operation.
             * (at)Return add result.
             */
            "<method name=\"division\">\n"
            "<arg name=\"_a\" type=\"d\" direction=\"in\" />\n"
            "<arg name=\"_b\" type=\"d\" direction=\"in\" />\n"
            "<arg name=\"_error\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"_result\" type=\"d\" direction=\"out\" />\n"
            "</method>\n"
            ;
        return introspectionData.c_str();
    }

private:
};


template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    CommonAPI::Version
    > CalculatorDBusStubAdapterInternal<_Stub, _Stubs...>::getCalculatorInterfaceVersionStubDispatcher(&CalculatorStub::getInterfaceVersion, "uu");

/*
 * description: 
 * This attribute reflects calculator operation value.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        int32_t,
        CommonAPI::DBus::IntegerDeployment
        > CalculatorDBusStubAdapterInternal<_Stub, _Stubs...>::getCalattributeAttributeStubDispatcher(
            &::v1::SimpleCalculator::CalculatorInterface::CalculatorStub::getCalattributeAttribute
            , "i"
            );
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        int32_t,
        CommonAPI::DBus::IntegerDeployment
        > CalculatorDBusStubAdapterInternal<_Stub, _Stubs...>::setCalattributeAttributeStubDispatcher(
                &::v1::SimpleCalculator::CalculatorInterface::CalculatorStub::getCalattributeAttribute,
                &CalculatorStubRemoteEvent::onRemoteSetCalattributeAttribute,
                &CalculatorStubRemoteEvent::onRemoteCalattributeAttributeChanged
                ,&CalculatorStubAdapter::fireCalattributeAttributeChanged
                ,"i"
                );


/*
 * description: 
 * Perform add operation.
 * (at)Return add result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< uint32_t, uint32_t>,
    std::tuple< uint32_t>,
    std::tuple< CommonAPI::DBus::IntegerDeployment, CommonAPI::DBus::IntegerDeployment>,
    std::tuple< CommonAPI::DBus::IntegerDeployment>

    > CalculatorDBusStubAdapterInternal<_Stub, _Stubs...>::addStubDispatcher(
    &CalculatorStub::add, "u",
    std::make_tuple(static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr), static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr)),
    std::make_tuple(static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr)));


/*
 * description: 
 * Perform divide operation.
 * (at)Return add result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< float, float>,
    std::tuple< Calculator::DIVISION_ERROR, float>,
    std::tuple< CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple< CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>

    > CalculatorDBusStubAdapterInternal<_Stub, _Stubs...>::divisionStubDispatcher(
    &CalculatorStub::division, "id",
    std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
    std::make_tuple(static_cast< CommonAPI::EmptyDeployment * >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr)));

/*
 * description: 
 * This attribute reflects calculator operation value.
 */
template <typename _Stub, typename... _Stubs>
void CalculatorDBusStubAdapterInternal<_Stub, _Stubs...>::fireCalattributeAttributeChanged(const int32_t& value) {
    CommonAPI::Deployable< int32_t, CommonAPI::DBus::IntegerDeployment> deployedValue(value, static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr));
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<
        int32_t,
        CommonAPI::DBus::IntegerDeployment
    >
    >>
        ::sendSignal(
            *this,
            "onCalattributeAttributeChanged",
            "i",
            deployedValue
    
    );
}

/*
 * description: 
 * This is a callback to update operation_status change.
 */
template <typename _Stub, typename... _Stubs>
void CalculatorDBusStubAdapterInternal<_Stub, _Stubs...>::fireOperation_statusEvent(const uint32_t& status) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment>
    >>::sendSignal(
            *this,
            "operation_status",
            "u",
    CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment>(status, static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr))
    );
}


template <typename _Stub = ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub, typename... _Stubs>
class CalculatorDBusStubAdapter
    : public CalculatorDBusStubAdapterInternal<_Stub, _Stubs...>,
      public std::enable_shared_from_this< CalculatorDBusStubAdapter<_Stub, _Stubs...>> {
public:
    CalculatorDBusStubAdapter(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<_Stub> &_stub)
        : CommonAPI::DBus::DBusStubAdapter(
            _address,
            _connection,
            false),
          CalculatorDBusStubAdapterInternal<_Stub, _Stubs...>(
            _address,
            _connection,
            _stub) {
    }
};

} // namespace CalculatorInterface
} // namespace SimpleCalculator
} // namespace v1

#endif // V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_DBUS_STUB_ADAPTER_HPP_