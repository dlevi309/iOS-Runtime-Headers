/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NAFuture, HMHome;


@protocol HUFeatureOnboardingFlow <NSObject>
@property (nonatomic,retain) NAFuture * onboardingFuture; 
@property (nonatomic,readonly) BOOL shouldAbortThisOnboardingFlowGroup; 
@property (nonatomic,readonly) BOOL shouldAbortAllOnboarding; 
@property (nonatomic,retain) UIViewController*<HUConfigurationViewController> initialViewController; 
@property (nonatomic,retain) HMHome * home; 
@optional
-(void)checkIfStillRequiredFromCurrentResults:(id)arg1;

@required
-(id)processUserInput:(id)arg1;
-(void)setOnboardingFuture:(id)arg1;
-(BOOL)shouldAbortThisOnboardingFlowGroup;
-(BOOL)shouldAbortAllOnboarding;
-(UIViewController*<HUConfigurationViewController>)initialViewController;
-(void)setInitialViewController:(id)arg1;
-(NAFuture *)onboardingFuture;
-(void)setHome:(id)arg1;
-(HMHome *)home;

@end

