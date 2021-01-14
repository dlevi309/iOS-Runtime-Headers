/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol VKTrackableAnnotationPresentation <NSObject>
@property (assign,nonatomic) CGSize presentationCoordinate; 
@property (assign,nonatomic) BOOL tracking; 
@property (assign,getter=isAnimatingAccuracy,nonatomic) BOOL animatingAccuracy; 
@property (assign,nonatomic) double presentationAccuracy; 
@property (nonatomic,readonly) double minimumAccuracy; 
@property (nonatomic,readonly) VKEdgeInsets annotationTrackingEdgeInsets; 
@required
-(void)setTracking:(BOOL)arg1;
-(double)minimumAccuracy;
-(BOOL)tracking;
-(void)setPresentationAccuracy:(double)arg1;
-(double)presentationAccuracy;
-(void)setAnimatingAccuracy:(BOOL)arg1;
-(BOOL)isAnimatingAccuracy;
-(VKEdgeInsets)annotationTrackingEdgeInsets;
-(CGSize)presentationCoordinate;
-(void)setPresentationCoordinate:(CGSize)arg1;

@end

