/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@class WAAQIScale, UIImageView;

@interface WAAQIScaleView : UIView {

	WAAQIScale* _scale;
	unsigned long long _AQI;
	double _aqiPercentageInRange;
	UIImageView* _thumbImageView;

}

@property (assign,nonatomic) double aqiPercentageInRange;               //@synthesize aqiPercentageInRange=_aqiPercentageInRange - In the implementation block
@property (nonatomic,retain) UIImageView * thumbImageView;              //@synthesize thumbImageView=_thumbImageView - In the implementation block
@property (nonatomic,retain) WAAQIScale * scale;                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long AQI;                    //@synthesize AQI=_AQI - In the implementation block
-(unsigned long long)AQI;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(WAAQIScale *)scale;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 ;
-(void)updateThumbImage;
-(void)layoutSubviews;
-(void)setScale:(WAAQIScale *)arg1 ;
-(void)setThumbImageView:(UIImageView *)arg1 ;
-(void)setAqiPercentageInRange:(double)arg1 ;
-(unsigned long long)sanitizedAQI:(unsigned long long)arg1 ;
-(void)setAQI:(unsigned long long)arg1 ;
-(UIImageView *)thumbImageView;
-(double)aqiPercentageInRange;
@end

