/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, PSTopicManager;
@class NSMutableArray, NSMutableDictionary, NSString, NSArray, PSBroker, PSBrokerTransportCollection;

@interface PSTopic : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	NSMutableArray* _localSubscribersToSubscriptions;
	NSMutableDictionary* _remoteSubscribersToSubscriptions;
	NSString* _name;
	NSString* _logIdentifier;
	NSArray* _subscriptions;
	id<PSTopicManager> _topicManager;
	PSBroker* _broker;
	PSBrokerTransportCollection* _transportAdapter;

}

@property (copy,readonly) NSArray * subscriptions;                                //@synthesize subscriptions=_subscriptions - In the implementation block
@property (readonly) NSString * logIdentifier;                                    //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (__weak) id<PSTopicManager> topicManager;                               //@synthesize topicManager=_topicManager - In the implementation block
@property (__weak) PSBroker * broker;                                             //@synthesize broker=_broker - In the implementation block
@property (readonly) PSBrokerTransportCollection * transportAdapter;              //@synthesize transportAdapter=_transportAdapter - In the implementation block
@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSArray *)subscriptions;
-(id<PSTopicManager>)topicManager;
-(NSString *)logIdentifier;
-(NSString *)name;
-(PSBroker *)broker;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(void)unsubscribe:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTopicManager:(id<PSTopicManager>)arg1 ;
-(id)initWithName:(id)arg1 broker:(id)arg2 ;
-(void)setBroker:(PSBroker *)arg1 ;
-(PSBrokerTransportCollection *)transportAdapter;
-(id)addSubscriptionWithFilters:(id)arg1 conditionals:(id)arg2 invocation:(id)arg3 ;
-(id)addRemoteSubscriptionWithFilters:(id)arg1 conditionals:(id)arg2 remoteDeviceIdentifier:(id)arg3 ;
-(void)publishEvent:(id)arg1 ;
-(void)republishEvent:(id)arg1 ;
@end

