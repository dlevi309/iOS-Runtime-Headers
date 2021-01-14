/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <Rapport/Rapport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPCompanionLinkXPCClientInterface.h>
#import <libobjc.A.dylib/RPAuthenticatable.h>
#import <libobjc.A.dylib/RPMessageable.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject, RPEndpoint, RPConnection;

@interface RPSession : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	unsigned _pairSetupFlags;
	unsigned _pairVerifyFlags;
	int _passwordType;
	int _passwordTypeActual;
	NSString* _password;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _showPasswordHandler;
	/*^block*/id _hidePasswordHandler;
	/*^block*/id _promptForPasswordHandler;
	unsigned long long _controlFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	RPEndpoint* _peerEndpoint;
	NSString* _serviceType;
	RPConnection* _cnx;
	NSString* _peerID;
	unsigned long long _sessionID;
	unsigned long long _startTicks;

}

@property (nonatomic,retain) RPConnection * cnx;                                      //@synthesize cnx=_cnx - In the implementation block
@property (nonatomic,copy) NSString * peerID;                                         //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) unsigned long long sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned long long startTicks;                           //@synthesize startTicks=_startTicks - In the implementation block
@property (assign,nonatomic) unsigned long long controlFlags;                         //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) RPEndpoint * peerEndpoint;                               //@synthesize peerEndpoint=_peerEndpoint - In the implementation block
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
-(void)setPeerID:(NSString *)arg1 ;
-(RPConnection *)cnx;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(id)init;
-(void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)pairVerifyFlags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)peerID;
-(unsigned long long)startTicks;
-(void)setStartTicks:(unsigned long long)arg1 ;
-(NSString *)password;
-(void)_ensureXPCStarted;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setPeerEndpoint:(RPEndpoint *)arg1 ;
-(RPEndpoint *)peerEndpoint;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(id)description;
-(void)setPassword:(NSString *)arg1 ;
-(void)setHidePasswordHandler:(id)arg1 ;
-(void)deregisterEventID:(id)arg1 ;
-(void)_interrupted;
-(void)setCnx:(RPConnection *)arg1 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)hidePasswordHandler;
-(void)_invalidated;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(id)authCompletionHandler;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)deregisterRequestID:(id)arg1 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)serviceType;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(unsigned)pairSetupFlags;
-(id)invalidationHandler;
-(NSString *)label;
-(id)showPasswordHandler;
-(id)interruptionHandler;
-(void)dealloc;
-(void)setShowPasswordHandler:(id)arg1 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

