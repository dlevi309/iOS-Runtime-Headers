/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class UIColor, CAMediaTimingFunction;

@interface NTKColorCurveElement : NSObject {

	float _fraction;
	UIColor* _color;
	CAMediaTimingFunction* _timingFunction;

}

@property (nonatomic,retain) UIColor * color;                                     //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float fraction;                                      //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
-(id)description;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(float)fraction;
-(void)setFraction:(float)arg1 ;
-(id)initWithColor:(id)arg1 fraction:(float)arg2 ;
@end

