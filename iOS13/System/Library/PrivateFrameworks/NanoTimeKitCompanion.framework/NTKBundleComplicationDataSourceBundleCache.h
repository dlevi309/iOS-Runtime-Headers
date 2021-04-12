/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMutableDictionary;

@interface NTKBundleComplicationDataSourceBundleCache : NSObject {

	NSMutableDictionary* _cachedBundles;
	os_unfair_lock_s _bundleLock;

}
+(id)sharedBundleCache;
-(void)dealloc;
-(id)_init;
-(id)bundleAtPath:(id)arg1 ;
@end

