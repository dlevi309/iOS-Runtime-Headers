/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NEFlowDirectorRef)director;
-(id)stopCompletionHandler;
-(id<NEAppProxyProviderContainerDelegate>)delegate;
-(void)setDelegateInterfaceIndex:(unsigned)arg1 ;
-(NEAppProxyProvider *)provider;
-(void)setFlowQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)flowDivertNewFlow:(NEFlowRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDirector:(NEFlowDirectorRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)flowQueue;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)stop;
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<NEAppProxyProviderContainerDelegate>)arg1 ;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned)delegateInterfaceIndex;
-(void)setInitialFlowDivertControlSocket:(id)arg1 ;
-(void)wake;
-(void)setStopCompletionHandler:(id)arg1 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 ;
-(void)flowDivertOpenControlSocket;
-(void)setConfiguration:(id)arg1 ;
@end

