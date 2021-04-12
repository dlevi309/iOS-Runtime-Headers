/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKAnnotationManagerDelegate <NSObject>
@optional
-(void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2;
-(BOOL)annotationManager:(id)arg1 shouldAnimateDeselectionOfAnnotation:(id)arg2 forSelectionOfAnnotation:(id)arg3;
-(BOOL)annotationManager:(id)arg1 canSelectAnnotationRepresentation:(id)arg2;

@required
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
-(void)annotationManager:(id)arg1 didRemoveAnnotationRepresentations:(id)arg2;
-(void)annotationManagerDidChangeVisibleAnnotationRepresentations:(id)arg1;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;

@end

