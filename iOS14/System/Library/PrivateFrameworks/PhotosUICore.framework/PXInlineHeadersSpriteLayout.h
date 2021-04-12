/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGItemsLayout.h>
#import <libobjc.A.dylib/PXGItemsGeometry.h>
#import <libobjc.A.dylib/PXGViewSource.h>

@protocol PXZoomableInlineHeadersLayoutGeometrySource;
@class NSDateFormatter, NSCalendar, NSIndexSet, PXZoomableInlineHeadersLayoutSpec, PXZoomableInlineHeadersDataSource, NSString;

@interface PXInlineHeadersSpriteLayout : PXGItemsLayout <PXGItemsGeometry, PXGViewSource> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	NSDateFormatter* _yearFormatter;
	NSDateFormatter* _monthFormatter;
	NSCalendar* _calendar;
	unsigned short _mediaVersion;
	BOOL _didHideSprites;
	NSIndexSet* _axSpriteIndexes;
	unsigned long long _level;
	unsigned long long _style;
	PXZoomableInlineHeadersLayoutSpec* _spec;
	PXZoomableInlineHeadersDataSource* _dataSource;
	id<PXZoomableInlineHeadersLayoutGeometrySource> _geometrySource;

}

@property (nonatomic,readonly) unsigned long long level;                                                         //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                           //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PXZoomableInlineHeadersLayoutSpec * spec;                                           //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) PXZoomableInlineHeadersDataSource * dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXZoomableInlineHeadersLayoutGeometrySource> geometrySource;              //@synthesize geometrySource=_geometrySource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2 ;
-(void)setSpec:(PXZoomableInlineHeadersLayoutSpec *)arg1 ;
-(void)alphaDidChange;
-(void)screenScaleDidChange;
-(id)itemsInRect:(CGRect)arg1 inLayout:(id)arg2 ;
-(void)visibleRectDidChange;
-(void)invalidateAnchorItemFrames;
-(void)setGeometrySource:(id<PXZoomableInlineHeadersLayoutGeometrySource>)arg1 ;
-(id<PXZoomableInlineHeadersLayoutGeometrySource>)geometrySource;
-(Class)viewClassForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)itemsGeometry;
-(id)initWithLevel:(unsigned long long)arg1 ;
-(long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
-(void)_bumpMediaVersion;
-(PXZoomableInlineHeadersDataSource *)dataSource;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(PXZoomableInlineHeadersLayoutSpec *)spec;
-(void)update;
-(void)setDataSource:(PXZoomableInlineHeadersDataSource *)arg1 ;
-(unsigned long long)level;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_currentLocaleChanged:(id)arg1 ;
-(void)_setupDateFormatters;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)_updateSprites;
-(id)axSpriteIndexes;
-(unsigned long long)style;
@end

