/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)startServerWithDaemon:(id)arg1 ;
-(BOOL)isEqualToServerProxy:(id)arg1 ;
-(Class)serverClass;
-(void)_setServer:(id)arg1 daemon:(id)arg2 ;
-(id)description;
-(GEOServer *)server;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

