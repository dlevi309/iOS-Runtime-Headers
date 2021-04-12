/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

