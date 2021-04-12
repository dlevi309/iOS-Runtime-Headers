/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol _MXExtensionURLHandling;
@class _MXSerialQueue, NSUUID, NSExtension, _MXExtension, UIViewController;

@interface _MXExtensionService : NSObject {

	_MXSerialQueue* _serialQueue;
	BOOL _didSendConnectionTerminationNotifcation;
	NSUUID* _connectionIdentifier;
	NSExtension* _realExtension;
	_MXExtension* _extensionProxy;
	unsigned long long _state;
	id<_MXExtensionURLHandling> _URLHandlingDelegate;
	UIViewController* _remoteViewController;

}

@property (nonatomic,readonly) NSUUID * serviceIdentifier; 
@property (nonatomic,retain) NSUUID * connectionIdentifier;                                       //@synthesize connectionIdentifier=_connectionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIViewController * remoteViewController;                             //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSExtension * realExtension;                                         //@synthesize realExtension=_realExtension - In the implementation block
@property (assign,nonatomic,__weak) id<_MXExtensionURLHandling> URLHandlingDelegate;              //@synthesize URLHandlingDelegate=_URLHandlingDelegate - In the implementation block
@property (nonatomic,readonly) _MXExtension * extensionProxy;                                     //@synthesize extensionProxy=_extensionProxy - In the implementation block
+(id)extensionCompletionQueue;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)cancel;
-(int)processIdentifier;
-(unsigned long long)state;
-(id)context;
-(void)setState:(unsigned long long)arg1 ;
-(UIViewController *)remoteViewController;
-(id)extension;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(NSUUID *)serviceIdentifier;
-(_MXExtension *)extensionProxy;
-(id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 ;
-(void)stopSendingUpdatesForIntent:(id)arg1 ;
-(id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSExtension *)realExtension;
-(NSUUID *)connectionIdentifier;
-(id<_MXExtensionURLHandling>)URLHandlingDelegate;
-(void)setURLHandlingDelegate:(id<_MXExtensionURLHandling>)arg1 ;
-(void)connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg1 Handler:(/*^block*/id)arg2 ;
-(void)_connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg1 Handler:(/*^block*/id)arg2 ;
-(void)setRealExtension:(NSExtension *)arg1 ;
-(void)setConnectionIdentifier:(NSUUID *)arg1 ;
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
-(id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectExtensionWithHandler:(/*^block*/id)arg1 ;
-(id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3 ;
-(void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 ;
-(void)disconnectExtension;
-(id)initWithExtensionProxy:(id)arg1 ;
-(void)connectUIExtensionWithHandler:(/*^block*/id)arg1 ;
-(id)_errorForIntent:(id)arg1 ;
-(id)_errorForIntentVendorContext:(id)arg1 ;
-(id)_handleOrConfirmIntent:(id)arg1 expectResponseClass:(Class)arg2 isHandle:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_errorForIntentResponse:(id)arg1 withExpectResponseClass:(Class)arg2 ;
-(void)_completeOrCancelTransaction:(BOOL)arg1 withIntentIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)intentResponseObserverProxy;
-(id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setIntentResponseObserverProxy:(id)arg1 ;
-(void)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 completion:(/*^block*/id)arg3 ;
@end

