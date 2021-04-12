/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@class ICDocCamImageCache, NSArray;

@interface ICDocCamScanCacheItem : NSObject {

	ICDocCamImageCache* _imageCache;
	NSArray* _docInfos;

}

@property (nonatomic,retain) ICDocCamImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) NSArray * docInfos;                           //@synthesize docInfos=_docInfos - In the implementation block
-(id)init;
-(ICDocCamImageCache *)imageCache;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(NSArray *)docInfos;
-(void)setDocInfos:(NSArray *)arg1 ;
-(id)docInfoForScanDataDelegate:(id)arg1 ;
-(id)initWithImageCache:(id)arg1 docInfos:(id)arg2 ;
-(id)imageForScanDataDelegateIdentifier:(id)arg1 ;
-(void)deleteCacheImages;
-(void)doneBuildingCache;
@end

