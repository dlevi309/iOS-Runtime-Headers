/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKConnection, NSString;

@interface GKSession : NSObject {

	id _session;

}

@property (__weak) id<GKSessionPrivateDelegate> privateDelegate; 
@property (getter=isBusy) BOOL busy; 
@property (assign) BOOL wifiEnabled; 
@property (readonly) GKConnection * connection; 
@property (__weak) id<GKSessionDelegate> delegate; 
@property (readonly) NSString * sessionID; 
@property (readonly) NSString * displayName; 
@property (readonly) int sessionMode; 
@property (readonly) NSString * peerID; 
@property (getter=isAvailable) BOOL available; 
@property (assign) double disconnectTimeout; 
+(void)initialize;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(BOOL)isBusy;
-(NSString *)sessionID;
-(id<GKSessionDelegate>)delegate;
-(NSString *)peerID;
-(void)setDelegate:(id<GKSessionDelegate>)arg1 ;
-(id)description;
-(GKConnection *)connection;
-(id<GKSessionPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<GKSessionPrivateDelegate>)arg1 ;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(void)setBusy:(BOOL)arg1 ;
-(NSString *)displayName;
-(void)dealloc;
-(BOOL)wifiEnabled;
-(void)setDisconnectTimeout:(double)arg1 ;
-(double)disconnectTimeout;
-(id)displayNameForPeer:(id)arg1 ;
-(BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4 ;
-(BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3 ;
-(void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2 ;
-(void)connectToPeer:(id)arg1 withTimeout:(double)arg2 ;
-(void)cancelConnectToPeer:(id)arg1 ;
-(BOOL)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2 ;
-(void)denyConnectionFromPeer:(id)arg1 ;
-(void)disconnectPeerFromAllPeers:(id)arg1 ;
-(void)disconnectFromAllPeers;
-(id)peersWithConnectionState:(int)arg1 ;
-(int)sessionMode;
-(BOOL)isPeerBusy:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(int)arg3 ;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
-(id)privateImpl;
@end

