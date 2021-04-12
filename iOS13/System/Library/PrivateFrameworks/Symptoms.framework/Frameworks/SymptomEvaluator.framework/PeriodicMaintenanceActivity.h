/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableArray;

@interface PeriodicMaintenanceActivity : NSObject {

	NSMutableArray* _activities;
	unsigned long long _nextActivityIndex;

}
+(id)sharedInstance;
+(void)registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
+(const char*)periodicActivityID;
+(long long)periodicActivityInterval;
-(id)init;
-(void)dealloc;
-(void)_registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
-(void)_registerPeriodicMaintenanceActivity;
-(void)_handleActivityRun:(id)arg1 ;
@end

