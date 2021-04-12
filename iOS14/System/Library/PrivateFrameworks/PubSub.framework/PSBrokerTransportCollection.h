/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/PSBrokerTransport.h>

@class NSString, NSMutableSet;

@interface PSBrokerTransportCollection : HMFObject <PSBrokerTransport> {

	NSMutableSet* _transports;
	NSString* identifier;

}

@property (readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)identifier;
-(void)addTransport:(id)arg1 ;
-(void)addSubscriptions:(id)arg1 forTopicWithName:(id)arg2 ;
-(void)removeSubscriptions:(id)arg1 forTopicWithName:(id)arg2 ;
-(void)publishEvent:(id)arg1 forTopicWithName:(id)arg2 toRemoteDevices:(id)arg3 ;
@end

