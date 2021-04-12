/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/Heart.healthplugin/Heart
*/

#import <HealthExperienceUI/HealthExperienceUI.SuggestedActionTileViewController.h>
#import <libobjc.A.dylib/HROnboardingManagerDelegate.h>

@class NSString;

@interface Heart.PromotionTileViewController : HealthExperienceUI.SuggestedActionTileViewController <HROnboardingManagerDelegate> {

	 context;
	 onboardingManager;

}

@property (copy,nonatomic) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)didCompleteOnboarding;
-(void)didDismissOnboarding;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)didTapAction:(id)arg1 ;
@end

