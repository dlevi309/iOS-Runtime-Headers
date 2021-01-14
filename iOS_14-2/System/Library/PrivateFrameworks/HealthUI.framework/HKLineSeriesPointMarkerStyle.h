/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(id)initWithColor:(id)arg1 radius:(double)arg2 style:(long long)arg3 ;
-(void)setPointMarkerStyle:(long long)arg1 ;
-(long long)pointMarkerStyle;
-(void)setPointColor:(UIColor *)arg1 ;
-(UIColor *)pointColor;
@end

