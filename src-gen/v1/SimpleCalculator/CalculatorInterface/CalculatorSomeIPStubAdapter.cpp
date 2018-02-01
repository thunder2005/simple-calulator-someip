/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201706201046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/SimpleCalculator/CalculatorInterface/CalculatorSomeIPStubAdapter.hpp>
#include <v1/SimpleCalculator/CalculatorInterface/Calculator.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace SimpleCalculator {
namespace CalculatorInterface {

std::shared_ptr<CommonAPI::SomeIP::StubAdapter> createCalculatorSomeIPStubAdapter(
                   const CommonAPI::SomeIP::Address &_address,
                   const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared< CalculatorSomeIPStubAdapter<::v1::SimpleCalculator::CalculatorInterface::CalculatorStub>>(_address, _connection, _stub);
}

void initializeCalculatorSomeIPStubAdapter() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:SimpleCalculator.CalculatorInterface.Calculator:v1_0:CalculatorServer",
         0x1234, 0x5678, 1, 0);
    CommonAPI::SomeIP::Factory::get()->registerStubAdapterCreateMethod(
        Calculator::getInterface(),
        &createCalculatorSomeIPStubAdapter);
}

INITIALIZER(registerCalculatorSomeIPStubAdapter) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeCalculatorSomeIPStubAdapter);
}
} // namespace CalculatorInterface
} // namespace SimpleCalculator
} // namespace v1