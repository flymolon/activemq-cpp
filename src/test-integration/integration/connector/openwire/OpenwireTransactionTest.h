/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _INTEGRATION_CONNECTOR_OPENWIRE_OPENWIRETRANSACTIONTESTER_H_
#define _INTEGRATION_CONNECTOR_OPENWIRE_OPENWIRETRANSACTIONTESTER_H_

#include <integration/TestSupport.h>

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace integration{
namespace connector{
namespace openwire{

    class OpenwireTransactionTest : public CppUnit::TestFixture
    {
        CPPUNIT_TEST_SUITE( OpenwireTransactionTest );
        CPPUNIT_TEST( testSendReceiveTransactedBatches );
        CPPUNIT_TEST( testSendRollback );
        CPPUNIT_TEST_SUITE_END();

    private:

        TestSupport* testSupport;

        static const int batchCount = 10;
        static const int batchSize = 20;

    public:

        OpenwireTransactionTest();
        virtual ~OpenwireTransactionTest();

        virtual void setUp();
        virtual void tearDown();

        virtual void testSendReceiveTransactedBatches();
        virtual void testSendRollback();

    };

}}}

#endif /*_INTEGRATION_CONNECTOR_OPENWIRE_OPENWIRETRANSACTIONTESTER_H_*/
