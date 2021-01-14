/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUTilingCoordinateSystem;
#import <PhotosUI/PhotosUI-Structs.h>
@class NSMutableDictionary, PUTilingDataSource, PUTilingView, PUTilingScrollInfo;

@interface PUTilingLayout : NSObject {

	NSMutableDictionary* _tileIdentifierByIndexPathByKind;
	PUTilingDataSource* _dataSource;
	id<PUTilingCoordinateSystem> _coordinateSystem;
	PUTilingView* _tilingView;
	id<PUTilingCoordinateSystem> _parentCoordinateSystem;
	CGPoint _coordinateSystemOrigin;
	CGRect _visibleRect;

}

@property (assign,nonatomic,__weak) PUTilingView * tilingView;                                        //@synthesize tilingView=_tilingView - In the implementation block
@property (assign,nonatomic,__weak) id<PUTilingCoordinateSystem> parentCoordinateSystem;              //@synthesize parentCoordinateSystem=_parentCoordinateSystem - In the implementation block
@property (assign,nonatomic) CGPoint coordinateSystemOrigin;                                          //@synthesize coordinateSystemOrigin=_coordinateSystemOrigin - In the implementation block
@property (nonatomic,retain) PUTilingDataSource * dataSource;                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                                      //@synthesize visibleRect=_visibleRect - In the implementation block
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) PUTilingScrollInfo * preferredScrollInfo; 
@property (nonatomic,readonly) id<PUTilingCoordinateSystem> coordinateSystem;                         //@synthesize coordinateSystem=_coordinateSystem - In the implementation block
-(CGRect)contentBounds;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(CGRect)visibleRect;
-(id)init;
-(id)layoutInfosForTilesInRect:(CGRect)arg1 ;
-(CGPoint)coordinateSystemOrigin;
-(PUTilingScrollInfo *)preferredScrollInfo;
-(id<PUTilingCoordinateSystem>)parentCoordinateSystem;
-(PUTilingDataSource *)dataSource;
-(id)tileIdentifierForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(PUTilingView *)tilingView;
-(void)setTilingView:(PUTilingView *)arg1 ;
-(id<PUTilingCoordinateSystem>)coordinateSystem;
-(id)description;
-(void)setDataSource:(PUTilingDataSource *)arg1 ;
-(CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2 ;
-(id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(void)setCoordinateSystemOrigin:(CGPoint)arg1 ;
-(void)setParentCoordinateSystem:(id<PUTilingCoordinateSystem>)arg1 ;
-(void)invalidateLayoutForUpdateWithItems:(id)arg1 ;
@end

