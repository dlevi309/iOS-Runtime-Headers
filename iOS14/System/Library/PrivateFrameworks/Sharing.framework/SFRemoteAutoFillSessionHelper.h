/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, SDAutoFillAgent;

@interface SFRemoteAutoFillSessionHelper : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _dismissUserNotificationHandler;
	/*^block*/id _pairingResponseHandler;
	/*^block*/id _promptForPINHandler;
	SDAutoFillAgent* _agent;

}

@property (nonatomic,retain) SDAutoFillAgent * agent;                                 //@synthesize agent=_agent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id dismissUserNotificationHandler;                         //@synthesize dismissUserNotificationHandler=_dismissUserNotificationHandler - In the implementation block
@property (nonatomic,copy) id pairingResponseHandler;                                 //@synthesize pairingResponseHandler=_pairingResponseHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(SDAutoFillAgent *)agent;
-(id)init;
-(void)setAgent:(SDAutoFillAgent *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_ensureXPCStarted;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)autoFillDismissUserNotification;
-(void)autoFillPairingSucceeded:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)autoFillPromptForPIN:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)serverTryPIN:(id)arg1 ;
-(void)serverUserNotificationDidActivate:(id)arg1 ;
-(void)serverDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3 ;
-(void)serverUserNotificationDidDismiss:(id)arg1 ;
-(void)clientDismissUserNotification;
-(void)clientPairingSucceeded:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)clientPromptForPIN:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(id)dismissUserNotificationHandler;
-(void)setDismissUserNotificationHandler:(id)arg1 ;
-(id)pairingResponseHandler;
-(void)setPairingResponseHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
@end

