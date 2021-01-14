/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIViewController *)remoteViewController;
-(void)setConnectionIdentifier:(NSUUID *)arg1 ;
-(void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 ;
-(id)initWithExtensionProxy:(id)arg1 ;
-(void)connectUIExtensionWithHandler:(/*^block*/id)arg1 ;
-(int)processIdentifier;
-(id)init;
-(id)_errorForIntent:(id)arg1 ;
-(id)_errorForIntentVendorContext:(id)arg1 ;
-(id)_handleOrConfirmIntent:(id)arg1 expectResponseClass:(Class)arg2 isHandle:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)intentResponseObserverProxy;
-(id)_errorForIntentResponse:(id)arg1 withExpectResponseClass:(Class)arg2 ;
-(void)_completeOrCancelTransaction:(BOOL)arg1 withIntentIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setIntentResponseObserverProxy:(id)arg1 ;
-(void)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 completion:(/*^block*/id)arg3 ;
-(id)context;
-(NSUUID *)serviceIdentifier;
-(NSUUID *)connectionIdentifier;
-(id)description;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(id)extension;
-(void)setState:(unsigned long long)arg1 ;
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
-(unsigned long long)state;
-(id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 ;
-(void)stopSendingUpdatesForIntent:(id)arg1 ;
-(id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(NSExtension *)realExtension;
-(id<_MXExtensionURLHandling>)URLHandlingDelegate;
-(void)setURLHandlingDelegate:(id<_MXExtensionURLHandling>)arg1 ;
-(void)connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg1 Handler:(/*^block*/id)arg2 ;
-(_MXExtension *)extensionProxy;
-(void)_connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg1 Handler:(/*^block*/id)arg2 ;
-(void)setRealExtension:(NSExtension *)arg1 ;
-(void)connectExtensionWithHandler:(/*^block*/id)arg1 ;
-(id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3 ;
-(void)disconnectExtension;
@end

