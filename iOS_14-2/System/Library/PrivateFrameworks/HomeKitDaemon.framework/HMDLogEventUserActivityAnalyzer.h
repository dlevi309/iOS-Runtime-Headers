/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEventAnalyzer.h>

@class HMDEventFlagsManager, HMDEventCountersManager;

@interface HMDLogEventUserActivityAnalyzer : HMDLogEventAnalyzer {

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
-(void)processLogEvent:(id)arg1 ;
-(void)_handleReadWriteLogEvent:(id)arg1 ;
-(void)_handleAccessoryPairingLogEvent:(id)arg1 ;
-(void)_handleAddActionSetLogEvent:(id)arg1 ;
-(void)_handleAddTriggerLogEvent:(id)arg1 ;
-(void)_handleActionSetRunLogEvent:(id)arg1 ;
-(void)_handleCameraStreamLogEvent:(id)arg1 ;
-(void)_handleCameraClipRequestLogEvent:(id)arg1 ;
-(void)_markUserActivityEventForEventName:(id)arg1 ;
-(BOOL)_isUserSource:(unsigned long long)arg1 ;
-(BOOL)_isTriggerSource:(unsigned long long)arg1 ;
@end

