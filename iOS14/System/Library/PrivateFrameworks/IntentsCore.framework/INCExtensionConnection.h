/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/INXPCListenerEndpointProvider.h>

@protocol INIntentBackgroundHandlingAssertion, OS_dispatch_queue;
@class FBSDisplayLayoutMonitor, INCDisplayLayoutMonitorObserver, INWatchdogTimer, RBSAssertion, NSObject, INCExtensionTransaction, NSXPCListener, INCAppProxy, NSArray, NSXPCInterface, NSXPCConnection, INIntent, NSString;

@interface INCExtensionConnection : NSObject <NSXPCListenerDelegate, INXPCListenerEndpointProvider> {

	FBSDisplayLayoutMonitor* _displayLayoutMonitor;
	INCDisplayLayoutMonitorObserver* _layoutObserver;
	INWatchdogTimer* _requestTimer;
	id<INIntentBackgroundHandlingAssertion> _backgroundHandlingAssertion;
	RBSAssertion* _processAssertion;
	BOOL _shouldObserveLayout;
	NSObject*<OS_dispatch_queue> _queue;
	INCExtensionTransaction* _transaction;
	NSXPCListener* _xpcListener;
	INCAppProxy* _appProxy;
	long long _supportedExtensionTypes;
	NSArray* _extensionInputItems;
	double _requestTimeoutInterval;
	/*^block*/id _timeoutHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _appHandler;
	/*^block*/id _remoteExtensionProxyProvider;
	NSXPCInterface* _xpcInterface;
	NSXPCConnection* _xpcConnection;
	id _xpcObject;

}

@property (assign,setter=_setShouldObserveLayout:,nonatomic) BOOL _shouldObserveLayout;              //@synthesize shouldObserveLayout=_shouldObserveLayout - In the implementation block
@property (nonatomic,copy) id remoteExtensionProxyProvider;                                          //@synthesize remoteExtensionProxyProvider=_remoteExtensionProxyProvider - In the implementation block
@property (nonatomic,readonly) NSXPCListener * xpcListener;                                          //@synthesize xpcListener=_xpcListener - In the implementation block
@property (setter=setXPCInterface:,nonatomic,retain) NSXPCInterface * xpcInterface;                  //@synthesize xpcInterface=_xpcInterface - In the implementation block
@property (setter=setXPCConnection:,nonatomic,retain) NSXPCConnection * xpcConnection;               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (setter=setXPCObject:,nonatomic,retain) id xpcObject;                                      //@synthesize xpcObject=_xpcObject - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) INCExtensionTransaction * _transaction;                               //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) INCAppProxy * appProxy;                                               //@synthesize appProxy=_appProxy - In the implementation block
@property (nonatomic,readonly) long long supportedExtensionTypes;                                    //@synthesize supportedExtensionTypes=_supportedExtensionTypes - In the implementation block
@property (nonatomic,retain) INIntent * intent; 
@property (nonatomic,retain) NSArray * extensionInputItems;                                          //@synthesize extensionInputItems=_extensionInputItems - In the implementation block
@property (assign,nonatomic) double requestTimeoutInterval;                                          //@synthesize requestTimeoutInterval=_requestTimeoutInterval - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                                                        //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                                   //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (assign,nonatomic) BOOL requiresTCC; 
@property (nonatomic,copy) id appHandler;                                                            //@synthesize appHandler=_appHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(INIntent *)intent;
-(NSXPCConnection *)xpcConnection;
-(void)setXPCConnection:(id)arg1 ;
-(INCExtensionTransaction *)_transaction;
-(NSObject*<OS_dispatch_queue>)_queue;
-(id)xpcObject;
-(void)setIntent:(INIntent *)arg1 ;
-(void)setTimeoutHandler:(id)arg1 ;
-(void)setRequiresTCC:(BOOL)arg1 ;
-(void)setAppHandler:(id)arg1 ;
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSXPCInterface *)xpcInterface;
-(void)_invalidateAssertions;
-(void)setInterruptionHandler:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)reset;
-(NSXPCListener *)xpcListener;
-(INCAppProxy *)appProxy;
-(id)initWithIntent:(id)arg1 ;
-(id)xpcListenerEndpointWithInterface:(id)arg1 object:(id)arg2 ;
-(id)timeoutHandler;
-(id)interruptionHandler;
-(void)dealloc;
-(void)setExtensionInputItems:(NSArray *)arg1 ;
-(NSArray *)extensionInputItems;
-(BOOL)requiresTCC;
-(BOOL)_shouldObserveLayout;
-(id)initWithIntent:(id)arg1 remoteProxyProvider:(/*^block*/id)arg2 ;
-(id)initWithIntent:(id)arg1 supportedExtensionTypes:(long long)arg2 remoteProxyProvider:(/*^block*/id)arg3 ;
-(id)initWithIntent:(id)arg1 supportedExtensionTypes:(long long)arg2 donateInteraction:(BOOL)arg3 groupIdentifier:(id)arg4 remoteProxyProvider:(/*^block*/id)arg5 ;
-(void)_invalidateDisplayLayoutMonitor;
-(void)_setShouldObserveLayout:(BOOL)arg1 ;
-(void)_startRequestTimerWithExtensionProxy:(id)arg1 ;
-(double)_timeoutIntervalForTransactionState:(id)arg1 ;
-(BOOL)_cancelRequestTimer;
-(void)_takeAssertionsForIntent:(id)arg1 extensionBundleIdentifier:(id)arg2 processIdentifier:(int)arg3 ;
-(void)_takeInUseAssertionForIntent:(id)arg1 extensionBundleIdentifier:(id)arg2 ;
-(void)_takeRunningBoardAssertionForProcessIdentifier:(int)arg1 ;
-(void)_invalidateInUseAssertion;
-(void)_invalidateRunningBoardAssertion;
-(long long)supportedExtensionTypes;
-(double)requestTimeoutInterval;
-(void)setRequestTimeoutInterval:(double)arg1 ;
-(id)appHandler;
-(id)remoteExtensionProxyProvider;
-(void)setRemoteExtensionProxyProvider:(id)arg1 ;
-(void)setXPCInterface:(id)arg1 ;
-(void)setXPCObject:(id)arg1 ;
@end
