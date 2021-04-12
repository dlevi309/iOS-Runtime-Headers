/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@class SPAssetCacheClientCache;

@interface SPCompanionAssetCache : NSObject {

	SPAssetCacheClientCache* _permanentCache;
	SPAssetCacheClientCache* _transientCache;

}

@property (nonatomic,retain) SPAssetCacheClientCache * permanentCache;              //@synthesize permanentCache=_permanentCache - In the implementation block
@property (nonatomic,retain) SPAssetCacheClientCache * transientCache;              //@synthesize transientCache=_transientCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)keyFromImageData:(id)arg1 ;
-(BOOL)imageInTransientCache:(id)arg1 ;
-(void)addImageReferenceToTransientCache:(id)arg1 withName:(id)arg2 ;
-(id)dataForImageWithName:(id)arg1 ;
-(BOOL)addImageToPermanentCache:(id)arg1 withName:(id)arg2 ;
-(void)removeImageFromPermanentCacheWithName:(id)arg1 ;
-(void)removeAllImagesFromPermanentCache;
-(id)cachedImages;
-(SPAssetCacheClientCache *)permanentCache;
-(void)setPermanentCache:(SPAssetCacheClientCache *)arg1 ;
-(SPAssetCacheClientCache *)transientCache;
-(void)setTransientCache:(SPAssetCacheClientCache *)arg1 ;
-(void)handleCacheMessage:(id)arg1 ;
-(void)addedAsset:(id)arg1 ;
-(void)deletedAsset:(id)arg1 ;
-(void)clearedCache:(id)arg1 ;
-(void)syncCache:(id)arg1 ;
-(BOOL)imageInPermanentCache:(id)arg1 ;
@end

