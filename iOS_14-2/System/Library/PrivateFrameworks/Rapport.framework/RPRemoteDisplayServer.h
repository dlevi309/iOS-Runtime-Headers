/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPAuthenticatable.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;

@interface RPRemoteDisplayServer : NSObject <NSSecureCoding, RPAuthenticatable> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _sessions;
	NSXPCConnection* _xpcCnx;
	unsigned _pairSetupFlags;
	unsigned _pairVerifyFlags;
	int _passwordType;
	int _passwordTypeActual;
	unsigned _internalAuthFlags;
	NSString* _password;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _showPasswordHandler;
	/*^block*/id _hidePasswordHandler;
	/*^block*/id _promptForPasswordHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _sessionStartHandler;
	/*^block*/id _sessionEndedHandler;

}

@property (nonatomic,readonly) unsigned internalAuthFlags;                            //@synthesize internalAuthFlags=_internalAuthFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id sessionStartHandler;                                    //@synthesize sessionStartHandler=_sessionStartHandler - In the implementation block
@property (nonatomic,copy) id sessionEndedHandler;                                    //@synthesize sessionEndedHandler=_sessionEndedHandler - In the implementation block
@property (assign,nonatomic) unsigned pairSetupFlags;                                 //@synthesize pairSetupFlags=_pairSetupFlags - In the implementation block
@property (assign,nonatomic) unsigned pairVerifyFlags;                                //@synthesize pairVerifyFlags=_pairVerifyFlags - In the implementation block
@property (nonatomic,copy) NSString * password;                                       //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) int passwordType;                                        //@synthesize passwordType=_passwordType - In the implementation block
@property (nonatomic,readonly) int passwordTypeActual;                                //@synthesize passwordTypeActual=_passwordTypeActual - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                  //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id showPasswordHandler;                                    //@synthesize showPasswordHandler=_showPasswordHandler - In the implementation block
@property (nonatomic,copy) id hidePasswordHandler;                                    //@synthesize hidePasswordHandler=_hidePasswordHandler - In the implementation block
@property (nonatomic,copy) id promptForPasswordHandler;                               //@synthesize promptForPasswordHandler=_promptForPasswordHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPasswordType:(int)arg1 ;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(void)tryPassword:(id)arg1 ;
-(int)passwordTypeActual;
-(id)promptForPasswordHandler;
-(int)passwordType;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)pairVerifyFlags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)password;
-(void)setSessionEndedHandler:(id)arg1 ;
-(id)sessionEndedHandler;
-(void)_ensureXPCStarted;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(id)description;
-(void)setPassword:(NSString *)arg1 ;
-(void)setHidePasswordHandler:(id)arg1 ;
-(void)_interrupted;
-(id)hidePasswordHandler;
-(void)_invalidated;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(id)authCompletionHandler;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)internalAuthFlags;
-(void)invalidate;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(unsigned)pairSetupFlags;
-(id)invalidationHandler;
-(id)showPasswordHandler;
-(id)interruptionHandler;
-(void)setShowPasswordHandler:(id)arg1 ;
-(id)sessionStartHandler;
-(void)setSessionStartHandler:(id)arg1 ;
-(void)remoteDisplayShowPassword:(id)arg1 flags:(unsigned)arg2 ;
-(void)remoteDisplayHidePasswordWithFlags:(unsigned)arg1 ;
-(void)remoteDisplayStartServerSessionID:(id)arg1 device:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remoteDisplaySessionEndedWithID:(id)arg1 ;
-(void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4 ;
-(void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 sessionID:(id)arg5 ;
@end

