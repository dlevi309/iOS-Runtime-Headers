/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEODaemon;

@interface GEOServer : NSObject {

	GEODaemon* _daemon;

}

@property (assign,nonatomic,__weak) GEODaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
+(Class)peerClass;
+(id)identifier;
+(BOOL)shouldStartImmediately;
-(void)setDaemon:(GEODaemon *)arg1 ;
-(void)peerDidConnect:(id)arg1 ;
-(GEODaemon *)daemon;
-(void)peerDidDisconnect:(id)arg1 ;
-(id)description;
-(BOOL)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 ;
@end

