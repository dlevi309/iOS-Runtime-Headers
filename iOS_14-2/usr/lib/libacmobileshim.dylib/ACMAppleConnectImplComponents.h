/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACCComponents.h>

@protocol ACMAppleConnectPreferences, ACFKeychainManagerProtocol, ACC2SVControllerProtocol, ACMSystemInfoProtocol, ACMUIControllerProtocol, ACMUIControllerDelegate;
@interface ACMAppleConnectImplComponents : ACCComponents {

	id<ACMAppleConnectPreferences> _preferences;
	id<ACFKeychainManagerProtocol> _keychain;
	id<ACC2SVControllerProtocol> _twoSVController;
	id<ACMSystemInfoProtocol> _systemInfo;
	id<ACMUIControllerProtocol> _uiController;
	id<ACMUIControllerDelegate> _uiControllerDelegate;

}

@property (nonatomic,retain) id<ACMAppleConnectPreferences> preferences;                                   //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) id<ACC2SVControllerProtocol> twoSVController;                                 //@synthesize twoSVController=_twoSVController - In the implementation block
@property (nonatomic,retain) id<ACMTicketManagerProtocol> ticketManager; 
@property (nonatomic,retain) id<ACMSystemInfoProtocol> systemInfo;                                         //@synthesize systemInfo=_systemInfo - In the implementation block
@property (nonatomic,retain) id<ACMUIControllerProtocol> uiController;                                     //@synthesize uiController=_uiController - In the implementation block
@property (setter=setUIControllerDelegate:) id<ACMUIControllerDelegate> uiControllerDelegate; 
@property (readonly) BOOL uiControllerLoaded; 
+(id)components;
+(id)defaultComponents;
-(id<ACMAppleConnectPreferences>)preferences;
-(void)setPreferences:(id<ACMAppleConnectPreferences>)arg1 ;
-(id<ACMSystemInfoProtocol>)systemInfo;
-(void)dealloc;
-(id<ACMUIControllerDelegate>)uiControllerDelegate;
-(id)createHandlerWithClass:(Class)arg1 context:(id)arg2 ;
-(id<ACC2SVControllerProtocol>)twoSVController;
-(id<ACMUIControllerProtocol>)uiController;
-(BOOL)uiControllerLoaded;
-(void)unloadUIController;
-(void)setUiController:(id<ACMUIControllerProtocol>)arg1 ;
-(void)setSystemInfo:(id<ACMSystemInfoProtocol>)arg1 ;
-(void)setTwoSVController:(id<ACC2SVControllerProtocol>)arg1 ;
-(void)cleanupOnMemoryWarning;
-(void)setUIControllerDelegate:(id)arg1 ;
-(id)createAuthenticationRequest;
-(id)createTicketVerificationRequest;
@end

