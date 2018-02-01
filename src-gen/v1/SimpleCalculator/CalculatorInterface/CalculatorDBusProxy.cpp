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
#include <v1/SimpleCalculator/CalculatorInterface/CalculatorDBusProxy.hpp>

namespace v1 {
namespace SimpleCalculator {
namespace CalculatorInterface {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createCalculatorDBusProxy(
    const CommonAPI::DBus::DBusAddress &_address,
    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
    return std::make_shared< CalculatorDBusProxy>(_address, _connection);
}

void initializeCalculatorDBusProxy() {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
        Calculator::getInterface(),
        &createCalculatorDBusProxy);
}

INITIALIZER(registerCalculatorDBusProxy) {
    CommonAPI::DBus::Factory::get()->registerInterface(initializeCalculatorDBusProxy);
}

CalculatorDBusProxy::CalculatorDBusProxy(
    const CommonAPI::DBus::DBusAddress &_address,
    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
    :   CommonAPI::DBus::DBusProxy(_address, _connection)
,        calattribute_(*this, "onCalattributeAttributeChanged", "setCalattributeAttribute", "i", "getCalattributeAttribute", static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr))
,        operation_status_(*this, "operation_status", "u", std::make_tuple(static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr)))
{
}

      CalculatorDBusProxy::CalattributeAttribute& CalculatorDBusProxy::getCalattributeAttribute() {
          return calattribute_;
      }

CalculatorDBusProxy::Operation_statusEvent& CalculatorDBusProxy::getOperation_statusEvent() {
    return operation_status_;
}

    /*
     * description: 
     * Perform add operation.
     * (at)Return add result.
     */
    void CalculatorDBusProxy::add(const uint32_t &_param1, const uint32_t &_param2, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_result, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment> deploy_param1(_param1, static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr));
        CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment> deploy_param2(_param2, static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr));
        CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment> deploy_result(static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment >,
            CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint32_t,CommonAPI::DBus::IntegerDeployment>
            >
            >::callMethodWithReply(
        *this,
        "add",
        "uu",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_param1, deploy_param2,
_internalCallStatus,
deploy_result);
_result = deploy_result.getValue();
}
    std::future<CommonAPI::CallStatus> CalculatorDBusProxy::addAsync(const uint32_t &_param1, const uint32_t &_param2, AddAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment> deploy_param1(_param1, static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr));
        CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment> deploy_param2(_param2, static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr));
        CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment> deploy_result(static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment >,
            CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint32_t,CommonAPI::DBus::IntegerDeployment>
            >
            >::callMethodAsync(
        *this,
        "add",
        "uu",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_param1, deploy_param2,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment > _result) {
            if (_callback)
                _callback(_internalCallStatus, _result.getValue());
        },
        std::make_tuple(deploy_result));
    }
    /*
     * description: 
     * Perform divide operation.
     * (at)Return add result.
     */
    void CalculatorDBusProxy::division(const float &_a, const float &_b, CommonAPI::CallStatus &_internalCallStatus, Calculator::DIVISION_ERROR &_error, float &_result, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< Calculator::DIVISION_ERROR, CommonAPI::EmptyDeployment> deploy_error(static_cast< CommonAPI::EmptyDeployment * >(nullptr));
        CommonAPI::Deployable< float, CommonAPI::EmptyDeployment> deploy_a(_a, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< float, CommonAPI::EmptyDeployment> deploy_b(_b, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< float, CommonAPI::EmptyDeployment> deploy_result(static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< float, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< float, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< Calculator::DIVISION_ERROR, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable< float,CommonAPI::EmptyDeployment>
            >
            >::callMethodWithReply(
        *this,
        "division",
        "dd",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_a, deploy_b,
_internalCallStatus,
deploy_error,
deploy_result);
_error = deploy_error.getValue();
_result = deploy_result.getValue();
}
    std::future<CommonAPI::CallStatus> CalculatorDBusProxy::divisionAsync(const float &_a, const float &_b, DivisionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< Calculator::DIVISION_ERROR, CommonAPI::EmptyDeployment> deploy_error(static_cast< CommonAPI::EmptyDeployment * >(nullptr));
        CommonAPI::Deployable< float, CommonAPI::EmptyDeployment> deploy_a(_a, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< float, CommonAPI::EmptyDeployment> deploy_b(_b, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< float, CommonAPI::EmptyDeployment> deploy_result(static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< float, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< float, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< Calculator::DIVISION_ERROR, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable< float,CommonAPI::EmptyDeployment>
            >
            >::callMethodAsync(
        *this,
        "division",
        "dd",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_a, deploy_b,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< Calculator::DIVISION_ERROR, CommonAPI::EmptyDeployment > _deploy_error, CommonAPI::Deployable< float, CommonAPI::EmptyDeployment > _result) {
            if (_callback)
                _callback(_internalCallStatus, _deploy_error.getValue(), _result.getValue());
        },
        std::make_tuple(deploy_error, deploy_result));
    }


void CalculatorDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace CalculatorInterface
      } // namespace SimpleCalculator
      } // namespace v1