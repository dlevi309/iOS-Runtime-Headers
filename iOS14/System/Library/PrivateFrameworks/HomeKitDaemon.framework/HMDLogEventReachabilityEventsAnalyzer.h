/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEventAnalyzer.h>

@class HMDEventCountersManager;

@interface HMDLogEventReachabilityEventsAnalyzer : HMDLogEventAnalyzer {

	HMDEventCountersManager* _eventCountersManager;

}

@property (nonatomic,readonly) HMDEventCountersManager * eventCountersManager;              //@synthesize eventCountersManager=_eventCountersManager - In the implementation block
-(HMDEventCountersManager *)eventCountersManager;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 ;
-(void)processLogEvent:(id)arg1 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 eventCountersManager:(id)arg3 ;
-(void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)arg1 ;
-(void)_handleCameraRecordingReachabilityLogEvent:(id)arg1 ;
@end

