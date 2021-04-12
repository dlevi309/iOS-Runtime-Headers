/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

@class NSString;


@protocol PSBrokerTransport <NSObject>
@property (readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(void)addSubscriptions:(id)arg1 forTopicWithName:(id)arg2;
-(void)removeSubscriptions:(id)arg1 forTopicWithName:(id)arg2;
-(void)publishEvent:(id)arg1 forTopicWithName:(id)arg2 toRemoteDevices:(id)arg3;

@end

