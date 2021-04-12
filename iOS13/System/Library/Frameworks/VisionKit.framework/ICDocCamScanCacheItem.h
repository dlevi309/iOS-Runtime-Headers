/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
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

