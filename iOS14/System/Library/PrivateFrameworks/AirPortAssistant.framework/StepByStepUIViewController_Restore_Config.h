/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(void)setupInitialTableHeaderConfiguration;
-(void)setRestoreRecommendationContainerView:(UIView *)arg1 ;
-(void)setDontRestoreRecommendationContainerView:(UIView *)arg1 ;
-(UIView *)dontRestoreRecommendationContainerView;
-(UIView *)restoreRecommendationContainerView;
@end

