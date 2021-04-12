/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface MPAVRouteConnection : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _invalidated;
	NSMutableArray* _pendingConnectionHandlers;
	/*^block*/id _invalidationHandler;
	void* _externalDevice;

}

@property (nonatomic,readonly) void* externalDevice;                               //@synthesize externalDevice=_externalDevice - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isConnecting,nonatomic,readonly) BOOL connecting; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,copy) id invalidationHandler;                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(BOOL)isConnected;
-(BOOL)isInvalidated;
-(void*)externalDevice;
-(id)description;
-(void)sendCustomData:(id)arg1 ;
-(void)connectWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithExternalDevice:(void*)arg1 ;
-(void)connectWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectWithOptions:(unsigned long long)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_connectionStateDidChange:(unsigned)arg1 error:(id)arg2 ;
-(void)reset;
-(void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1 ;
-(BOOL)isConnecting;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)dealloc;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
@end

