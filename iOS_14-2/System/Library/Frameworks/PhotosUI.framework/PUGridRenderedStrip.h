/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol PUGridRenderedStripDataSource;
@class NSArray, PUSectionedGridLayout, UIView;

@interface PUGridRenderedStrip : UICollectionReusableView {

	BOOL _extendsToTop;
	BOOL __needsRendering;
	int _backgroundColorValue;
	double _itemContentScale;
	double _leftContentInset;
	NSArray* _itemIndexPaths;
	long long _visualSectionIndex;
	id<PUGridRenderedStripDataSource> _dataSource;
	PUSectionedGridLayout* _layout;
	unsigned long long _contentExtenderType;
	UIView* _topContentView;
	UIView* __sideExtendedContentView;
	CGSize _itemSize;
	CGSize _interItemSpacing;
	NSRange _visualItemRange;

}

@property (assign,setter=_setNeedsRendering:,nonatomic) BOOL _needsRendering;                  //@synthesize _needsRendering=__needsRendering - In the implementation block
@property (nonatomic,readonly) UIView * _sideExtendedContentView;                              //@synthesize _sideExtendedContentView=__sideExtendedContentView - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                  //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double itemContentScale;                                          //@synthesize itemContentScale=_itemContentScale - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;                                          //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) double leftContentInset;                                          //@synthesize leftContentInset=_leftContentInset - In the implementation block
@property (assign,nonatomic) int backgroundColorValue;                                         //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (nonatomic,retain) NSArray * itemIndexPaths;                                         //@synthesize itemIndexPaths=_itemIndexPaths - In the implementation block
@property (nonatomic,readonly) long long visualSectionIndex;                                   //@synthesize visualSectionIndex=_visualSectionIndex - In the implementation block
@property (nonatomic,readonly) NSRange visualItemRange;                                        //@synthesize visualItemRange=_visualItemRange - In the implementation block
@property (assign,nonatomic,__weak) id<PUGridRenderedStripDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) PUSectionedGridLayout * layout;                            //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) long long numberOfColumns; 
@property (assign,nonatomic) unsigned long long contentExtenderType;                           //@synthesize contentExtenderType=_contentExtenderType - In the implementation block
@property (assign,nonatomic) BOOL extendsToTop;                                                //@synthesize extendsToTop=_extendsToTop - In the implementation block
@property (nonatomic,readonly) UIView * topContentView;                                        //@synthesize topContentView=_topContentView - In the implementation block
-(CGSize)interItemSpacing;
-(CGSize)itemSize;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)leftContentInset;
-(id<PUGridRenderedStripDataSource>)dataSource;
-(long long)numberOfColumns;
-(void)setExtendsToTop:(BOOL)arg1 ;
-(void)setContentExtenderType:(unsigned long long)arg1 ;
-(void)setNeedsRendering;
-(void)_setNeedsRendering:(BOOL)arg1 ;
-(BOOL)extendsToTop;
-(void)setDataSource:(id<PUGridRenderedStripDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)setItemContentScale:(double)arg1 ;
-(void)setLeftContentInset:(double)arg1 ;
-(void)setVisualSectionIndex:(long long)arg1 andVisualItemRange:(NSRange)arg2 ;
-(void)_updateExtendedContents;
-(void)setBackgroundColorValue:(int)arg1 ;
-(NSArray *)itemIndexPaths;
-(void)setItemIndexPaths:(NSArray *)arg1 ;
-(long long)visualSectionIndex;
-(NSRange)visualItemRange;
-(unsigned long long)contentExtenderType;
-(UIView *)topContentView;
-(BOOL)_needsRendering;
-(UIView *)_sideExtendedContentView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(int)backgroundColorValue;
-(double)itemContentScale;
-(void)_render;
-(void)setLayout:(PUSectionedGridLayout *)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(BOOL)_disableRasterizeInAnimations;
-(PUSectionedGridLayout *)layout;
@end

