/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXOneUpPresentation;


@protocol PXUIWidget <PXWidget>
@property (nonatomic,retain) PXOneUpPresentation * oneUpPresentation; 
@property (nonatomic,readonly) BOOL cursorInteractionEnabled; 
@optional
-(void)controllerTraitCollectionDidChangeFrom:(id)arg1 to:(id)arg2;
-(void)environmentDidUpdateFocusInContext:(id)arg1;
-(id)regionOfInterestForContext:(id)arg1;
-(BOOL)containsPoint:(CGPoint)arg1 forCoordinateSpace:(id)arg2;
-(void)preloadWithSourceRegionOfInterest:(id)arg1 forContext:(id)arg2;
-(id)zoomAnimationCoordinatorForContext:(id)arg1;
-(id)imageViewBasicTileForPreviewingAtPoint:(CGPoint)arg1;
-(id)bestCursorTileForLiftingAtPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
-(PXOneUpPresentation *)oneUpPresentation;
-(void)setOneUpPresentation:(id)arg1;
-(BOOL)cursorInteractionEnabled;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(void)commitPreviewViewController:(id)arg1;
-(void)prepareForInteractiveTransition:(id)arg1;

@end

