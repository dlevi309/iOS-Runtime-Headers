/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_cleanup;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(UIViewController *)presentingViewController;
-(void)activate;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)pairingError:(id)arg1 ;
-(void)promptWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(id)retryHandler;
-(void)setRetryHandler:(id)arg1 ;
-(id)tryPINHandler;
-(void)setTryPINHandler:(id)arg1 ;
@end

