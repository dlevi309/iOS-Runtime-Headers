/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUFeatureOnboardingFlow.h>

@protocol HUConfigurationViewController;
@class HMHome, UIViewController, NAFuture, NSArray, NSString;

@interface HUAnnounceOnboardingFlow : NSObject <HUFeatureOnboardingFlow> {

	BOOL shouldAbortAllOnboarding;
	BOOL shouldAbortThisOnboardingFlowGroup;
	HMHome* home;
	UIViewController*<HUConfigurationViewController> initialViewController;
	NAFuture* onboardingFuture;
	NSArray* _requiredSteps;

}

@property (nonatomic,retain) NSArray * requiredSteps;                                                             //@synthesize requiredSteps=_requiredSteps - In the implementation block
@property (nonatomic,retain) NAFuture * onboardingFuture; 
@property (nonatomic,readonly) BOOL shouldAbortThisOnboardingFlowGroup; 
@property (nonatomic,readonly) BOOL shouldAbortAllOnboarding; 
@property (nonatomic,retain) UIViewController*<HUConfigurationViewController> initialViewController; 
@property (nonatomic,retain) HMHome * home; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allSteps;
-(id)processUserInput:(id)arg1 ;
-(void)setOnboardingFuture:(NAFuture *)arg1 ;
-(BOOL)shouldAbortThisOnboardingFlowGroup;
-(BOOL)shouldAbortAllOnboarding;
-(UIViewController*<HUConfigurationViewController>)initialViewController;
-(void)setInitialViewController:(UIViewController*<HUConfigurationViewController>)arg1 ;
-(NAFuture *)onboardingFuture;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id)initWithUsageOptions:(id)arg1 home:(id)arg2 ;
-(BOOL)shouldShowStep:(unsigned long long)arg1 withOptions:(id)arg2 ;
-(void)setRequiredSteps:(NSArray *)arg1 ;
-(NSArray *)requiredSteps;
-(id)viewControllerForStep:(unsigned long long)arg1 ;
-(BOOL)shouldShowFlowWithOptions:(id)arg1 ;
@end

