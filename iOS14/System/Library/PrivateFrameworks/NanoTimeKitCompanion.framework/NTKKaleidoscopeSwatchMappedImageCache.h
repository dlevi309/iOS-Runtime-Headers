/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <BaseBoardUI/BSUIMappedImageCache.h>
#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>

@class NSArray, NSMutableArray, NSString;

@interface NTKKaleidoscopeSwatchMappedImageCache : BSUIMappedImageCache <NTKFaceCollectionObserver> {

	id _activeDeviceNotificationBlock;
	NSArray* _libraryCollections;
	NSMutableArray* _loadedCollections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
+(id)keyForAsset:(id)arg1 style:(id)arg2 resourceDirectory:(id)arg3 ;
-(id)_init;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)_cleanCache;
-(void)_pruneUnusedKeys;
-(void)_removeImagesForKeysMatching:(/*^block*/id)arg1 ;
@end

