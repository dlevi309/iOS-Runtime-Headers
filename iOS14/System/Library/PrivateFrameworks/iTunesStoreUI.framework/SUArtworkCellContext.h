/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUCellConfigurationContext.h>

@class SUImageCache, ISURLOperationPool, SUImageDataProvider, UIImage;

@interface SUArtworkCellContext : SUCellConfigurationContext {

	SUImageCache* _imageCache;
	ISURLOperationPool* _imagePool;
	SUImageDataProvider* _imageProvider;
	UIImage* _placeholderImage;

}

@property (nonatomic,retain) SUImageCache * imageCache;                        //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) ISURLOperationPool * imagePool;                   //@synthesize imagePool=_imagePool - In the implementation block
@property (nonatomic,retain) SUImageDataProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                       //@synthesize placeholderImage=_placeholderImage - In the implementation block
-(void)setImageProvider:(SUImageDataProvider *)arg1 ;
-(UIImage *)placeholderImage;
-(SUImageCache *)imageCache;
-(void)setImageCache:(SUImageCache *)arg1 ;
-(SUImageDataProvider *)imageProvider;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)dealloc;
-(ISURLOperationPool *)imagePool;
-(void)setImagePool:(ISURLOperationPool *)arg1 ;
@end

