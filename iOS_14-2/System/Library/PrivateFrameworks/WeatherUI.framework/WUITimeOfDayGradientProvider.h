/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
*/


@class WUIGradient;

@interface WUITimeOfDayGradientProvider : NSObject {

	WUIGradient* _midnightGradient;
	WUIGradient* _sunupdownGradient;
	WUIGradient* _morningeveningGradient;
	WUIGradient* _noonGradient;

}

@property (nonatomic,retain) WUIGradient * midnightGradient;                    //@synthesize midnightGradient=_midnightGradient - In the implementation block
@property (nonatomic,retain) WUIGradient * sunupdownGradient;                   //@synthesize sunupdownGradient=_sunupdownGradient - In the implementation block
@property (nonatomic,retain) WUIGradient * morningeveningGradient;              //@synthesize morningeveningGradient=_morningeveningGradient - In the implementation block
@property (nonatomic,retain) WUIGradient * noonGradient;                        //@synthesize noonGradient=_noonGradient - In the implementation block
-(void)_gradientColors;
-(WUIGradient *)midnightGradient;
-(WUIGradient *)sunupdownGradient;
-(WUIGradient *)morningeveningGradient;
-(WUIGradient *)noonGradient;
-(id)_mixedGradientWithFirstGradient:(id)arg1 andGradient:(id)arg2 factor:(double)arg3 ;
-(id)gradientColorsForTime:(double)arg1 sunrise:(double)arg2 sunset:(double)arg3 ;
-(BOOL)isDate:(id)arg1 inRangeFirstDate:(id)arg2 lastDate:(id)arg3 ;
-(void)setMidnightGradient:(WUIGradient *)arg1 ;
-(void)setSunupdownGradient:(WUIGradient *)arg1 ;
-(void)setMorningeveningGradient:(WUIGradient *)arg1 ;
-(void)setNoonGradient:(WUIGradient *)arg1 ;
@end

