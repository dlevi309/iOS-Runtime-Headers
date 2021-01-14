/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPSleepClient.h>

@class HKSPSleepStore;

@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient> {

	HKSPSleepStore* _sleepStore;

}

@property (assign,nonatomic,__weak) HKSPSleepStore * sleepStore;              //@synthesize sleepStore=_sleepStore - In the implementation block
-(HKSPSleepStore *)sleepStore;
-(void)sleepSettingsChanged:(id)arg1 syncAnchor:(id)arg2 ;
-(void)sleepEventRecordChanged:(id)arg1 syncAnchor:(id)arg2 ;
-(void)setSleepStore:(HKSPSleepStore *)arg1 ;
-(void)sleepModeChanged:(long long)arg1 syncAnchor:(id)arg2 ;
-(void)sleepScheduleStateChanged:(unsigned long long)arg1 syncAnchor:(id)arg2 ;
-(void)getClientIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepEventOccurred:(id)arg1 syncAnchor:(id)arg2 ;
-(void)sleepScheduleChanged:(id)arg1 syncAnchor:(id)arg2 ;
@end

