/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/ISIconCacheIOS.h>

@interface ISIconCacheClient : ISIconCacheIOS {

	unsigned long long _sandboxExtensionHandle;

}

@property (assign) unsigned long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
+(id)sharedInstance;
+(id)serviceName;
-(id)init;
-(id)connection;
-(unsigned long long)sandboxExtensionHandle;
-(void)setSandboxExtensionHandle:(unsigned long long)arg1 ;
-(void)_fetchCacheURLAndSalt;
-(id)iconBitmapDataWithResourceLocator:(id)arg1 variant:(int)arg2 options:(int)arg3 ;
-(void)invalidateCacheEntriesForBundleIdentifier:(id)arg1 ;
@end

