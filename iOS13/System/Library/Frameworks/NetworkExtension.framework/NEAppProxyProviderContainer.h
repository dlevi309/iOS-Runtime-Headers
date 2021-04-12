/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEAppProxyProviderContainerDelegate, OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEAppProxyProvider, NSObject;

@interface NEAppProxyProviderContainer : NSObject {

	unsigned _delegateInterfaceIndex;
	NEAppProxyProvider* _provider;
	id<NEAppProxyProviderContainerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _flowQueue;
	NEFlowDirectorRef _director;
	/*^block*/id _stopCompletionHandler;

}

@property (retain) id<NEAppProxyProviderContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> flowQueue;                        //@synthesize flowQueue=_flowQueue - In the implementation block
@property (assign) NEFlowDirectorRef director;                                    //@synthesize director=_director - In the implementation block
@property (assign) unsigned delegateInterfaceIndex;                               //@synthesize delegateInterfaceIndex=_delegateInterfaceIndex - In the implementation block
@property (copy) id stopCompletionHandler;                                        //@synthesize stopCompletionHandler=_stopCompletionHandler - In the implementation block
@property (readonly) NEAppProxyProvider * provider;                               //@synthesize provider=_provider - In the implementation block
-(id<NEAppProxyProviderContainerDelegate>)delegate;
-(void)setDelegate:(id<NEAppProxyProviderContainerDelegate>)arg1 ;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setConfiguration:(id)arg1 ;
-(NEAppProxyProvider *)provider;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)setDirector:(NEFlowDirectorRef)arg1 ;
-(NEFlowDirectorRef)director;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)wake;
-(void)setStopCompletionHandler:(id)arg1 ;
-(id)stopCompletionHandler;
-(void)setDelegateInterfaceIndex:(unsigned)arg1 ;
-(unsigned)delegateInterfaceIndex;
-(NSObject*<OS_dispatch_queue>)flowQueue;
-(void)setFlowQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)flowDivertOpenControlSocket;
-(void)flowDivertNewFlow:(NEFlowRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInitialFlowDivertControlSocket:(id)arg1 ;
@end

