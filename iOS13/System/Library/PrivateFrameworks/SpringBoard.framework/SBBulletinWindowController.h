/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBBulletinWindow, NSMutableSet, SBBulletinRootViewController, UIViewController, UIWindow;

@interface SBBulletinWindowController : NSObject {

	SBBulletinWindow* _bulletinWindow;
	BOOL _rotatingKeyboard;
	BOOL _aboveAssistant;
	NSMutableSet* _windowClients;
	NSMutableSet* _keyClients;
	NSMutableSet* _busyClients;
	NSMutableSet* _busyReasons;
	SBBulletinRootViewController* _rootVC;
	BOOL _wantsKeyWindow;

}

@property (assign,setter=_setWantsKeyWindow:,getter=_wantsKeyWindow,nonatomic) BOOL wantsKeyWindow;              //@synthesize wantsKeyWindow=_wantsKeyWindow - In the implementation block
@property (nonatomic,readonly) UIViewController * rootViewController;                                            //@synthesize rootVC=_rootVC - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                                                                //@synthesize bulletinWindow=_bulletinWindow - In the implementation block
@property (assign,getter=isWindowAboveAssistant,nonatomic) BOOL windowAboveAssistant;                            //@synthesize aboveAssistant=_aboveAssistant - In the implementation block
+(id)sharedInstance;
+(BOOL)_isSecure;
-(id)init;
-(void)dealloc;
-(BOOL)isBusy;
-(UIWindow *)window;
-(UIViewController *)rootViewController;
-(void)setBusy:(BOOL)arg1 forReason:(id)arg2 ;
-(void)addBusyClient:(id)arg1 ;
-(void)removeBusyClient:(id)arg1 ;
-(void)setWindowAboveAssistant:(BOOL)arg1 ;
-(void)addWindowClient:(id)arg1 ;
-(void)removeWindowClient:(id)arg1 ;
-(void)_resignAsKeyWindow;
-(void)_setWantsKeyWindow:(BOOL)arg1 ;
-(void)_becomeKeyWindow;
-(void)_didBecomeKeyWindow:(id)arg1 ;
-(void)_didResignKeyWindow:(id)arg1 ;
-(void)updateKeyWindowStatusIfNecessary;
-(BOOL)_isBusyForReason:(id)arg1 ;
-(void)addWindowClient:(id)arg1 withChildViewController:(id)arg2 ;
-(void)removeWindowClient:(id)arg1 withChildViewController:(id)arg2 ;
-(BOOL)_hasKeyWindowClients;
-(BOOL)isWindowAboveAssistant;
-(BOOL)_wantsKeyWindow;
@end

