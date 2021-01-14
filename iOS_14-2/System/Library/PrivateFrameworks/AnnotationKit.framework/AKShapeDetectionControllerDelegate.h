/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@protocol AKShapeDetectionControllerDelegate <NSObject>
@optional
-(void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(BOOL)arg2;
-(CGRect*)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;

@required
-(BOOL)isWaitingToCoalesceStrokes;
-(void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
-(void)endIgnoringAnnotationSelectionObservation:(id)arg1;
-(BOOL)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
-(BOOL)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
-(id)overlayView:(id)arg1;

@end

