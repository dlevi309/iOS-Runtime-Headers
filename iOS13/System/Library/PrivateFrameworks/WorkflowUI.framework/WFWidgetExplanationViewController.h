/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFWidgetExplanationPageViewDelegate.h>
#import <libobjc.A.dylib/WFWidgetOnboardingControllerDelegate.h>

@protocol WFWidgetExplanationViewControllerDelegate;
@class UIScrollView, UIButton, UIImageView, WFWidgetExplanationPageView, WFWidgetExplanationSettings, NSString;

@interface WFWidgetExplanationViewController : UIViewController <WFWidgetExplanationPageViewDelegate, WFWidgetOnboardingControllerDelegate> {

	BOOL _continueWasTapped;
	BOOL _completedOnboarding;
	id<WFWidgetExplanationViewControllerDelegate> _delegate;
	UIScrollView* _scrollView;
	UIButton* _videoButton;
	UIImageView* _checkmarkView;
	WFWidgetExplanationPageView* _pageView;
	WFWidgetExplanationSettings* _settings;
	double _appearanceTimeInterval;
	double _maxSecondsOfVideoWatched;
	long long _numberOfTimesVideoWasWatched;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * videoButton;                                              //@synthesize videoButton=_videoButton - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * checkmarkView;                                         //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic,__weak) WFWidgetExplanationPageView * pageView;                              //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,retain) WFWidgetExplanationSettings * settings;                                     //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) double appearanceTimeInterval;                                              //@synthesize appearanceTimeInterval=_appearanceTimeInterval - In the implementation block
@property (assign,nonatomic) double maxSecondsOfVideoWatched;                                            //@synthesize maxSecondsOfVideoWatched=_maxSecondsOfVideoWatched - In the implementation block
@property (assign,nonatomic) long long numberOfTimesVideoWasWatched;                                     //@synthesize numberOfTimesVideoWasWatched=_numberOfTimesVideoWasWatched - In the implementation block
@property (assign,nonatomic) BOOL continueWasTapped;                                                     //@synthesize continueWasTapped=_continueWasTapped - In the implementation block
@property (assign,nonatomic) BOOL completedOnboarding;                                                   //@synthesize completedOnboarding=_completedOnboarding - In the implementation block
@property (assign,nonatomic,__weak) id<WFWidgetExplanationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<WFWidgetExplanationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWidgetExplanationViewControllerDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(WFWidgetExplanationSettings *)settings;
-(void)setSettings:(WFWidgetExplanationSettings *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(WFWidgetExplanationPageView *)pageView;
-(void)donePressed;
-(void)setPageView:(WFWidgetExplanationPageView *)arg1 ;
-(id)eventDictionary;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(BOOL)completedOnboarding;
-(void)playVideo;
-(void)widgetOnboardingDidActivateWidget:(id)arg1 ;
-(void)pageViewContinueTapped:(id)arg1 ;
-(UIButton *)videoButton;
-(void)setVideoButton:(UIButton *)arg1 ;
-(double)appearanceTimeInterval;
-(void)setAppearanceTimeInterval:(double)arg1 ;
-(double)maxSecondsOfVideoWatched;
-(void)setMaxSecondsOfVideoWatched:(double)arg1 ;
-(long long)numberOfTimesVideoWasWatched;
-(void)setNumberOfTimesVideoWasWatched:(long long)arg1 ;
-(BOOL)continueWasTapped;
-(void)setContinueWasTapped:(BOOL)arg1 ;
-(void)setCompletedOnboarding:(BOOL)arg1 ;
@end

