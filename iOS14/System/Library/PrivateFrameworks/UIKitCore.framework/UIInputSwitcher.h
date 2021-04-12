/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _dismissingEmojiPopover;
	NSString* _loadedIdentifier;

}

@property (nonatomic,copy) NSString * loadedIdentifier;                     //@synthesize loadedIdentifier=_loadedIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isGlobeKeyDown;                           //@synthesize isGlobeKeyDown=_isGlobeKeyDown - In the implementation block
@property (assign,nonatomic) BOOL usingCapsLockLanguageSwitch;              //@synthesize usingCapsLockLanguageSwitch=_usingCapsLockLanguageSwitch - In the implementation block
@property (assign,nonatomic) BOOL dismissingEmojiPopover;                   //@synthesize dismissingEmojiPopover=_dismissingEmojiPopover - In the implementation block
+(id)activeInstance;
+(id)sharedInstance;
-(id)init;
-(void)handleRotate:(id)arg1 ;
-(void)hideSwitcher;
-(BOOL)needsFullHUD;
-(BOOL)isVisible;
-(void)setLoadedIdentifier:(NSString *)arg1 ;
-(void)clearShowSwitcherTimer;
-(NSString *)loadedIdentifier;
-(void)clearHideSwitcherTimer;
-(void)cancelHideSwitcherTimer;
-(BOOL)isGlobeKeyDown;
-(void)cancelShowSwitcherTimer;
-(void)cleanUpAfterHide;
-(void)setIsGlobeKeyDown:(BOOL)arg1 ;
-(BOOL)usingCapsLockLanguageSwitch;
-(void)_showSwitcherViewAsHUD;
-(void)touchHideSwitcherTimer;
-(BOOL)isVisibleOrHiding;
-(void)showSwitcherShouldAutoHide:(BOOL)arg1 ;
-(void)showSwitcherWithAutoHide;
-(void)showSwitcherWithoutAutoHide;
-(void)clearKeyHoldTimer;
-(BOOL)handleSwitchCommand:(BOOL)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3 ;
-(id)inputModeIdentifierWithNextFlag:(BOOL)arg1 ;
-(BOOL)switchMode:(id)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3 ;
-(void)setUsingCapsLockLanguageSwitch:(BOOL)arg1 ;
-(BOOL)handleEmojiPicker;
-(void)touchShowSwitcherTimer;
-(void)hideSwitcherIfNeeded;
-(BOOL)handleGlobeKeyEvent:(id)arg1 switcherIsVisible:(BOOL)arg2 ;
-(BOOL)handleNavigationEvent:(id)arg1 ;
-(BOOL)dismissingEmojiPopover;
-(void)setDismissingEmojiPopover:(BOOL)arg1 ;
-(void)touchKeyHoldTimer;
-(void)updateHardwareLayout;
-(BOOL)handleSwitchCommand:(BOOL)arg1 ;
-(BOOL)switchMode:(id)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3 fromCapsLock:(BOOL)arg4 ;
-(BOOL)handleSwitchingKeyEvent:(id)arg1 ;
-(BOOL)handleModifiersChangedEvent:(id)arg1 ;
-(void)dealloc;
@end

