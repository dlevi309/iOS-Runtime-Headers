/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOServer;

@interface _GEOServerProxy : NSObject {

	Class _serverClass;
	GEOServer* _server;

}

@property (nonatomic,readonly) Class serverClass;               //@synthesize serverClass=_serverClass - In the implementation block
@property (nonatomic,readonly) GEOServer * server;              //@synthesize server=_server - In the implementation block
+(id)proxyForServer:(id)arg1 daemon:(id)arg2 ;
+(id)proxyForClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOServer *)server;
-(Class)serverClass;
-(void)startServerWithDaemon:(id)arg1 ;
-(BOOL)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)_setServer:(id)arg1 daemon:(id)arg2 ;
-(BOOL)isEqualToServerProxy:(id)arg1 ;
@end

