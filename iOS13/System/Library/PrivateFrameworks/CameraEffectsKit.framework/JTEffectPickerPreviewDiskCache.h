/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString;

@interface JTEffectPickerPreviewDiskCache : NSObject {

	NSString* _cacheDirectoryPath;

}

@property (nonatomic,readonly) NSString * cacheDirectoryPath;              //@synthesize cacheDirectoryPath=_cacheDirectoryPath - In the implementation block
+(id)createCacheAtDirectory:(id)arg1 ;
+(id)cachedPathForEffect:(id)arg1 directoryPath:(id)arg2 ;
-(NSString *)cacheDirectoryPath;
-(id)initWithDirectory:(id)arg1 ;
-(BOOL)hasPreviewForEffectID:(id)arg1 ;
-(void)previewForEffectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)savePreviewForEffectID:(id)arg1 image:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

