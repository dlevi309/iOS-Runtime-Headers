/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(void)_updateMaximumValue;
-(void)_zoomScaleUpdated:(double)arg1 withVelocity:(double)arg2 ;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(void)zoomScaleUpdated:(double)arg1 ;
-(double)minimumZoomScale;
-(double)maximumZoomScale;
-(double)minimumTemporaryZoomScale;
-(void)setMinimumTemporaryZoomScale:(double)arg1 ;
-(double)maximumTemporaryZoomScale;
-(void)setMaximumTemporaryZoomScale:(double)arg1 ;
@end

