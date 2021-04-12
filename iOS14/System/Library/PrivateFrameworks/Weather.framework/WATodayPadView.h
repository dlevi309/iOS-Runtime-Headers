/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@class WATodayPadViewStyle, NSArray, UIImageView, WALegibilityLabel, _UILegibilitySettings, NSString, UIImage;

@interface WATodayPadView : UIView {

	WATodayPadViewStyle* _style;
	NSArray* _constraints;
	UIImageView* _conditionsImageView;
	WALegibilityLabel* _temperatureLabel;
	WALegibilityLabel* _locationLabel;
	WALegibilityLabel* _conditionsLabel;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) NSArray * constraints;                                   //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIImageView * conditionsImageView;                       //@synthesize conditionsImageView=_conditionsImageView - In the implementation block
@property (nonatomic,retain) WALegibilityLabel * temperatureLabel;                    //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,retain) WALegibilityLabel * locationLabel;                       //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) WALegibilityLabel * conditionsLabel;                     //@synthesize conditionsLabel=_conditionsLabel - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSString * conditionsLine; 
@property (nonatomic,copy) UIImage * conditionsImage; 
@property (nonatomic,copy) NSString * temperature; 
@property (nonatomic,copy) NSString * locationName; 
@property (nonatomic,copy) WATodayPadViewStyle * style;                               //@synthesize style=_style - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(NSString *)temperature;
-(void)updateForChangedSettings:(id)arg1 ;
-(WALegibilityLabel *)temperatureLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)conditionsImageView;
-(void)setLocationName:(NSString *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setLocationLabel:(WALegibilityLabel *)arg1 ;
-(UIImage *)conditionsImage;
-(void)setConditionsImage:(UIImage *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setTemperature:(NSString *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setStyle:(WATodayPadViewStyle *)arg1 ;
-(void)sizeToFit;
-(WALegibilityLabel *)locationLabel;
-(NSString *)locationName;
-(void)setTemperatureLabel:(WALegibilityLabel *)arg1 ;
-(WATodayPadViewStyle *)style;
-(void)setConditionsImageView:(UIImageView *)arg1 ;
-(void)setConditionsLine:(NSString *)arg1 ;
-(void)setConditionsLabel:(WALegibilityLabel *)arg1 ;
-(WALegibilityLabel *)conditionsLabel;
-(NSString *)conditionsLine;
-(void)_setupConstraintsForViews;
@end

