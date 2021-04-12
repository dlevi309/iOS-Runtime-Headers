/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<PXPlacesMapLayout>)layout;
-(PXPlacesImageCache *)imageCache;
-(void)setImageCache:(id)arg1;
-(id<PXPlacesMapRenderer>)renderer;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(id<PXPlacesMapUpdatePlan>)updatePlan;

@end

