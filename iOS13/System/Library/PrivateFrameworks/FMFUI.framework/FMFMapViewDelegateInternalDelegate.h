/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/


@protocol FMFMapViewDelegateInternalDelegate <NSObject>
@required
-(UIEdgeInsets*)edgeInsets;
-(BOOL)canSelectAnnotation:(id)arg1;
-(void)setShouldZoomToFitNewLocations:(BOOL)arg1;
-(BOOL)shouldZoomToFitMeAndLocations;
-(BOOL)viewWillAppearCalled;
-(id)_internalAnnotationTintColor;
-(void)didSelectLocation:(id)arg1;
-(void)didDeselectLocation:(id)arg1;
-(void)regionWillChangeAnimated:(BOOL)arg1;
-(void)regionDidChangeAnimated:(BOOL)arg1;
-(void)reZoomToFit;
-(void)didUpdateUserLocation:(id)arg1;
-(void)mapViewDidFinishRenderingMap;
-(BOOL)alwaysShowAccuracy;
-(id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2;

@end

