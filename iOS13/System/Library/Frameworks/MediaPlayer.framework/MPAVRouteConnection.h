/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface MPAVRouteConnection : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _invalidated;
	NSMutableArray* _pendingConnectionHandlers;
	/*^block*/id _receivedCustomDataHandler;
	/*^block*/id _invalidationHandler;
	void* _externalDevice;

}

@property (nonatomic,readonly) void* externalDevice;                               //@synthesize externalDevice=_externalDevice - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,copy) id receivedCustomDataHandler;                           //@synthesize receivedCustomDataHandler=_receivedCustomDataHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)dealloc;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)reset;
-(BOOL)isInvalidated;
-(id)invalidationHandler;
-(BOOL)isConnected;
-(id)initWithExternalDevice:(void*)arg1 ;
-(void*)externalDevice;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(void)connectWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendCustomData:(id)arg1 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)becomeActiveOriginWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resignActiveOriginWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_connectionDidReceiveCustomData:(id)arg1 ;
-(void)_connectionStateDidChange:(unsigned)arg1 error:(id)arg2 ;
-(id)receivedCustomDataHandler;
-(void)setReceivedCustomDataHandler:(id)arg1 ;
@end

