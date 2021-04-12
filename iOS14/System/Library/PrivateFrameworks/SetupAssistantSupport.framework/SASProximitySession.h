/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/


@protocol SASProximitySessionDelegate, OS_dispatch_queue;
@class NSObject, SASProximitySessionTransport, CUMessageSession;

@interface SASProximitySession : NSObject {

	BOOL _connected;
	id<SASProximitySessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _actionQueue;
	SASProximitySessionTransport* _transport;

}

@property (retain) NSObject*<OS_dispatch_queue> actionQueue;              //@synthesize actionQueue=_actionQueue - In the implementation block
@property (retain) SASProximitySessionTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (assign) id<SASProximitySessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) CUMessageSession * sharingMessageSession; 
@property (getter=isConnected) BOOL connected;                            //@synthesize connected=_connected - In the implementation block
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(SASProximitySessionTransport *)transport;
-(id)init;
-(id<SASProximitySessionDelegate>)delegate;
-(void)setActionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTransport:(SASProximitySessionTransport *)arg1 ;
-(void)activate;
-(void)setDelegate:(id<SASProximitySessionDelegate>)arg1 ;
-(id)sendAction:(id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)actionQueue;
-(void)handleAction:(id)arg1 ;
-(void)receivedAction:(id)arg1 response:(/*^block*/id)arg2 ;
-(id)actionFromData:(id)arg1 ;
-(void)setSharingMessageSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)sharingMessageSession;
@end

