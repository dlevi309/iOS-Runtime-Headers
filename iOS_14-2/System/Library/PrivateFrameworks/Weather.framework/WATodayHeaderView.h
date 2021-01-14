/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UIVisualEffectView, UILabel, UIImageView;

@interface WATodayHeaderView : UIView {

	NSString* _conditionsLine1;
	NSString* _conditionsLine2;
	UIImage* _conditionsImage;
	NSString* _temperature;
	NSString* _temperatureHigh;
	NSString* _temperatureLow;
	NSString* _locationName;
	UIVisualEffectView* _weatherInformationVisualEffectView;
	UILabel* _locationLabel;
	UILabel* _conditionsLabel1;
	UILabel* _conditionsLabel2;
	UIImageView* _conditionsImageView;
	UILabel* _temperatureLabel;
	UILabel* _temperatureHighLowLabel;
	double _pageFontSize;
	double _pageDegreeFontSize;
	double _pageBaselineOffset;

}

@property (nonatomic,retain) UIVisualEffectView * weatherInformationVisualEffectView;              //@synthesize weatherInformationVisualEffectView=_weatherInformationVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                              //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UILabel * conditionsLabel1;                                           //@synthesize conditionsLabel1=_conditionsLabel1 - In the implementation block
@property (nonatomic,retain) UILabel * conditionsLabel2;                                           //@synthesize conditionsLabel2=_conditionsLabel2 - In the implementation block
@property (nonatomic,retain) UIImageView * conditionsImageView;                                    //@synthesize conditionsImageView=_conditionsImageView - In the implementation block
@property (nonatomic,retain) UILabel * temperatureLabel;                                           //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,retain) UILabel * temperatureHighLowLabel;                                    //@synthesize temperatureHighLowLabel=_temperatureHighLowLabel - In the implementation block
@property (assign,nonatomic) double pageFontSize;                                                  //@synthesize pageFontSize=_pageFontSize - In the implementation block
@property (assign,nonatomic) double pageDegreeFontSize;                                            //@synthesize pageDegreeFontSize=_pageDegreeFontSize - In the implementation block
@property (assign,nonatomic) double pageBaselineOffset;                                            //@synthesize pageBaselineOffset=_pageBaselineOffset - In the implementation block
@property (nonatomic,copy) NSString * conditionsLine1;                                             //@synthesize conditionsLine1=_conditionsLine1 - In the implementation block
@property (nonatomic,copy) NSString * conditionsLine2;                                             //@synthesize conditionsLine2=_conditionsLine2 - In the implementation block
@property (nonatomic,copy) UIImage * conditionsImage;                                              //@synthesize conditionsImage=_conditionsImage - In the implementation block
@property (nonatomic,copy) NSString * temperature;                                                 //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,copy) NSString * temperatureHigh;                                             //@synthesize temperatureHigh=_temperatureHigh - In the implementation block
@property (nonatomic,copy) NSString * temperatureLow;                                              //@synthesize temperatureLow=_temperatureLow - In the implementation block
@property (nonatomic,copy) NSString * locationName;                                                //@synthesize locationName=_locationName - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)_setupConstraints;
-(NSString *)temperature;
-(UILabel *)temperatureLabel;
-(id)init;
-(UIImageView *)conditionsImageView;
-(void)setLocationName:(NSString *)arg1 ;
-(UILabel *)conditionsLabel2;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)setConditionsLine2:(NSString *)arg1 ;
-(void)setPageFontSize:(double)arg1 ;
-(double)pageDegreeFontSize;
-(double)pageBaselineOffset;
-(void)_setupSubviews;
-(UIImage *)conditionsImage;
-(void)setConditionsImage:(UIImage *)arg1 ;
-(void)setPageDegreeFontSize:(double)arg1 ;
-(NSString *)temperatureLow;
-(void)setWeatherInformationVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTemperatureLow:(NSString *)arg1 ;
-(void)setConditionsLabel2:(UILabel *)arg1 ;
-(void)setTemperature:(NSString *)arg1 ;
-(NSString *)conditionsLine2;
-(void)_updateContent;
-(UILabel *)temperatureHighLowLabel;
-(void)setPageBaselineOffset:(double)arg1 ;
-(NSString *)conditionsLine1;
-(UILabel *)conditionsLabel1;
-(UILabel *)locationLabel;
-(NSString *)temperatureHigh;
-(void)setTemperatureHigh:(NSString *)arg1 ;
-(double)pageFontSize;
-(void)setConditionsLabel1:(UILabel *)arg1 ;
-(NSString *)locationName;
-(void)setConditionsLine1:(NSString *)arg1 ;
-(void)setTemperatureLabel:(UILabel *)arg1 ;
-(void)setConditionsImageView:(UIImageView *)arg1 ;
-(UIVisualEffectView *)weatherInformationVisualEffectView;
-(void)setTemperatureHighLowLabel:(UILabel *)arg1 ;
@end

