/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

@class PXPlacesImageCache;


@protocol PXPlacesMapPipelineComponentProvider <NSObject>
@property (readonly) id<PXPlacesMapLayout> layout; 
@property (readonly) id<PXPlacesMapUpdatePlan> updatePlan; 
@property (readonly) id<PXPlacesMapRenderer> renderer; 
@property (readonly) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) PXPlacesImageCache * imageCache; 
@required
-(id<PXPlacesMapRenderer>)renderer;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(PXPlacesImageCache *)imageCache;
-(void)setImageCache:(id)arg1;
-(id<PXPlacesMapLayout>)layout;
-(id<PXPlacesMapUpdatePlan>)updatePlan;

@end

