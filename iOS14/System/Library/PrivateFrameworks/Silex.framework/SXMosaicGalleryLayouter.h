/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXMosaicGalleryLayouterDataSource;
#import <Silex/Silex-Structs.h>
@class NSArray, SXMosaicGalleryColumnLayout, NSMutableArray;

@interface SXMosaicGalleryLayouter : NSObject {

	BOOL _reverseNextHorizontalLivingRoomLayout;
	unsigned long long _numberOfItems;
	double _width;
	NSArray* _supportedTileTypeClusters;
	id<SXMosaicGalleryLayouterDataSource> _dataSource;
	SXMosaicGalleryColumnLayout* _columnLayout;
	NSMutableArray* _layouts;
	NSMutableArray* _clusters;
	NSMutableArray* _items;
	NSMutableArray* _views;
	NSMutableArray* _frames;
	CGSize _contentSize;

}

@property (nonatomic,readonly) CGSize contentSize;                                                 //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) SXMosaicGalleryColumnLayout * columnLayout;                         //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) NSMutableArray * layouts;                                           //@synthesize layouts=_layouts - In the implementation block
@property (nonatomic,readonly) NSMutableArray * clusters;                                          //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSMutableArray * views;                                             //@synthesize views=_views - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfItems;                                   //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) double width;                                                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSArray * supportedTileTypeClusters;                                //@synthesize supportedTileTypeClusters=_supportedTileTypeClusters - In the implementation block
@property (nonatomic,readonly) NSMutableArray * frames;                                            //@synthesize frames=_frames - In the implementation block
@property (assign,nonatomic) BOOL reverseNextHorizontalLivingRoomLayout;                           //@synthesize reverseNextHorizontalLivingRoomLayout=_reverseNextHorizontalLivingRoomLayout - In the implementation block
@property (assign,nonatomic,__weak) id<SXMosaicGalleryLayouterDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(double)width;
-(NSMutableArray *)frames;
-(unsigned long long)numberOfItems;
-(id)initWithDataSource:(id)arg1 ;
-(CGSize)contentSize;
-(void)setWidth:(double)arg1 ;
-(id<SXMosaicGalleryLayouterDataSource>)dataSource;
-(NSMutableArray *)items;
-(void)setDataSource:(id<SXMosaicGalleryLayouterDataSource>)arg1 ;
-(NSMutableArray *)clusters;
-(NSMutableArray *)layouts;
-(CGRect)frameForItemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(void)resetLayout;
-(NSMutableArray *)views;
-(SXMosaicGalleryColumnLayout *)columnLayout;
-(void)layoutGalleryOnView:(id)arg1 ;
-(id)viewForItemAtIndex:(unsigned long long)arg1 ;
-(void)calculateLayoutForWidth:(double)arg1 ;
-(id)clusterForItemsInRange:(NSRange)arg1 ;
-(id)layoutForCluster:(id)arg1 previousLayouts:(id)arg2 ;
-(id)viewForItem:(id)arg1 ;
-(id)itemsForRange:(NSRange)arg1 ;
-(NSArray *)supportedTileTypeClusters;
-(BOOL)reverseNextHorizontalLivingRoomLayout;
-(void)setReverseNextHorizontalLivingRoomLayout:(BOOL)arg1 ;
@end

