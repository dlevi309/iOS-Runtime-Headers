/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
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

