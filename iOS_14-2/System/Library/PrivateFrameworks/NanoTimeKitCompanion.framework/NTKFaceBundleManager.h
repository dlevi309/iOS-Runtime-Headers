/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NTKFaceBundleLoader, NSDictionary;

@interface NTKFaceBundleManager : NSObject {

	os_unfair_lock_s _bundleLock;
	NTKFaceBundleLoader* _loader;
	NSDictionary* _bundleIDLookup;

}

@property (nonatomic,readonly) NTKFaceBundleLoader * loader;               //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s bundleLock;                //@synthesize bundleLock=_bundleLock - In the implementation block
@property (nonatomic,readonly) NSDictionary * bundleIDLookup;              //@synthesize bundleIDLookup=_bundleIDLookup - In the implementation block
+(id)sharedManager;
-(NTKFaceBundleLoader *)loader;
-(id)_init;
-(id)faceBundleForBundleIdentifier:(id)arg1 onDevice:(id)arg2 ;
-(void)enumerateFaceBundlesOnDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(os_unfair_lock_s)bundleLock;
-(NSDictionary *)bundleIDLookup;
@end

