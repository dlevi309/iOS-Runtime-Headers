/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
*/


@protocol OS_dispatch_queue;
@class NSObject, UIViewController, NSString;

@interface RPPairingManagerUIController : NSObject {

	BOOL _allowManualIP;
	BOOL _runInProcess;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	UIViewController* _presentingViewController;
	NSString* _serviceType;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) BOOL allowManualIP;                                       //@synthesize allowManualIP=_allowManualIP - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) BOOL runInProcess;                                        //@synthesize runInProcess=_runInProcess - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_cleanup;
-(UIViewController *)presentingViewController;
-(void)activate;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(BOOL)allowManualIP;
-(void)setAllowManualIP:(BOOL)arg1 ;
-(BOOL)runInProcess;
-(void)setRunInProcess:(BOOL)arg1 ;
@end

