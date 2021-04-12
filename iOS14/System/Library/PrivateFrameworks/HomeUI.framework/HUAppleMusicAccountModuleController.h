/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUAppleMusicAccountModuleControllerDelegate;
@class HUButtonCell, NAFuture, NSMapTable, HUAppleMusicAccountModule;

@interface HUAppleMusicAccountModuleController : HUItemTableModuleController {

	id<HUAppleMusicAccountModuleControllerDelegate> _delegate;
	HUButtonCell* _logoutButton;
	NAFuture* _logoutFuture;
	HUButtonCell* _loginButton;
	NAFuture* _loginFuture;
	HUButtonCell* _activeAuthCell;
	NSMapTable* _itemToCellMap;

}

@property (assign,nonatomic,__weak) HUButtonCell * logoutButton;                                           //@synthesize logoutButton=_logoutButton - In the implementation block
@property (nonatomic,retain) NAFuture * logoutFuture;                                                      //@synthesize logoutFuture=_logoutFuture - In the implementation block
@property (assign,nonatomic,__weak) HUButtonCell * loginButton;                                            //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,retain) NAFuture * loginFuture;                                                       //@synthesize loginFuture=_loginFuture - In the implementation block
@property (assign,nonatomic,__weak) HUButtonCell * activeAuthCell;                                         //@synthesize activeAuthCell=_activeAuthCell - In the implementation block
@property (nonatomic,retain) NSMapTable * itemToCellMap;                                                   //@synthesize itemToCellMap=_itemToCellMap - In the implementation block
@property (nonatomic,readonly) HUAppleMusicAccountModule * module; 
@property (assign,nonatomic,__weak) id<HUAppleMusicAccountModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)logout;
-(id<HUAppleMusicAccountModuleControllerDelegate>)delegate;
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)setDelegate:(id<HUAppleMusicAccountModuleControllerDelegate>)arg1 ;
-(HUAppleMusicAccountModule *)module;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
-(void)setItemToCellMap:(NSMapTable *)arg1 ;
-(NAFuture *)loginFuture;
-(NAFuture *)logoutFuture;
-(void)setLogoutButton:(HUButtonCell *)arg1 ;
-(HUButtonCell *)logoutButton;
-(void)setLoginButton:(HUButtonCell *)arg1 ;
-(NSMapTable *)itemToCellMap;
-(void)_setupButtonCell:(id)arg1 enabled:(BOOL)arg2 ;
-(HUButtonCell *)loginButton;
-(HUButtonCell *)activeAuthCell;
-(id)kickOffManualLogin;
-(void)_setupCompanionAuthenticationForAccount:(id)arg1 cell:(id)arg2 ;
-(void)setActiveAuthCell:(HUButtonCell *)arg1 ;
-(void)_enableCells;
-(void)_updateModuleState:(unsigned long long)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_reloadForAuthEvent;
-(void)clearLogoutFuture;
-(void)_setupProxyAuthenticationForAccount:(id)arg1 cell:(id)arg2 ;
-(BOOL)_canExecuteAccountAction;
-(void)_disableCells;
-(id)_proxyLoginWithAccount:(id)arg1 cell:(id)arg2 ;
-(void)setLoginFuture:(NAFuture *)arg1 ;
-(id)_companionLoginWithAccount:(id)arg1 cell:(id)arg2 ;
-(id)_authenticationContextForAccessory:(id)arg1 account:(id)arg2 ;
-(void)setLogoutFuture:(NAFuture *)arg1 ;
-(id)_authCells;
@end

