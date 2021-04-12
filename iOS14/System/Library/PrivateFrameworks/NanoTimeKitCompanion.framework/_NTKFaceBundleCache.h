/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMutableDictionary;

@interface _NTKFaceBundleCache : NSObject {

	NSMutableDictionary* _cachedBundles;
	os_unfair_lock_s _bundleLock;

}
+(id)sharedBundleCache;
-(id)_init;
-(void)dealloc;
-(id)bundleAtPath:(id)arg1 ;
@end

