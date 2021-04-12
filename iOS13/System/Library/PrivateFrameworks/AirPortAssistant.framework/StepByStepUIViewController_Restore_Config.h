/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/StepByStepUIViewController.h>

@class UIView, UILabel;

@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController {

	UIView* restoreRecommendationContainerView;
	UILabel* restoreRecommendationLabel;
	UIView* dontRestoreRecommendationContainerView;
	UILabel* dontRestoreRecommendationLabel;
	BOOL dontRestore;

}

@property (nonatomic,retain) UIView * restoreRecommendationContainerView; 
@property (nonatomic,retain) UIView * dontRestoreRecommendationContainerView; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setupInitialTableHeaderConfiguration;
-(void)setRestoreRecommendationContainerView:(UIView *)arg1 ;
-(void)setDontRestoreRecommendationContainerView:(UIView *)arg1 ;
-(UIView *)dontRestoreRecommendationContainerView;
-(UIView *)restoreRecommendationContainerView;
@end

