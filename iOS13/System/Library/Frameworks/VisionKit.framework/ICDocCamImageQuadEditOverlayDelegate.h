/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/


@protocol ICDocCamImageQuadEditOverlayDelegate <NSObject>
@required
-(id)quadForOverlay:(id)arg1;
-(CGRect*)unitImageRectForOverlayRect:(CGRect)arg1;
-(CGRect*)imageFrameInOverlayCoordinates;
-(void)selectedKnobDidPanToRect:(CGRect)arg1;
-(void)selectedKnobDidChange:(id)arg1;
-(double)currentZoomFactorForOverlay;
-(void)overlayDidLayout:(id)arg1;

@end

