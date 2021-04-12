/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPRemoteDisplayXPCClientInterface.h>
#import <libobjc.A.dylib/RPAuthenticatable.h>
#import <libobjc.A.dylib/RPMessageable.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, RPRemoteDisplayDevice, NSObject, CUBonjourDevice, RPRemoteDisplayServer, NSNumber, NSXPCConnection;

@interface RPRemoteDisplaySession : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface, RPAuthenticatable, RPMessageable> {

	BOOL _activateCalled;
	NSMutableDictionary* _eventRegistrations;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _requestRegistrations;
	BOOL _needsAWDL;
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
	unsigned long long _controlFlags;
	RPRemoteDisplayDevice* _destinationDevice;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	CUBonjourDevice* _bonjourDevice;
	RPRemoteDisplayDevice* _daemonDevice;
	RPRemoteDisplayServer* _server;
	NSNumber* _sessionID;
	NSXPCConnection* _xpcCnx;

}

@property (nonatomic,retain) CUBonjourDevice * bonjourDevice;                         //@synthesize bonjourDevice=_bonjourDevice - In the implementation block
@property (nonatomic,retain) RPRemoteDisplayDevice * daemonDevice;                    //@synthesize daemonDevice=_daemonDevice - In the implementation block
@property (nonatomic,readonly) unsigned internalAuthFlags;                            //@synthesize internalAuthFlags=_internalAuthFlags - In the implementation block
@property (assign,nonatomic) BOOL needsAWDL;                                          //@synthesize needsAWDL=_needsAWDL - In the implementation block
@property (nonatomic,retain) RPRemoteDisplayServer * server;                          //@synthesize server=_server - In the implementation block
@property (nonatomic,copy) NSNumber * sessionID;                                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcCnx;                                //@synthesize xpcCnx=_xpcCnx - In the implementation block
@property (assign,nonatomic) unsigned long long controlFlags;                         //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,retain) RPRemoteDisplayDevice * destinationDevice;               //@synthesize destinationDevice=_destinationDevice - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
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
-(void)setNeedsAWDL:(BOOL)arg1 ;
-(id)errorHandler;
-(BOOL)needsAWDL;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(NSNumber *)sessionID;
-(void)setSessionID:(NSNumber *)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)init;
-(void)setServer:(RPRemoteDisplayServer *)arg1 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)xpcCnx;
-(unsigned)pairVerifyFlags;
-(CUBonjourDevice *)bonjourDevice;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)password;
-(void)_ensureXPCStarted;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(id)description;
-(void)setBonjourDevice:(CUBonjourDevice *)arg1 ;
-(RPRemoteDisplayDevice *)destinationDevice;
-(RPRemoteDisplayServer *)server;
-(void)setPassword:(NSString *)arg1 ;
-(void)setHidePasswordHandler:(id)arg1 ;
-(void)deregisterEventID:(id)arg1 ;
-(void)setDestinationDevice:(RPRemoteDisplayDevice *)arg1 ;
-(void)_interrupted;
-(void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)hidePasswordHandler;
-(void)_invalidated;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(id)authCompletionHandler;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)internalAuthFlags;
-(void)invalidate;
-(void)deregisterRequestID:(id)arg1 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(unsigned)pairSetupFlags;
-(id)invalidationHandler;
-(id)showPasswordHandler;
-(id)interruptionHandler;
-(void)setShowPasswordHandler:(id)arg1 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remoteDisplayPromptForPasswordWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(void)remoteDisplayAuthCompleted:(id)arg1 ;
-(void)remoteDisplaySessionError:(id)arg1 ;
-(void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 ;
-(void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setXpcCnx:(NSXPCConnection *)arg1 ;
-(void)_sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(RPRemoteDisplayDevice *)daemonDevice;
-(void)setDaemonDevice:(RPRemoteDisplayDevice *)arg1 ;
@end

