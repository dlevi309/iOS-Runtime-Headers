/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_ensureXPCStarted;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)autoFillDismissUserNotification;
-(void)autoFillPairingSucceeded:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)autoFillPromptForPIN:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(void)serverDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3 ;
-(void)serverTryPIN:(id)arg1 ;
-(void)serverUserNotificationDidActivate:(id)arg1 ;
-(void)serverUserNotificationDidDismiss:(id)arg1 ;
-(void)clientDismissUserNotification;
-(void)clientPairingSucceeded:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)clientPromptForPIN:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(id)dismissUserNotificationHandler;
-(void)setDismissUserNotificationHandler:(id)arg1 ;
-(id)pairingResponseHandler;
-(void)setPairingResponseHandler:(id)arg1 ;
-(SDAutoFillAgent *)agent;
-(void)setAgent:(SDAutoFillAgent *)arg1 ;
@end

