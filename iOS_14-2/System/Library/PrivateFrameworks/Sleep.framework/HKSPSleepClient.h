/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@protocol HKSPSleepClient <HKSPClient>
@required
-(void)sleepSettingsChanged:(id)arg1 syncAnchor:(id)arg2;
-(void)sleepEventRecordChanged:(id)arg1 syncAnchor:(id)arg2;
-(void)sleepModeChanged:(long long)arg1 syncAnchor:(id)arg2;
-(void)sleepScheduleStateChanged:(unsigned long long)arg1 syncAnchor:(id)arg2;
-(void)sleepEventOccurred:(id)arg1 syncAnchor:(id)arg2;
-(void)sleepScheduleChanged:(id)arg1 syncAnchor:(id)arg2;

@end

