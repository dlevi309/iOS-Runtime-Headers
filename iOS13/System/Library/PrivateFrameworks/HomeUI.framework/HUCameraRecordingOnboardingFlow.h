/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUFeatureOnboardingFlow.h>

@protocol HUConfigurationViewController;
@class HMHome, NAFuture, UIViewController, HFUserItem, NSString;

@interface HUCameraRecordingOnboardingFlow : NSObject <HUFeatureOnboardingFlow> {

	BOOL _shouldAbortThisOnboardingFlowGroup;
	BOOL _shouldAbortAllOnboarding;
	HMHome* _home;
	NAFuture* _onboardingFuture;
	UIViewController*<HUConfigurationViewController> _initialViewController;
	HFUserItem* _userItem;

}

@property (assign,nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;                                             //@synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup - In the implementation block
@property (assign,nonatomic) BOOL shouldAbortAllOnboarding;                                                       //@synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding - In the implementation block
@property (nonatomic,retain) HFUserItem * userItem;                                                               //@synthesize userItem=_userItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NAFuture * onboardingFuture;                                                         //@synthesize onboardingFuture=_onboardingFuture - In the implementation block
@property (nonatomic,retain) UIViewController*<HUConfigurationViewController> initialViewController;              //@synthesize initialViewController=_initialViewController - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                       //@synthesize home=_home - In the implementation block
-(NSString *)description;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(UIViewController*<HUConfigurationViewController>)initialViewController;
-(void)setInitialViewController:(UIViewController*<HUConfigurationViewController>)arg1 ;
-(NAFuture *)onboardingFuture;
-(id)processUserInput:(id)arg1 ;
-(void)setOnboardingFuture:(NAFuture *)arg1 ;
-(BOOL)shouldAbortThisOnboardingFlowGroup;
-(BOOL)shouldAbortAllOnboarding;
-(void)setShouldAbortThisOnboardingFlowGroup:(BOOL)arg1 ;
-(void)setShouldAbortAllOnboarding:(BOOL)arg1 ;
-(id)_determineInitialViewController;
-(HFUserItem *)userItem;
-(void)_setThisUserDismissedCameraOnboardingAndReminder;
-(id)initWithUsageOptions:(id)arg1 home:(id)arg2 ;
-(void)setUserItem:(HFUserItem *)arg1 ;
@end

