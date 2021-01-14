/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, NSOperationQueue;

@interface JFXEffectPreviewDiskCache : NSObject {

	NSString* _cacheDirectoryPath;
	NSString* _directoryName;
	NSOperationQueue* _diskAccessQueue;

}

@property (nonatomic,readonly) NSString * directoryName;                        //@synthesize directoryName=_directoryName - In the implementation block
@property (nonatomic,readonly) NSString * cacheDirectoryPath;                   //@synthesize cacheDirectoryPath=_cacheDirectoryPath - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * diskAccessQueue;              //@synthesize diskAccessQueue=_diskAccessQueue - In the implementation block
+(id)cachedPathForEffect:(id)arg1 version:(id)arg2 directoryPath:(id)arg3 ;
+(id)createCacheAtDirectory:(id)arg1 ;
-(NSString *)cacheDirectoryPath;
-(id)initWithDirectory:(id)arg1 ;
-(void)dealloc;
-(NSOperationQueue *)diskAccessQueue;
-(void)savePreviewForEffectID:(id)arg1 image:(id)arg2 version:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)previewForEffectID:(id)arg1 version:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)directoryName;
-(BOOL)hasPreviewForEffectID:(id)arg1 version:(id)arg2 ;
@end

