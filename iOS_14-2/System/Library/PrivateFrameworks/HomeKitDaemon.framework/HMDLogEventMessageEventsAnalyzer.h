/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEventAnalyzer.h>

@class HMDEventFlagsManager, HMDEventCountersManager;

@interface HMDLogEventMessageEventsAnalyzer : HMDLogEventAnalyzer {

	HMDEventFlagsManager* _eventFlagsManager;
	HMDEventCountersManager* _eventCountersManager;

}

@property (nonatomic,retain) HMDEventFlagsManager * eventFlagsManager;                    //@synthesize eventFlagsManager=_eventFlagsManager - In the implementation block
@property (nonatomic,retain) HMDEventCountersManager * eventCountersManager;              //@synthesize eventCountersManager=_eventCountersManager - In the implementation block
-(HMDEventCountersManager *)eventCountersManager;
-(HMDEventFlagsManager *)eventFlagsManager;
-(void)setEventCountersManager:(HMDEventCountersManager *)arg1 ;
-(void)setEventFlagsManager:(HMDEventFlagsManager *)arg1 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 eventCountersManager:(id)arg3 eventFlagsManager:(id)arg4 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 ;
-(id)transportTypeForRemoteMessageCounterRequestGroup:(id)arg1 ;
-(id)messageDirectionForRemoteMessageCounterRequestGroup:(id)arg1 ;
-(void)submitAggregateCountersForXPCMessageCounterRequestGroup:(id)arg1 ;
-(void)submitAggregateCountersForRemoteMessageCounterRequestGroup:(id)arg1 ;
-(void)submitAggregateCountersLogEventIfNeeded;
-(void)_handleRemoteMessageLogEvent:(id)arg1 ;
-(void)_handleXPCMessageCounterLogEvent:(id)arg1 ;
-(id)eventNameForRemoteMessageLogEvent:(id)arg1 ;
-(void)processLogEvent:(id)arg1 ;
@end

