/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/


@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject {

	NSString* _bundleID;
	NSString* _appVersion;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appVersion;                     //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) int processIdentifier; 
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appVersion;
-(id)initWithConnection:(id)arg1 ;
-(id)remoteObjectProxy;
-(int)processIdentifier;
-(void)setBundleID:(NSString *)arg1 ;
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
-(void)invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
@end

