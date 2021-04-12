/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/

#import <libobjc.A.dylib/HKSPSleepOnboardingStore.h>

@protocol HKSPSleepStoreObserver;
@class HKSPMutableSleepEventRecord, HKSPMutableSleepSettings, NSDate;

@interface HDSHSleepOnboardingTestStore : NSObject <HKSPSleepOnboardingStore> {

	HKSPMutableSleepEventRecord* _sleepEventRecord;
	HKSPMutableSleepSettings* _sleepSettings;
	id<HKSPSleepStoreObserver> _observer;
	NSDate* _currentDate;

}

@property (nonatomic,retain) NSDate * currentDate;                          //@synthesize currentDate=_currentDate - In the implementation block
@property (assign,nonatomic) BOOL springBoardGreetingDisabled; 
-(void)addObserver:(id)arg1 ;
-(id)currentSleepSettingsWithError:(id*)arg1 ;
-(NSDate *)currentDate;
-(id)init;
-(void)setSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)springBoardGreetingDisabled;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)setSleepTrackingOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveCurrentSleepEventRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)currentSleepEventRecordWithError:(id*)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)currentSleepEventRecordWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpringBoardGreetingDisabled:(BOOL)arg1 ;
-(void)setSleepCoachingOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end

