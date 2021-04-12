/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <UIKitCore/UIViewController.h>
#import <TVRemoteUI/_TVRUIEventDelegate.h>
#import <TVRemoteUI/TVRUIRemoteViewProvider.h>

@protocol _TVRUIEventDelegate, TVRUIDevice, TVRUIStyleProvider;
@class _TVRUIButtonPanelView, _TVRSiriHaptic, UIView, NSString;

@interface TVRUIControlPanelViewController : UIViewController <_TVRUIEventDelegate, TVRUIRemoteViewProvider> {

	id<_TVRUIEventDelegate> _buttonActionsDelegate;
	_TVRUIButtonPanelView* _touchpadButtonPanel;
	_TVRUIButtonPanelView* _genericButtonPanel;
	_TVRUIButtonPanelView* _panelWithKeyboardButton;
	_TVRUIButtonPanelView* _legacyButtonPanel;
	_TVRUIButtonPanelView* _legacyPanelWithKeyboardButton;
	id<TVRUIDevice> _remoteDevice;
	id<TVRUIStyleProvider> _styleProvider;
	_TVRSiriHaptic* _siriHaptic;
	UIView* _backgroundView;

}

@property (nonatomic,retain) _TVRUIButtonPanelView * touchpadButtonPanel;                        //@synthesize touchpadButtonPanel=_touchpadButtonPanel - In the implementation block
@property (nonatomic,retain) _TVRUIButtonPanelView * genericButtonPanel;                         //@synthesize genericButtonPanel=_genericButtonPanel - In the implementation block
@property (nonatomic,retain) _TVRUIButtonPanelView * panelWithKeyboardButton;                    //@synthesize panelWithKeyboardButton=_panelWithKeyboardButton - In the implementation block
@property (nonatomic,retain) _TVRUIButtonPanelView * legacyButtonPanel;                          //@synthesize legacyButtonPanel=_legacyButtonPanel - In the implementation block
@property (nonatomic,retain) _TVRUIButtonPanelView * legacyPanelWithKeyboardButton;              //@synthesize legacyPanelWithKeyboardButton=_legacyPanelWithKeyboardButton - In the implementation block
@property (nonatomic,retain) id<TVRUIDevice> remoteDevice;                                       //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,retain) id<TVRUIStyleProvider> styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) _TVRSiriHaptic * siriHaptic;                                        //@synthesize siriHaptic=_siriHaptic - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRUIEventDelegate> buttonActionsDelegate;               //@synthesize buttonActionsDelegate=_buttonActionsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)backgroundView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setDevice:(id)arg1 ;
-(void)setStyleProvider:(id<TVRUIStyleProvider>)arg1 ;
-(id<TVRUIStyleProvider>)styleProvider;
-(id<TVRUIDevice>)remoteDevice;
-(void)setRemoteDevice:(id<TVRUIDevice>)arg1 ;
-(id<_TVRUIEventDelegate>)buttonActionsDelegate;
-(void)setButtonActionsDelegate:(id<_TVRUIEventDelegate>)arg1 ;
-(void)disableSearchButton;
-(void)enableSearchButton;
-(void)transitonToViewForDeviceType:(long long)arg1 ;
-(void)enableControls;
-(void)disableControls;
-(void)showKeyboardButton;
-(void)hideKeyboardButton;
-(_TVRSiriHaptic *)siriHaptic;
-(void)setSiriHaptic:(_TVRSiriHaptic *)arg1 ;
-(void)_createTouchpadButtonPanel;
-(_TVRUIButtonPanelView *)touchpadButtonPanel;
-(void)_transitionToPanelView:(id)arg1 ;
-(_TVRUIButtonPanelView *)genericButtonPanel;
-(_TVRUIButtonPanelView *)panelWithKeyboardButton;
-(_TVRUIButtonPanelView *)legacyButtonPanel;
-(_TVRUIButtonPanelView *)legacyPanelWithKeyboardButton;
-(id)_createViewWithPrimaryButtonType:(long long)arg1 leftButtonTypes:(id)arg2 rightButtonTypes:(id)arg3 ;
-(void)setTouchpadButtonPanel:(_TVRUIButtonPanelView *)arg1 ;
-(void)setGenericButtonPanel:(_TVRUIButtonPanelView *)arg1 ;
-(void)setPanelWithKeyboardButton:(_TVRUIButtonPanelView *)arg1 ;
-(void)setLegacyButtonPanel:(_TVRUIButtonPanelView *)arg1 ;
-(void)setLegacyPanelWithKeyboardButton:(_TVRUIButtonPanelView *)arg1 ;
-(void)_createLegacyPanelWithkeyboard;
-(void)_createButtonPanelWithKeyboard;
-(void)_createLegacyButtonPanel;
-(void)_transitionToButtonPanelAndCreateIfNeeded;
-(void)_transitionToTouchpadPanelAndCreateIfNeeded;
-(void)_createGenericControlButtonPanel;
@end

