/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/ISIconCacheIOS.h>

@class NSXPCConnection;

@interface ISIconCacheClient : ISIconCacheIOS {

	unsigned long long _sandboxExtensionHandle;
	NSXPCConnection* _connection;

}

@property (assign) unsigned long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                 //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
+(id)serviceName;
-(id)iconBitmapDataWithResourceLocator:(id)arg1 variant:(int)arg2 options:(int)arg3 ;
-(void)_fetchCacheURLAndSalt;
-(id)init;
-(void)setSandboxExtensionHandle:(unsigned long long)arg1 ;
-(unsigned long long)sandboxExtensionHandle;
-(void)invalidateCacheEntriesForBundleIdentifier:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

