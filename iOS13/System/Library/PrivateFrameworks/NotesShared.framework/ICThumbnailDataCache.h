/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class ICCache;

@interface ICThumbnailDataCache : NSObject {

	ICCache* _imageCache;

}

@property (nonatomic,retain) ICCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(id)init;
-(ICCache *)imageCache;
-(void)setImageCache:(ICCache *)arg1 ;
-(void)removeThumbnailDataForKey:(id)arg1 ;
-(void)setThumbnailData:(id)arg1 forKey:(id)arg2 ;
-(id)thumbnailDataForKey:(id)arg1 ;
-(void)removeAllThumbnailData;
@end

