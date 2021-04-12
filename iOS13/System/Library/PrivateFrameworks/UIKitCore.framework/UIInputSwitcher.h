/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIDelayedAction, UIInputSwitcherView, NSString;

@interface UIInputSwitcher : NSObject {

	UIDelayedAction* m_keyHoldDelay;
	UIDelayedAction* m_showSwitcherDelay;
	UIDelayedAction* m_hideSwitcherDelay;
	int m_state;
	UIInputSwitcherView* m_switcherView;
	double m_lastGlobeKeyUpTime;
	NSString* _newMode;
	BOOL _isGlobeKeyDown;
	BOOL _usingCapsLockLanguageSwitch;
	NSString* _loadedIdentifier;

}

@property (nonatomic,copy) NSString * loadedIdentifier;                     //@synthesize loadedIdentifier=_loadedIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isGlobeKeyDown;                           //@synthesize isGlobeKeyDown=_isGlobeKeyDown - In the implementation block
@property (assign,nonatomic) BOOL usingCapsLockLanguageSwitch;              //@synthesize usingCapsLockLanguageSwitch=_usingCapsLockLanguageSwitch - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isVisible;
-(void)clearShowSwitcherTimer;
-(void)clearHideSwitcherTimer;
-(void)hideSwitcher;
-(void)cancelShowSwitcherTimer;
-(NSString *)loadedIdentifier;
-(void)setIsGlobeKeyDown:(BOOL)arg1 ;
-(BOOL)usingCapsLockLanguageSwitch;
-(void)_showSwitcherViewAsHUD;
-(void)touchHideSwitcherTimer;
-(void)handleRotate:(id)arg1 ;
-(void)showSwitcherShouldAutoHide:(BOOL)arg1 ;
-(void)showSwitcherWithAutoHide;
-(void)showSwitcherWithoutAutoHide;
-(void)clearKeyHoldTimer;
-(BOOL)handleSwitchCommand:(BOOL)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3 ;
-(id)inputModeIdentifierWithNextFlag:(BOOL)arg1 ;
-(BOOL)switchMode:(id)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3 ;
-(void)setUsingCapsLockLanguageSwitch:(BOOL)arg1 ;
-(void)setLoadedIdentifier:(NSString *)arg1 ;
-(void)touchShowSwitcherTimer;
-(BOOL)isVisibleOrHiding;
-(void)hideSwitcherIfNeeded;
-(void)touchKeyHoldTimer;
-(void)updateHardwareLayout;
-(BOOL)isGlobeKeyDown;
-(BOOL)handleSwitchCommand:(BOOL)arg1 ;
-(BOOL)switchMode:(id)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3 fromCapsLock:(BOOL)arg4 ;
-(BOOL)handleSwitchingKeyEvent:(id)arg1 ;
-(BOOL)handleModifiersChangedEvent:(id)arg1 ;
@end

