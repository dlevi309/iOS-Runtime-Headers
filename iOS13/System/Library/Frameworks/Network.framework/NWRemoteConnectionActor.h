/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol NWRemoteConnectionActorDelegate;
@class NSObject, NSMutableDictionary;

@interface NWRemoteConnectionActor : NSObject {

	NSObject*<NWRemoteConnectionActorDelegate> _delegate;
	NSMutableDictionary* _connections;
	NSMutableDictionary* _browsers;

}

@property (__weak) NSObject*<NWRemoteConnectionActorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableDictionary * connections;                                //@synthesize connections=_connections - In the implementation block
@property (retain) NSMutableDictionary * browsers;                                   //@synthesize browsers=_browsers - In the implementation block
-(NSObject*<NWRemoteConnectionActorDelegate>)delegate;
-(void)setDelegate:(NSObject*<NWRemoteConnectionActorDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableDictionary *)connections;
-(void)setConnections:(NSMutableDictionary *)arg1 ;
-(void)updatePathForConnection:(id)arg1 ;
-(void)sendData:(id)arg1 forConnection:(id)arg2 ;
-(void)updateEndpointsForBrowser:(id)arg1 ;
-(void)scheduleReadsOnConnection:(id)arg1 ;
-(BOOL)receiveRemoteCommand:(id)arg1 ;
-(NSMutableDictionary *)browsers;
-(void)setBrowsers:(NSMutableDictionary *)arg1 ;
@end

