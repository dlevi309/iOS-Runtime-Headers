/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class MKBarViewOptions, CAShapeLayer, CAGradientLayer, NSLayoutConstraint;

@interface MKBarView : UIView {

	MKBarViewOptions* _options;
	CAShapeLayer* _barMaskLayer;
	CAGradientLayer* _filledGradientLayer;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,copy) MKBarViewOptions * options;              //@synthesize options=_options - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(MKBarViewOptions *)options;
-(void)setOptions:(MKBarViewOptions *)arg1 ;
-(void)layoutSubviews;
-(void)_setupBarFillLayer;
-(void)_setupViewAndConstraints;
-(const CGPathRef)_filledRectanglePath;
@end

