/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegListController.h>
#import <libobjc.A.dylib/CNFRegFirstRunExperience.h>

@protocol CNFRegFirstRunDelegate;
@class UIBarButtonItem, NSTimer, IMAccount, NSString;

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience> {

	Class _completionControllerClass;
	BOOL _showingActivityIndicator;
	BOOL _previousHidesBackButton;
	UIBarButtonItem* _previousLeftButton;
	UIBarButtonItem* _previousRightButton;
	id<CNFRegFirstRunDelegate> _delegate;
	UIBarButtonItem* _customRightButton;
	UIBarButtonItem* _customLeftButton;
	NSTimer* _timeoutTimer;
	BOOL _timedOut;
	BOOL _cancelled;
	IMAccount* _account;

}

@property (nonatomic,retain) UIBarButtonItem * previousLeftButton;               //@synthesize previousLeftButton=_previousLeftButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * previousRightButton;              //@synthesize previousRightButton=_previousRightButton - In the implementation block
@property (assign,nonatomic) BOOL previousHidesBackButton;                       //@synthesize previousHidesBackButton=_previousHidesBackButton - In the implementation block
@property (assign,nonatomic) BOOL timedOut;                                      //@synthesize timedOut=_timedOut - In the implementation block
@property (nonatomic,retain) IMAccount * account;                                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) Class completionControllerClass;                    //@synthesize completionControllerClass=_completionControllerClass - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * customLeftButton;                 //@synthesize customLeftButton=_customLeftButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * customRightButton;                //@synthesize customRightButton=_customRightButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<CNFRegFirstRunDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentAppearanceStyle; 
-(void)dealloc;
-(id<CNFRegFirstRunDelegate>)delegate;
-(void)setDelegate:(id<CNFRegFirstRunDelegate>)arg1 ;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_hidesBackButton;
-(id)titleString;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(BOOL)timedOut;
-(void)setTimedOut:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)_updateUI;
-(void)_handleTimeout;
-(void)setCellsChecked:(BOOL)arg1 ;
-(id)customTitle;
-(id)initWithRegController:(id)arg1 ;
-(long long)currentAppearanceStyle;
-(void)_setupEventHandlers;
-(void)_stopValidationModeAnimated:(BOOL)arg1 ;
-(id)initWithRegController:(id)arg1 account:(id)arg2 ;
-(void)setCompletionControllerClass:(Class)arg1 ;
-(void)setCustomLeftButton:(UIBarButtonItem *)arg1 ;
-(void)setCustomRightButton:(UIBarButtonItem *)arg1 ;
-(void)_stopTimeout;
-(void)_timeoutFired:(id)arg1 ;
-(void)_startTimeoutWithDuration:(double)arg1 ;
-(BOOL)dismissWithState:(unsigned long long)arg1 ;
-(void)_refreshNavBarAnimated:(BOOL)arg1 ;
-(Class)completionControllerClass;
-(void)_handleReturnKeyTapped:(id)arg1 ;
-(void)_returnKeyPressed;
-(void)_refreshCurrentState;
-(void)_startListeningForReturnKey;
-(void)_stopListeningForReturnKey;
-(id)_leftButtonItem;
-(id)_rightButtonItem;
-(void)_rightButtonTapped;
-(void)_handleValidationModeCancelled;
-(void)_leftButtonTapped;
-(void)_cancelValidationMode;
-(void)setPreviousLeftButton:(UIBarButtonItem *)arg1 ;
-(void)setPreviousRightButton:(UIBarButtonItem *)arg1 ;
-(void)setPreviousHidesBackButton:(BOOL)arg1 ;
-(id)_validationModeCancelButton;
-(void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2 allowCancel:(BOOL)arg3 ;
-(UIBarButtonItem *)previousLeftButton;
-(UIBarButtonItem *)previousRightButton;
-(BOOL)previousHidesBackButton;
-(void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)validationString;
-(void)_startValidationModeAnimated:(BOOL)arg1 allowCancel:(BOOL)arg2 ;
-(void)_stopActivityIndicatorAnimated:(BOOL)arg1 ;
-(BOOL)pushCompletionControllerIfPossible;
-(void)_updateControllerState;
-(UIBarButtonItem *)customLeftButton;
-(UIBarButtonItem *)customRightButton;
-(id)initWithParentController:(id)arg1 account:(id)arg2 ;
-(void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_startValidationModeAnimated:(BOOL)arg1 ;
-(void)_executeDismissBlock:(/*^block*/id)arg1 ;
@end

