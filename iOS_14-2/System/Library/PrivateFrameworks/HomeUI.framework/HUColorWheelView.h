/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUColorWheelSpace;
@interface HUColorWheelView : UIView {

	double _wheelHoleRadius;
	id<HUColorWheelSpace> _colorWheelSpace;

}

@property (assign,nonatomic) double wheelHoleRadius;                             //@synthesize wheelHoleRadius=_wheelHoleRadius - In the implementation block
@property (nonatomic,retain) id<HUColorWheelSpace> colorWheelSpace;              //@synthesize colorWheelSpace=_colorWheelSpace - In the implementation block
+(double)_colorWheelRenderingScale;
-(void)drawRect:(CGRect)arg1 ;
-(double)_outerRadius;
-(void)setColorWheelSpace:(id<HUColorWheelSpace>)arg1 ;
-(double)wheelHoleRadius;
-(id)wheelBezierPath;
-(id<HUColorWheelSpace>)colorWheelSpace;
-(id)initWithColorWheelSpace:(id)arg1 ;
-(void)setWheelHoleRadius:(double)arg1 ;
-(CGPoint)pointForColorWheelCoordinate:(CGPoint)arg1 ;
-(CGPoint)colorWheelCoordinateForPoint:(CGPoint)arg1 boundedToWheel:(BOOL)arg2 ;
@end

