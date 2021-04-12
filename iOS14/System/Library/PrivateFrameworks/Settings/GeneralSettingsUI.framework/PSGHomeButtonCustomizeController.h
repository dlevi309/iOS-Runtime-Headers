/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willBecomeActive;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(id<PSGHomeButtonCustomizeControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDelegate:(id<PSGHomeButtonCustomizeControllerDelegate>)arg1 ;
-(void)willResignActive;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)consumeAnyPressEventForButtonKind:(long long)arg1 ;
-(void)dealloc;
-(void)_makeConstraints;
-(void)_updateDetailText;
-(void)segmentedControl:(id)arg1 didSelectSegmentAtIndex:(unsigned long long)arg2 ;
-(void)setUsesDoneButton:(BOOL)arg1 ;
-(void)setListeningForHomeButtonPresses:(BOOL)arg1 ;
-(void)barButtonTapped;
-(unsigned long long)getForceFeel;
-(void)setForceFeel:(unsigned long long)arg1 ;
-(BOOL)usesDoneButton;
@end

