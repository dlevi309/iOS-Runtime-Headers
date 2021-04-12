/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <Rapport/Rapport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPCompanionLinkXPCClientInterface.h>
#import <libobjc.A.dylib/RPAuthenticatable.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject;

@interface RPServer : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable> {

	BOOL _activateCalled;
	BOOL _changesPending;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
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
	/*^block*/id _acceptHandler;
	unsigned long long _controlFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _serviceType;

}

@property (nonatomic,readonly) unsigned internalAuthFlags;                            //@synthesize internalAuthFlags=_internalAuthFlags - In the implementation block
@property (nonatomic,copy) id acceptHandler;                                          //@synthesize acceptHandler=_acceptHandler - In the implementation block
@property (assign,nonatomic) unsigned long long controlFlags;                         //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                                  //@synthesize serviceType=_serviceType - In the implementation block
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
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setPassword:(NSString *)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)controlFlags;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)activate;
-(void)setServiceType:(NSString *)arg1 ;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_ensureXPCStarted;
-(id)acceptHandler;
-(void)setAcceptHandler:(id)arg1 ;
-(int)passwordType;
-(void)xpcServerAcceptSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcServerShowPassword:(id)arg1 flags:(unsigned)arg2 ;
-(void)xpcServerHidePassword:(unsigned)arg1 ;
-(void)tryPassword:(id)arg1 ;
-(unsigned)pairSetupFlags;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(unsigned)pairVerifyFlags;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(void)setPasswordType:(int)arg1 ;
-(int)passwordTypeActual;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(id)showPasswordHandler;
-(void)setShowPasswordHandler:(id)arg1 ;
-(id)hidePasswordHandler;
-(void)setHidePasswordHandler:(id)arg1 ;
-(id)promptForPasswordHandler;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(unsigned)internalAuthFlags;
-(void)_activateWithReactivate:(BOOL)arg1 ;
@end

