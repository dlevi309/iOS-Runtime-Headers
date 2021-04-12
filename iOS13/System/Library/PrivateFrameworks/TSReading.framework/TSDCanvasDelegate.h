/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDCanvasDelegate <NSObject>
@optional
-(BOOL)isCanvasInteractive;
-(BOOL)isPrintingCanvas;
-(BOOL)spellCheckingSupported;
-(BOOL)spellCheckingSuppressed;
-(BOOL)shouldShowTextOverflowGlyphs;
-(BOOL)shouldShowInstructionalText;
-(void)canvasLayoutInvalidated:(id)arg1;
-(void)canvasWillLayout:(id)arg1;
-(void)canvasDidValidateLayouts:(id)arg1;
-(void)canvasDidLayout:(id)arg1;
-(void)canvasDidValidateLayoutsWithDependencies:(id)arg1;
-(void)canvasDidUpdateVisibleBounds:(id)arg1;
-(void)canvasWillUpdateRepsFromLayouts:(id)arg1;
-(void)canvasDidUpdateRepsFromLayouts:(id)arg1;
-(CGRect*)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
-(id)additionalVisibleInfosForCanvas:(id)arg1;
-(id)infosToHideForCanvas:(id)arg1;
-(void)canvas:(id)arg1 willLayoutRep:(id)arg2;
-(void)canvas:(id)arg1 createdRep:(id)arg2;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg1;
-(BOOL)supportsAdaptiveLayout;
-(id)canvas:(id)arg1 layoutGeometryProviderForLayout:(id)arg2;

@required
-(id)documentRoot;

@end

