/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
*/


@interface NRGResourceCache : NSObject
+(id)iconCacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(void)createCachePathIfNecessaryWithPairedDeviceStorePath:(id)arg1 ;
+(id)cachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)cacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(id)cacheDirPathForPairedDeviceStorePath:(id)arg1 ;
+(void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 ;
+(id)iconForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(void)invalidateBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(void)invalidatePairedDevice:(id)arg1 ;
+(id)cacheDirPathForPairedDevice;
@end

