/*
 * Copyright 2019, Proyectos y Sistemas de Mantenimiento SL (eProsima).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef EPROSIMA_DDS_DOMAIN_TDOMAINPARTICIPANT_IMPL_HPP_
#define EPROSIMA_DDS_DOMAIN_TDOMAINPARTICIPANT_IMPL_HPP_

/**
 * @file TDomainParticipantImpl.hpp
 */

#include <dds/domain/DomainParticipant.hpp>


// Implementation

namespace dds {
namespace domain {

template<typename DELEGATE>
TDomainParticipant<DELEGATE>::TDomainParticipant(
        uint32_t did)
    : ::dds::core::Reference<DELEGATE>(
            new DELEGATE(
                    did,
                    //org::opensplice::domain::DomainParticipantDelegate::default_participant_qos(),
                    NULL,
                    dds::core::status::StatusMask::none()))
{
    //To implement
}

template<typename DELEGATE>
TDomainParticipant<DELEGATE>::TDomainParticipant(
        uint32_t id,
        const dds::domain::qos::DomainParticipantQos& qos,
        dds::domain::DomainParticipantListener* listener,
        const dds::core::status::StatusMask& mask) :
    ::dds::core::Reference<DELEGATE>(
            new DELEGATE(
                    id,
                    qos,
                    listener,
                    mask))
{
    //To implement
}

template<typename DELEGATE>
TDomainParticipant<DELEGATE>::~TDomainParticipant() { }

template<typename DELEGATE>
void TDomainParticipant<DELEGATE>::listener(
        Listener* listener,
        const ::dds::core::status::StatusMask& event_mask)
{
    //To implement
}

template<typename DELEGATE>
typename TDomainParticipant<DELEGATE>::Listener* TDomainParticipant<DELEGATE>::listener() const
{
    //To implement
}

template<typename DELEGATE>
const dds::domain::qos::DomainParticipantQos& TDomainParticipant<DELEGATE>::qos() const
{
    //To implement
}

template<typename DELEGATE>
void TDomainParticipant<DELEGATE>::qos(
        const dds::domain::qos::DomainParticipantQos& qos)
{
    //To implement
}

template<typename DELEGATE>
uint32_t TDomainParticipant<DELEGATE>::domain_id() const
{
    //To implement
}

template<typename DELEGATE>
void TDomainParticipant<DELEGATE>::assert_liveliness()
{
    //To implement
}

template<typename DELEGATE>
bool TDomainParticipant<DELEGATE>::contains_entity(
        const ::dds::core::InstanceHandle& handle)
{
    //To implement
}

template<typename DELEGATE>
dds::core::Time TDomainParticipant<DELEGATE>::current_time() const
{
    //To implement
}

template<typename DELEGATE>
dds::domain::qos::DomainParticipantQos TDomainParticipant<DELEGATE>::default_participant_qos()
{
    //To implement
}

template<typename DELEGATE>
void TDomainParticipant<DELEGATE>::default_participant_qos(
        const ::dds::domain::qos::DomainParticipantQos& qos)
{
    //To implement
}

template<typename DELEGATE>
dds::pub::qos::PublisherQos TDomainParticipant<DELEGATE>::default_publisher_qos() const
{
    //To implement
}

template<typename DELEGATE>
TDomainParticipant<DELEGATE>& TDomainParticipant<DELEGATE>::default_publisher_qos(
        const ::dds::pub::qos::PublisherQos& qos)
{
    //To implement
}

template<typename DELEGATE>
dds::sub::qos::SubscriberQos TDomainParticipant<DELEGATE>::default_subscriber_qos() const
{
    //To implement
}

template<typename DELEGATE>
TDomainParticipant<DELEGATE>& TDomainParticipant<DELEGATE>::default_subscriber_qos(
        const ::dds::sub::qos::SubscriberQos& qos)
{
    //To implement
}

template<typename DELEGATE>
dds::topic::qos::TopicQos TDomainParticipant<DELEGATE>::default_topic_qos() const
{
    //To implement
}

template<typename DELEGATE>
TDomainParticipant<DELEGATE>& TDomainParticipant<DELEGATE>::default_topic_qos(
        const dds::topic::qos::TopicQos& qos)
{
    //To implement
}

template<typename DELEGATE>
TDomainParticipant<DELEGATE>& TDomainParticipant<DELEGATE>::operator <<(
        const dds::domain::qos::DomainParticipantQos& qos)
{
    //To implement
}

template<typename DELEGATE>
const TDomainParticipant<DELEGATE>& TDomainParticipant<DELEGATE>::operator >>(
        dds::domain::qos::DomainParticipantQos& qos) const
{
    //To implement
}

} //namespace domain
} //namespace dds

#endif //EPROSIMA_DDS_DOMAIN_TDOMAINPARTICIPANT_IMPL_HPP_