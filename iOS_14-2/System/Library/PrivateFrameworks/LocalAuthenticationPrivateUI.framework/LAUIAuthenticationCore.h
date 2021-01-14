/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/

#import <libobjc.A.dylib/LAUIDelegate.h>
#import <libobjc.A.dylib/LAUIAuthentication.h>

@protocol LAUIAuthenticationCoreDelegate;
@class NSObject, UIView, LAContext, NSDictionary;

@interface LAUIAuthenticationCore : NSObject <LAUIDelegate, LAUIAuthentication> {

	BOOL _doneMatching;
	BOOL _applicationActive;
	BOOL _keyWindow;
	BOOL _uiActive;
	NSObject*<LAUIAuthenticationCoreDelegate> _delegate;
	UIView* _view;
	long long _biometryType;
	unsigned long long _enabledMechanisms;
	unsigned long long _activeMechanisms;
	LAContext* _context;
	NSDictionary* _authenticationResult;

}

@property (assign,nonatomic) unsigned long long enabledMechanisms;                                   //@synthesize enabledMechanisms=_enabledMechanisms - In the implementation block
@property (assign,nonatomic) unsigned long long activeMechanisms;                                    //@synthesize activeMechanisms=_activeMechanisms - In the implementation block
@property (assign,getter=isApplicationActive,nonatomic) BOOL applicationActive;                      //@synthesize applicationActive=_applicationActive - In the implementation block
@property (assign,getter=isKeyWindow,nonatomic) BOOL keyWindow;                                      //@synthesize keyWindow=_keyWindow - In the implementation block
@property (assign,getter=isUiActive,nonatomic) BOOL uiActive;                                        //@synthesize uiActive=_uiActive - In the implementation block
@property (nonatomic,retain) LAContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSDictionary * authenticationResult;                                  //@synthesize authenticationResult=_authenticationResult - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<LAUIAuthenticationCoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * view;                                                          //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) long long biometryType;                                               //@synthesize biometryType=_biometryType - In the implementation block
+(void)performBlockOnMainThread:(/*^block*/id)arg1 ;
-(NSObject*<LAUIAuthenticationCoreDelegate>)delegate;
-(id)notificationNames;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(LAContext *)context;
-(void)checkView;
-(void)setView:(UIView *)arg1 ;
-(void)setDelegate:(NSObject*<LAUIAuthenticationCoreDelegate>)arg1 ;
-(UIView *)view;
-(BOOL)isApplicationActive;
-(long long)biometryType;
-(BOOL)isKeyWindow;
-(void)_notification:(id)arg1 ;
-(void)setApplicationActive:(BOOL)arg1 ;
-(void)setContext:(LAContext *)arg1 ;
-(BOOL)disableMechanism:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isMechanismEnabled:(unsigned long long)arg1 ;
-(BOOL)enableMechanism:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)_setupMechanisms:(unsigned long long)arg1 ;
-(id)initWithMechanisms:(unsigned long long)arg1 ;
-(BOOL)isMechanismAvailable:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isMechanismActive:(unsigned long long)arg1 ;
-(void)_setupNotifications:(BOOL)arg1 ;
-(void)setActiveMechanisms:(unsigned long long)arg1 ;
-(void)_enableAvailableMechanisms:(unsigned long long)arg1 ;
-(void)setEnabledMechanisms:(unsigned long long)arg1 ;
-(unsigned long long)enabledMechanisms;
-(unsigned long long)activeMechanisms;
-(BOOL)_mechanism:(unsigned long long)arg1 enable:(BOOL)arg2 error:(id*)arg3 ;
-(void)startOrStopBackgroundMechanisms;
-(void)_stopBackgroundMechanisms;
-(void)_startBackgroundMechanisms;
-(long long)_policyForBackgroundMechanisms;
-(void)_handleBackgroundMechanismsResult:(id)arg1 error:(id)arg2 context:(id)arg3 ;
-(void)_biometryState:(long long)arg1 ;
-(void)_processActivityChangeForNotification:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setKeyWindow:(BOOL)arg1 ;
-(BOOL)isUiActive;
-(void)setUiActive:(BOOL)arg1 ;
-(BOOL)_simpleStatusInParams:(id)arg1 touchId:(long long)arg2 faceId:(long long)arg3 ;
-(void)_biometricNoMatch;
-(NSDictionary *)authenticationResult;
@end

