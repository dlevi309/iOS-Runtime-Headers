/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(UIColor *)color;
-(CAMediaTimingFunction *)timingFunction;
-(id)description;
-(void)setColor:(UIColor *)arg1 ;
-(void)setFraction:(float)arg1 ;
-(float)fraction;
-(id)initWithColor:(id)arg1 fraction:(float)arg2 ;
@end

