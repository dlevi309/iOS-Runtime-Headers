/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NTKAstronomyRichComplicationContentView;

@interface NTKSwissMoonPhaseDailyView : UIView {

	UILabel* _dayLabel;
	NTKAstronomyRichComplicationContentView* _moonView;
	UILabel* _weekdayLabel;

}

@property (nonatomic,retain) UILabel * dayLabel;                                              //@synthesize dayLabel=_dayLabel - In the implementation block
@property (nonatomic,retain) NTKAstronomyRichComplicationContentView * moonView;              //@synthesize moonView=_moonView - In the implementation block
@property (nonatomic,retain) UILabel * weekdayLabel;                                          //@synthesize weekdayLabel=_weekdayLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)weekdayLabel;
-(UILabel *)dayLabel;
-(void)setDayLabel:(UILabel *)arg1 ;
-(NTKAstronomyRichComplicationContentView *)moonView;
-(void)setMoonView:(NTKAstronomyRichComplicationContentView *)arg1 ;
-(void)setWeekdayLabel:(UILabel *)arg1 ;
@end

