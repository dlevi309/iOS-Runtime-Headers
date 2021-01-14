/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@interface DKEnterSandbox : NSObject
+(id)_bundleId;
+(id)_processName;
+(char*)_getHomeDirectory;
+(char*)_getTempDirectory;
+(char*)_getCacheDirectory;
+(char*)_getMainBundle;
+(BOOL)defaultSandboxWithHelperAppPath:(const char*)arg1 ;
+(BOOL)sandboxWithSeatbeltAbsolutePath:(const char*)arg1 helperAppPath:(const char*)arg2 ;
@end

