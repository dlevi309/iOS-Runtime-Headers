/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class UIColor;

@interface HKLineSeriesPointMarkerStyle : NSObject {

	UIColor* _pointColor;
	double _radius;
	long long _pointMarkerStyle;

}

@property (nonatomic,retain) UIColor * pointColor;                    //@synthesize pointColor=_pointColor - In the implementation block
@property (assign,nonatomic) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) long long pointMarkerStyle;              //@synthesize pointMarkerStyle=_pointMarkerStyle - In the implementation block
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(id)initWithColor:(id)arg1 radius:(double)arg2 style:(long long)arg3 ;
-(void)setPointMarkerStyle:(long long)arg1 ;
-(long long)pointMarkerStyle;
-(UIColor *)pointColor;
-(void)setPointColor:(UIColor *)arg1 ;
@end

