/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(WATodayPadViewStyle *)style;
-(void)setStyle:(WATodayPadViewStyle *)arg1 ;
-(NSString *)locationName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)willMoveToWindow:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setLocationName:(NSString *)arg1 ;
-(NSString *)temperature;
-(void)setTemperature:(NSString *)arg1 ;
-(WALegibilityLabel *)locationLabel;
-(void)setLocationLabel:(WALegibilityLabel *)arg1 ;
-(void)setTemperatureLabel:(WALegibilityLabel *)arg1 ;
-(WALegibilityLabel *)temperatureLabel;
-(void)setConditionsImageView:(UIImageView *)arg1 ;
-(UIImageView *)conditionsImageView;
-(void)setConditionsImage:(UIImage *)arg1 ;
-(UIImage *)conditionsImage;
-(void)setConditionsLine:(NSString *)arg1 ;
-(void)setConditionsLabel:(WALegibilityLabel *)arg1 ;
-(WALegibilityLabel *)conditionsLabel;
-(NSString *)conditionsLine;
-(void)_setupConstraintsForViews;
@end

