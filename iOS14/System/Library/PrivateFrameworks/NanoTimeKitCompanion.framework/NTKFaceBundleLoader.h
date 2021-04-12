/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSArray;

@interface NTKFaceBundleLoader : NSObject {

	NSArray* _cachedFaceBundles;
	os_unfair_lock_s _cacheLock;

}
+(id)faceBundleLoaderWithDirectories:(id)arg1 ;
-(id)init;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerationFaceBundleClassesWithBlock:(/*^block*/id)arg1 ;
@end

