/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@class NSMutableArray;

@interface ABCPeriodicMaintenanceActivity : NSObject {

	NSMutableArray* _activities;
	unsigned long long _nextActivityIndex;

}
+(id)sharedInstance;
+(long long)periodicActivityInterval;
+(const char*)periodicActivityID;
+(void)registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)_registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
-(void)_registerPeriodicMaintenanceActivity;
-(void)_handleActivityRun:(id)arg1 ;
@end

