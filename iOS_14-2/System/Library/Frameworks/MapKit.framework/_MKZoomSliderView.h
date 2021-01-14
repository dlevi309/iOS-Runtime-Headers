/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIView, UIImageView;

@interface _MKZoomSliderView : UIView {

	NSLayoutConstraint* _knobCenterYConstraint;
	UIView* _knob;
	double _zoomFraction;
	BOOL _active;
	UIImageView* _shadowImageView;
	double _lastTrackShadowImageScale;

}

@property (assign,nonatomic) double zoomFraction;                      //@synthesize zoomFraction=_zoomFraction - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isActive;
-(void)setBounds:(CGRect)arg1 ;
-(void)setZoomFraction:(double)arg1 ;
-(double)zoomFraction;
-(void)updateConstraints;
-(void)didMoveToWindow;
@end

