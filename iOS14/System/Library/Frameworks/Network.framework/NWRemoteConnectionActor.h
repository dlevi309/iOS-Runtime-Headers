/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setConnections:(NSMutableDictionary *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<NWRemoteConnectionActorDelegate>)delegate;
-(NSMutableDictionary *)connections;
-(NSMutableDictionary *)browsers;
-(void)setDelegate:(NSObject*<NWRemoteConnectionActorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)updatePathForConnection:(id)arg1 ;
-(void)sendData:(id)arg1 forConnection:(id)arg2 ;
-(void)updateEndpointsForBrowser:(id)arg1 ;
-(void)scheduleReadsOnConnection:(id)arg1 ;
-(BOOL)receiveRemoteCommand:(id)arg1 ;
-(void)setBrowsers:(NSMutableDictionary *)arg1 ;
@end

