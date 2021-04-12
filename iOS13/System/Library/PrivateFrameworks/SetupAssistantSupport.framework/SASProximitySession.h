/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)invalidate;
-(id<SASProximitySessionDelegate>)delegate;
-(void)setDelegate:(id<SASProximitySessionDelegate>)arg1 ;
-(SASProximitySessionTransport *)transport;
-(void)setTransport:(SASProximitySessionTransport *)arg1 ;
-(void)activate;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)actionQueue;
-(void)setActionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)sendAction:(id)arg1 ;
-(void)handleAction:(id)arg1 ;
-(void)receivedAction:(id)arg1 response:(/*^block*/id)arg2 ;
-(id)actionFromData:(id)arg1 ;
-(void)setSharingMessageSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)sharingMessageSession;
@end

