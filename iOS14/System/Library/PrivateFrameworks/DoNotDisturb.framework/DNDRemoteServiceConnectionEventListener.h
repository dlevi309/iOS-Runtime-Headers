/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

@class NSString;


@protocol DNDRemoteServiceConnectionEventListener <NSObject>
@property (nonatomic,copy,readonly) NSString * clientIdentifier; 
@optional
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
-(void)remoteService:(id)arg1 didChangeActiveModeAssertion:(id)arg2 invalidation:(id)arg3;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
-(void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
-(void)remoteService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
-(void)remoteService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
-(void)remoteService:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;

@required
-(NSString *)clientIdentifier;

@end

