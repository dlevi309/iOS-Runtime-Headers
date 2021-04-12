/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, UIColor, NSString;

@interface TSAViewController : UIViewController {

	BOOL _viewDidAppear;
	BOOL _showFirstLaunchCoachingTipAfterViewAppears;
	BOOL _firstLaunchCoachingTipsWereShowingBeforeRotation;
	BOOL _coachingTipsWereShowingBeforeRotation;
	BOOL _shouldShowHelpOnAppear;
	NSArray* _leftApplicationToolbarItems;
	NSArray* _rightApplicationToolbarItems;
	double _leftToolbarItemsInset;
	double _rightToolbarItemsInset;
	double _leftToolbarItemsMaximumWidth;
	double _rightToolbarItemsMaximumWidth;

}

@property (assign,nonatomic) BOOL viewDidAppear;                                                                       //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (assign,nonatomic) BOOL showFirstLaunchCoachingTipAfterViewAppears;                                          //@synthesize showFirstLaunchCoachingTipAfterViewAppears=_showFirstLaunchCoachingTipAfterViewAppears - In the implementation block
@property (assign,nonatomic) BOOL firstLaunchCoachingTipsWereShowingBeforeRotation;                                    //@synthesize firstLaunchCoachingTipsWereShowingBeforeRotation=_firstLaunchCoachingTipsWereShowingBeforeRotation - In the implementation block
@property (assign,nonatomic) BOOL coachingTipsWereShowingBeforeRotation;                                               //@synthesize coachingTipsWereShowingBeforeRotation=_coachingTipsWereShowingBeforeRotation - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHelpOnAppear;                                                              //@synthesize shouldShowHelpOnAppear=_shouldShowHelpOnAppear - In the implementation block
@property (nonatomic,readonly) BOOL isViewVisible; 
@property (nonatomic,readonly) BOOL isLayoutBelowApplicationToolbar; 
@property (nonatomic,retain) NSArray * leftApplicationToolbarItems;                                                    //@synthesize leftApplicationToolbarItems=_leftApplicationToolbarItems - In the implementation block
@property (nonatomic,retain) NSArray * rightApplicationToolbarItems;                                                   //@synthesize rightApplicationToolbarItems=_rightApplicationToolbarItems - In the implementation block
@property (nonatomic,readonly) double leftToolbarItemsInset;                                                           //@synthesize leftToolbarItemsInset=_leftToolbarItemsInset - In the implementation block
@property (nonatomic,readonly) double rightToolbarItemsInset;                                                          //@synthesize rightToolbarItemsInset=_rightToolbarItemsInset - In the implementation block
@property (assign,nonatomic) double leftToolbarItemsMaximumWidth;                                                      //@synthesize leftToolbarItemsMaximumWidth=_leftToolbarItemsMaximumWidth - In the implementation block
@property (assign,nonatomic) double rightToolbarItemsMaximumWidth;                                                     //@synthesize rightToolbarItemsMaximumWidth=_rightToolbarItemsMaximumWidth - In the implementation block
@property (nonatomic,readonly) UIColor * applicationBackgroundColor; 
@property (nonatomic,readonly) UIColor * applicationToolbarTitleColor; 
@property (nonatomic,readonly) UIColor * applicationToolbarTintColor; 
@property (nonatomic,readonly) UIColor * applicationToolbarBackgroundColor; 
@property (nonatomic,readonly) NSString * toolbarButtonModalGearImageName; 
@property (getter=isPresentingModalViewController,nonatomic,readonly) BOOL presentingModalViewController; 
@property (nonatomic,readonly) id coachingTipsButton; 
-(void)dealloc;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)viewDidAppear;
-(BOOL)isPresentingModalViewController;
-(BOOL)isViewVisible;
-(id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)leftToolbarItemsMaximumWidth;
-(double)rightToolbarItemsMaximumWidth;
-(double)leftToolbarItemsInset;
-(double)rightToolbarItemsInset;
-(void)setLeftToolbarItemsMaximumWidth:(double)arg1 ;
-(void)setRightToolbarItemsMaximumWidth:(double)arg1 ;
-(id)toolbarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)toolbarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 isModal:(BOOL)arg4 ;
-(void)p_stopListeningForVoiceOverNotifications;
-(void)setViewDidAppear:(BOOL)arg1 ;
-(BOOL)showFirstLaunchCoachingTipAfterViewAppears;
-(void)setShowFirstLaunchCoachingTipAfterViewAppears:(BOOL)arg1 ;
-(void)showFirstLaunchCoachingTipIfNecessary;
-(void)p_startListeningForVoiceOverNotifications;
-(void)p_voiceOverStatusDidChange;
-(void)dismissCoachingTips;
-(void)hideFirstLaunchCoachingTipIfNecessary;
-(id)toolbarButtonWithImageName:(id)arg1 disabledImageName:(id)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(id)toolbarButtonForCoachingTipsWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)isLayoutBelowApplicationToolbar;
-(void)willSetupApplicationToolbar;
-(UIColor *)applicationBackgroundColor;
-(UIColor *)applicationToolbarTitleColor;
-(UIColor *)applicationToolbarTintColor;
-(UIColor *)applicationToolbarBackgroundColor;
-(NSString *)toolbarButtonModalGearImageName;
-(id)toolbarButtonForUndoWithIsModal:(BOOL)arg1 ;
-(id)toolbarButtonForModalDone;
-(BOOL)modalToolbarSupportsUndo;
-(id)imageViewFromSnapshotOfView:(id)arg1 ;
-(void)toggleCoachingTips:(id)arg1 ;
-(void)willShowCoachingTips;
-(void)willHideCoachingTips;
-(id)toolbarButtonItemForCoachingTipsWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)showHelpWithTopicId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissHelpWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isFirstLaunchCoachingTipShowing;
-(id)coachingTipsButton;
-(id)firstLaunchCoachingTipShownUserDefaultKey;
-(NSArray *)leftApplicationToolbarItems;
-(void)setLeftApplicationToolbarItems:(NSArray *)arg1 ;
-(NSArray *)rightApplicationToolbarItems;
-(void)setRightApplicationToolbarItems:(NSArray *)arg1 ;
-(BOOL)firstLaunchCoachingTipsWereShowingBeforeRotation;
-(void)setFirstLaunchCoachingTipsWereShowingBeforeRotation:(BOOL)arg1 ;
-(BOOL)coachingTipsWereShowingBeforeRotation;
-(void)setCoachingTipsWereShowingBeforeRotation:(BOOL)arg1 ;
-(BOOL)shouldShowHelpOnAppear;
-(void)setShouldShowHelpOnAppear:(BOOL)arg1 ;
@end

