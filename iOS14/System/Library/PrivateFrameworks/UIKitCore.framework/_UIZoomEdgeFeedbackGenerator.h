/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIEdgeFeedbackGenerator.h>

@interface _UIZoomEdgeFeedbackGenerator : _UIEdgeFeedbackGenerator {

	double _minimumZoomScale;
	double _maximumZoomScale;
	double _minimumTemporaryZoomScale;
	double _maximumTemporaryZoomScale;

}

@property (assign,nonatomic) double minimumZoomScale;                       //@synthesize minimumZoomScale=_minimumZoomScale - In the implementation block
@property (assign,nonatomic) double maximumZoomScale;                       //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) double minimumTemporaryZoomScale;              //@synthesize minimumTemporaryZoomScale=_minimumTemporaryZoomScale - In the implementation block
@property (assign,nonatomic) double maximumTemporaryZoomScale;              //@synthesize maximumTemporaryZoomScale=_maximumTemporaryZoomScale - In the implementation block
-(void)_zoomScaleUpdated:(double)arg1 withVelocity:(double)arg2 ;
-(id)init;
-(double)maximumTemporaryZoomScale;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumTemporaryZoomScale:(double)arg1 ;
-(void)setMinimumTemporaryZoomScale:(double)arg1 ;
-(void)_updateMaximumValue;
-(double)maximumZoomScale;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)minimumZoomScale;
-(double)minimumTemporaryZoomScale;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(void)zoomScaleUpdated:(double)arg1 ;
@end

