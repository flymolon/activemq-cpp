/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <activemq/connector/openwire/commands/MessagePull.h>

using namespace std;
using namespace activemq;
using namespace activemq::connector;
using namespace activemq::connector::openwire;
using namespace activemq::connector::openwire::commands;

/*
 *
 *  Command and marshalling code for OpenWire format for MessagePull
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Java Classes in the
 *         activemq-core module
 *
 */
////////////////////////////////////////////////////////////////////////////////
MessagePull::MessagePull()
{
    this->consumerId = NULL;
    this->destination = NULL;
    this->timeout = 0;
}

////////////////////////////////////////////////////////////////////////////////
MessagePull::~MessagePull()
{
    delete this->consumerId;
    delete this->destination;
}

////////////////////////////////////////////////////////////////////////////////
unsigned char MessagePull::getDataStructureType() const
{
    return MessagePull::ID_MESSAGEPULL; 
}

////////////////////////////////////////////////////////////////////////////////
const ConsumerId* MessagePull::getConsumerId() const {
    return consumerId;
}

////////////////////////////////////////////////////////////////////////////////
ConsumerId* MessagePull::getConsumerId() {
    return consumerId;
}

////////////////////////////////////////////////////////////////////////////////
void MessagePull::setConsumerId(ConsumerId* consumerId ) {
    this->consumerId = consumerId;
}

////////////////////////////////////////////////////////////////////////////////
const ActiveMQDestination* MessagePull::getDestination() const {
    return destination;
}

////////////////////////////////////////////////////////////////////////////////
ActiveMQDestination* MessagePull::getDestination() {
    return destination;
}

////////////////////////////////////////////////////////////////////////////////
void MessagePull::setDestination(ActiveMQDestination* destination ) {
    this->destination = destination;
}

////////////////////////////////////////////////////////////////////////////////
const long long MessagePull::getTimeout() const {
    return timeout;
}

////////////////////////////////////////////////////////////////////////////////
long long MessagePull::getTimeout() {
    return timeout;
}

////////////////////////////////////////////////////////////////////////////////
void MessagePull::setTimeout(long long timeout ) {
    this->timeout = timeout;
}

