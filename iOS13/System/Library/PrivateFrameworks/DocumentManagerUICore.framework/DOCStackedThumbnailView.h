/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface DOCStackedThumbnailView : UIView {

	NSArray* _items;
	NSArray* _URLs;
	NSArray* _thumbnailImageViews;
	CGSize _topThumbnailSize;

}

@property (nonatomic,retain) NSArray * thumbnailImageViews;              //@synthesize thumbnailImageViews=_thumbnailImageViews - In the implementation block
@property (nonatomic,copy) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * URLs;                               //@synthesize URLs=_URLs - In the implementation block
@property (assign,nonatomic) CGSize topThumbnailSize;                    //@synthesize topThumbnailSize=_topThumbnailSize - In the implementation block
-(void)setURLs:(NSArray *)arg1 ;
-(NSArray *)URLs;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)updateItems;
-(void)updateURLs;
-(CGSize)topThumbnailSize;
-(void)createThumbnailViewsWithCount:(unsigned long long)arg1 createViewForIndex:(/*^block*/id)arg2 ;
-(NSArray *)thumbnailImageViews;
-(void)setThumbnailImageViews:(NSArray *)arg1 ;
-(id)initWithTopThumbnailSize:(CGSize)arg1 ;
-(void)setTopThumbnailSize:(CGSize)arg1 ;
@end

