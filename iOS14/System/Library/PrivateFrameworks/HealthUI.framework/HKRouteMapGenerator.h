/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class HKLocationReadings, UIColor, MKMapSnapshotter;

@interface HKRouteMapGenerator : NSObject {

	BOOL _useRelativeColorForSpeed;
	BOOL _useMarkerAnnotations;
	HKLocationReadings* _locationReadings;
	UIColor* _startPointColor;
	UIColor* _endPointColor;
	MKMapSnapshotter* _runningSnapshotter;

}

@property (nonatomic,retain) MKMapSnapshotter * runningSnapshotter;              //@synthesize runningSnapshotter=_runningSnapshotter - In the implementation block
@property (nonatomic,retain) HKLocationReadings * locationReadings;              //@synthesize locationReadings=_locationReadings - In the implementation block
@property (assign,nonatomic) BOOL useRelativeColorForSpeed;                      //@synthesize useRelativeColorForSpeed=_useRelativeColorForSpeed - In the implementation block
@property (assign,nonatomic) BOOL useMarkerAnnotations;                          //@synthesize useMarkerAnnotations=_useMarkerAnnotations - In the implementation block
@property (nonatomic,retain) UIColor * startPointColor;                          //@synthesize startPointColor=_startPointColor - In the implementation block
@property (nonatomic,retain) UIColor * endPointColor;                            //@synthesize endPointColor=_endPointColor - In the implementation block
-(id)init;
-(void)setLocationReadings:(HKLocationReadings *)arg1 ;
-(void)snapshotWithSize:(CGSize)arg1 lineWidth:(double)arg2 traitCollection:(id)arg3 offsets:(CGRect)arg4 completion:(/*^block*/id)arg5 ;
-(HKLocationReadings *)locationReadings;
-(void)drawLinesWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(SCD_Struct_Gr17)arg3 context:(CGContextRef)arg4 pointFromMapPoint:(/*^block*/id)arg5 ;
-(void)setUseRelativeColorForSpeed:(BOOL)arg1 ;
-(void)setUseMarkerAnnotations:(BOOL)arg1 ;
-(void)_drawLineFromPointA:(CGPoint)arg1 toPointB:(CGPoint)arg2 atSpeed:(double)arg3 context:(CGContextRef)arg4 drawDashes:(BOOL)arg5 lineWidth:(double)arg6 ;
-(BOOL)useRelativeColorForSpeed;
-(id)relativeColorForSpeed:(double)arg1 ;
-(SCD_Struct_Gr17)_adjustRectForPolyline:(id)arg1 withSize:(CGSize)arg2 ;
-(UIColor *)startPointColor;
-(UIColor *)endPointColor;
-(SCD_Struct_Gr17)_adjustedMapRectForPolyline:(id)arg1 size:(CGSize)arg2 ;
-(SCD_Struct_Gr17)_adjustedMapRectForPolyline:(id)arg1 size:(CGSize)arg2 offsets:(CGRect)arg3 ;
-(id)_imageWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(SCD_Struct_Gr17)arg3 onSnapshot:(id)arg4 ;
-(id)_annotationViewWithIsStartPoint:(BOOL)arg1 ;
-(void)_overlayAnnotationView:(id)arg1 point:(CGPoint)arg2 onSnapshot:(id)arg3 context:(CGContextRef)arg4 ;
-(void)snapshotWithSize:(CGSize)arg1 lineWidth:(double)arg2 traitCollection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)useMarkerAnnotations;
-(void)setStartPointColor:(UIColor *)arg1 ;
-(void)setEndPointColor:(UIColor *)arg1 ;
-(MKMapSnapshotter *)runningSnapshotter;
-(void)setRunningSnapshotter:(MKMapSnapshotter *)arg1 ;
@end
