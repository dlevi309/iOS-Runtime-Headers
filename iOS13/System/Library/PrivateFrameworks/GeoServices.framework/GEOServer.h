/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEODaemon;

@interface GEOServer : NSObject {

	GEODaemon* _daemon;

}

@property (assign,nonatomic,__weak) GEODaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
+(id)identifier;
+(BOOL)canHandleIncomingMessage:(id)arg1 ;
+(BOOL)shouldStartImmediately;
+(Class)peerClass;
+(BOOL)usesModernRequestReply;
+(Class)requestClassForMethod:(id)arg1 ;
-(id)description;
-(void)handleRequest:(id)arg1 ;
-(GEODaemon *)daemon;
-(void)peerDidConnect:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(void)setDaemon:(GEODaemon *)arg1 ;
@end

