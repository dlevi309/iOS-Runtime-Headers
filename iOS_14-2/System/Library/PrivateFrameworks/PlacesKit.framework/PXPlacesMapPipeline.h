/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <libobjc.A.dylib/PXPlacesMapPipelineComponentProvider.h>

@protocol PXPlacesMapLayout, PXPlacesMapUpdatePlan, PXPlacesMapRenderer, PXPlacesMapSelectionHandler;
@class PXPlacesImageCache, NSString;

@interface PXPlacesMapPipeline : NSObject <PXPlacesMapPipelineComponentProvider> {

	id<PXPlacesMapLayout> _layout;
	id<PXPlacesMapUpdatePlan> _updatePlan;
	id<PXPlacesMapRenderer> _renderer;
	id<PXPlacesMapSelectionHandler> _selectionHandler;
	PXPlacesImageCache* _imageCache;

}

@property (nonatomic,readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; 
@property (readonly) id<PXPlacesMapLayout> layout;                                          //@synthesize layout=_layout - In the implementation block
@property (readonly) id<PXPlacesMapUpdatePlan> updatePlan;                                  //@synthesize updatePlan=_updatePlan - In the implementation block
@property (readonly) id<PXPlacesMapRenderer> renderer;                                      //@synthesize renderer=_renderer - In the implementation block
@property (readonly) id<PXPlacesMapSelectionHandler> selectionHandler;                      //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (retain) PXPlacesImageCache * imageCache;                                         //@synthesize imageCache=_imageCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(id<PXPlacesMapRenderer>)renderer;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(PXPlacesImageCache *)imageCache;
-(void)setImageCache:(PXPlacesImageCache *)arg1 ;
-(void)cancel;
-(id<PXPlacesMapLayout>)layout;
-(id<PXPlacesMapUpdatePlan>)updatePlan;
-(id)initWithLayout:(id)arg1 updatePlan:(id)arg2 renderer:(id)arg3 selectionHandler:(id)arg4 ;
-(id)executeWithUpdatedViewPort:(id)arg1 andDataSourceChange:(id)arg2 ;
-(id)executeRemoval;
@end

