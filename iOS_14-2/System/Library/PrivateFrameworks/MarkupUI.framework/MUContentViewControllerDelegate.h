/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/


@protocol MUContentViewControllerDelegate <NSObject>
@optional
-(id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
-(void)editCheckpointReachedForAnnotationController:(id)arg1;
-(void)annotationController:(id)arg1 detectedEditOfType:(unsigned long long)arg2;
-(void)editDetectedForAnnotationController:(id)arg1;
-(void)penStrokeCompletedForAnnotationController:(id)arg1;
-(void)controllerWillShowSignatureCaptureView:(id)arg1;
-(void)controllerWillDismissSignatureCaptureView:(id)arg1;
-(void)controllerWillShowSignatureManagerView:(id)arg1;
-(void)controllerWillDismissSignatureManagerView:(id)arg1;
-(BOOL)contentViewController:(id)arg1 shouldHandleURL:(id)arg2;
-(CGSize*)adjustedSourceImageSize;

@required
-(id)undoManagerForContentViewController:(id)arg1;
-(double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forContentViewController:(id)arg2;
-(void)positionSketchOverlay:(id)arg1 forContentViewController:(id)arg2;
-(id)annotationControllerOfContentViewController:(id)arg1 willSetToolbarItems:(id)arg2;

@end

