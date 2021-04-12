/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class ICCache;

@interface ICThumbnailDataCache : NSObject {

	ICCache* _imageCache;

}

@property (nonatomic,retain) ICCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(id)init;
-(void)setThumbnailData:(id)arg1 forKey:(id)arg2 ;
-(id)thumbnailDataForKey:(id)arg1 ;
-(void)removeAllThumbnailData;
-(ICCache *)imageCache;
-(void)setImageCache:(ICCache *)arg1 ;
-(void)removeThumbnailDataForKey:(id)arg1 ;
@end

