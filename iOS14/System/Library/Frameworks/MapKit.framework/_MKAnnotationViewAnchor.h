/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <VectorKit/VKAnchorWrapper.h>

@class MKAnnotationView;

@interface _MKAnnotationViewAnchor : VKAnchorWrapper {

	MKAnnotationView* _annotationView;

}

@property (assign,nonatomic) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
-(CGSize)coordinate;
-(MKAnnotationView *)annotationView;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(CGPoint)pointInLayer:(id)arg1 bound:(CGRect)arg2 ;
-(double)pointOffsetForDistanceOffset:(double)arg1 ;
@end

