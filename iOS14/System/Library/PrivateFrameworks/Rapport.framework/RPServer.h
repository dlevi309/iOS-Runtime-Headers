/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPasswordType:(int)arg1 ;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(void)tryPassword:(id)arg1 ;
-(int)passwordTypeActual;
-(id)promptForPasswordHandler;
-(int)passwordType;
-(unsigned long long)controlFlags;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(id)init;
-(void)setAcceptHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)pairVerifyFlags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)password;
-(void)_ensureXPCStarted;
-(void)setServiceType:(NSString *)arg1 ;
-(void)activate;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(id)description;
-(void)_activateWithReactivate:(BOOL)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setHidePasswordHandler:(id)arg1 ;
-(void)xpcServerHidePassword:(unsigned)arg1 ;
-(void)_interrupted;
-(id)hidePasswordHandler;
-(void)xpcServerAcceptSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidated;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(id)authCompletionHandler;
-(void)_update;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)internalAuthFlags;
-(void)invalidate;
-(id)acceptHandler;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(unsigned)pairSetupFlags;
-(void)xpcServerShowPassword:(id)arg1 flags:(unsigned)arg2 ;
-(id)invalidationHandler;
-(NSString *)label;
-(id)showPasswordHandler;
-(id)interruptionHandler;
-(void)dealloc;
-(void)setShowPasswordHandler:(id)arg1 ;
@end

