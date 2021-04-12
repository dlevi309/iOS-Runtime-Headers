/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class TRAnisetteDataHandler, NSMutableDictionary, NSObject, SFSession, TRSession;

@interface SFTRSession : NSObject {

	BOOL _activateCalled;
	TRAnisetteDataHandler* _anisetteDataHandler;
	BOOL _invalidateCalled;
	NSMutableDictionary* _handlerMap;
	BOOL _connected;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFSession* _session;
	/*^block*/id _disconnectHandler;
	/*^block*/id _sendEventImpHandler;
	/*^block*/id _sendRequestImpHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFSession * session;                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) TRSession * trSession; 
@property (assign,getter=isConnected,nonatomic) BOOL connected;                       //@synthesize connected=_connected - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                                      //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,copy) id sendEventImpHandler;                                    //@synthesize sendEventImpHandler=_sendEventImpHandler - In the implementation block
@property (nonatomic,copy) id sendRequestImpHandler;                                  //@synthesize sendRequestImpHandler=_sendRequestImpHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)disconnect;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(SFSession *)session;
-(void)setSession:(SFSession *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_cleanup;
-(void)activate;
-(void)sendEvent:(id)arg1 ;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(TRSession *)trSession;
-(void)setRequestHandler:(/*^block*/id)arg1 forRequestClass:(Class)arg2 ;
-(void)setDisconnectHandler:(id)arg1 ;
-(void)handleEvent:(id)arg1 flags:(unsigned)arg2 ;
-(void)handleRequest:(id)arg1 flags:(unsigned)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)_decodeTRMessageData:(id)arg1 kindOfClass:(Class)arg2 ;
-(void)sendRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)setEventHandler:(/*^block*/id)arg1 forEventClass:(Class)arg2 ;
-(id)disconnectHandler;
-(id)sendEventImpHandler;
-(void)setSendEventImpHandler:(id)arg1 ;
-(id)sendRequestImpHandler;
-(void)setSendRequestImpHandler:(id)arg1 ;
@end

