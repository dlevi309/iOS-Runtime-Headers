/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/


@protocol HKRPUserDefaultsSyncProviding;
@class NSUserDefaults, NSNumber;

@interface HKRPOxygenSaturationOnboardingCache : NSObject {

	NSUserDefaults* _userDefaults;
	id<HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;

}

@property (nonatomic,copy) NSNumber * hasCompletedOnboarding; 
-(id)initWithUserDefaults:(id)arg1 userDefaultsSyncProvider:(id)arg2 ;
-(NSNumber *)hasCompletedOnboarding;
-(void)setHasCompletedOnboarding:(NSNumber *)arg1 ;
@end

