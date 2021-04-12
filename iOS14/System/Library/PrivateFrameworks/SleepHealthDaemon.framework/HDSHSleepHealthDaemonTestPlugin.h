/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/

#import <SleepHealthDaemon/HDSHSleepHealthDaemonPlugin.h>

@class HDSHSleepOnboardingTestStore, HDSHProfileExtension, NSDate;

@interface HDSHSleepHealthDaemonTestPlugin : HDSHSleepHealthDaemonPlugin {

	HDSHSleepOnboardingTestStore* _sleepStore;
	HDSHProfileExtension* _mainExtension;

}

@property (nonatomic,retain) NSDate * currentDate; 
@property (assign,nonatomic) BOOL springBoardGreetingDisabled; 
-(id)extensionForProfile:(id)arg1 ;
-(NSDate *)currentDate;
-(id)init;
-(BOOL)springBoardGreetingDisabled;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)setSpringBoardGreetingDisabled:(BOOL)arg1 ;
-(id)_availabilityStoreForFeature:(id)arg1 ;
-(long long)onboardingCompletedVersionForFeature:(id)arg1 ;
-(id)onboardingCompletedDateForFeature:(id)arg1 ;
-(void)notifyForOnboardingVersionChangeForFeature:(id)arg1 ;
@end

