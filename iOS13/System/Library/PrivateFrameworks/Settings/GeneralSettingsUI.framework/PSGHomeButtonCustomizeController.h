/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PSGCircleSegmentedControlDelegate.h>
#import <libobjc.A.dylib/SBSHardwareButtonEventConsuming.h>

@protocol BSInvalidatable, PSGHomeButtonCustomizeControllerDelegate;
@class BFFPaneHeaderView, PSGCircleSegmentedControl, UITapGestureRecognizer, NSString;

@interface PSGHomeButtonCustomizeController : UIViewController <PSGCircleSegmentedControlDelegate, SBSHardwareButtonEventConsuming> {

	BFFPaneHeaderView* _headerView;
	PSGCircleSegmentedControl* _segmentedControl;
	UITapGestureRecognizer* _menuButtonRecognizer;
	id<BSInvalidatable> _eventConsumerToken;
	BOOL _visible;
	BOOL _forceFeelValueChanged;
	BOOL _reachabilityEnabled;
	BOOL _usesDoneButton;
	id<PSGHomeButtonCustomizeControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PSGHomeButtonCustomizeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesDoneButton;                                                       //@synthesize usesDoneButton=_usesDoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PSGHomeButtonCustomizeControllerDelegate>)delegate;
-(void)setDelegate:(id<PSGHomeButtonCustomizeControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)consumeAnyPressEventForButtonKind:(long long)arg1 ;
-(void)segmentedControl:(id)arg1 didSelectSegmentAtIndex:(unsigned long long)arg2 ;
-(void)setUsesDoneButton:(BOOL)arg1 ;
-(void)setListeningForHomeButtonPresses:(BOOL)arg1 ;
-(void)barButtonTapped;
-(void)_updateDetailText;
-(void)_makeConstraints;
-(unsigned long long)getForceFeel;
-(void)setForceFeel:(unsigned long long)arg1 ;
-(BOOL)usesDoneButton;
@end

