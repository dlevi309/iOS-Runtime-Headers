/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
*/


@protocol OS_dispatch_queue;
@class UIViewController, NSObject;

@interface RPPairingUIController : NSObject {

	UIViewController* _presentingViewController;
	/*^block*/id _invalidationHandler;
	/*^block*/id _retryHandler;
	/*^block*/id _tryPINHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id retryHandler;                                            //@synthesize retryHandler=_retryHandler - In the implementation block
@property (nonatomic,copy) id tryPINHandler;                                           //@synthesize tryPINHandler=_tryPINHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_cleanup;
-(UIViewController *)presentingViewController;
-(void)activate;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)pairingError:(id)arg1 ;
-(void)promptWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(id)retryHandler;
-(void)setRetryHandler:(id)arg1 ;
-(id)tryPINHandler;
-(void)setTryPINHandler:(id)arg1 ;
@end

