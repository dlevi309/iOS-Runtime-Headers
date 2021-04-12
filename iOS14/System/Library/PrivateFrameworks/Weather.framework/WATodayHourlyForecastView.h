/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UILabel, UIImageView, NSArray, UIImage, NSAttributedString;

@interface WATodayHourlyForecastView : UIView {

	UIVisualEffectView* _temperatureLabelVisualEffectView;
	UIVisualEffectView* _timeLabelVisualEffectView;
	UILabel* _temperatureLabel;
	UILabel* _timeLabel;
	UIImageView* _conditionsImageView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIVisualEffectView * temperatureLabelVisualEffectView;              //@synthesize temperatureLabelVisualEffectView=_temperatureLabelVisualEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * timeLabelVisualEffectView;                     //@synthesize timeLabelVisualEffectView=_timeLabelVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * temperatureLabel;                                         //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * conditionsImageView;                                  //@synthesize conditionsImageView=_conditionsImageView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                              //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIImage * conditionsImage; 
@property (nonatomic,copy) NSAttributedString * temperature; 
@property (nonatomic,copy) NSAttributedString * time; 
-(void)_setupConstraints;
-(NSArray *)constraints;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(NSAttributedString *)time;
-(void)setTimeLabelVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)timeLabel;
-(NSAttributedString *)temperature;
-(void)setTime:(NSAttributedString *)arg1 ;
-(UILabel *)temperatureLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)conditionsImageView;
-(UIVisualEffectView *)timeLabelVisualEffectView;
-(void)setTemperatureLabelVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIImage *)conditionsImage;
-(void)setConditionsImage:(UIImage *)arg1 ;
-(void)applyVibrancyToTimeWithEffect:(id)arg1 ;
-(void)setTemperature:(NSAttributedString *)arg1 ;
-(UIVisualEffectView *)temperatureLabelVisualEffectView;
-(void)setTemperatureLabel:(UILabel *)arg1 ;
-(void)setConditionsImageView:(UIImageView *)arg1 ;
@end

