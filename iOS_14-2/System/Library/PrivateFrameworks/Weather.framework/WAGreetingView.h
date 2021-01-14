/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WATodayModelObserver.h>

@class WATodayAutoupdatingLocationModel, UILabel, UIImageView, NSMutableArray, UIColor, NSString;

@interface WAGreetingView : UIView <WATodayModelObserver> {

	BOOL _isViewCreated;
	WATodayAutoupdatingLocationModel* _todayModel;
	UILabel* _natualLanguageDescriptionLabel;
	UIImageView* _conditionImageView;
	UILabel* _temperatureLabel;
	NSMutableArray* _constraints;
	UIColor* _labelColor;

}

@property (nonatomic,retain) WATodayAutoupdatingLocationModel * todayModel;              //@synthesize todayModel=_todayModel - In the implementation block
@property (nonatomic,retain) UILabel * natualLanguageDescriptionLabel;                   //@synthesize natualLanguageDescriptionLabel=_natualLanguageDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * conditionImageView;                           //@synthesize conditionImageView=_conditionImageView - In the implementation block
@property (nonatomic,retain) UILabel * temperatureLabel;                                 //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                               //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) BOOL isViewCreated;                                         //@synthesize isViewCreated=_isViewCreated - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                                       //@synthesize labelColor=_labelColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)constraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(UILabel *)temperatureLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)_temperature;
-(id)initWithColor:(id)arg1 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(void)startService;
-(void)updateConstraints;
-(void)createViews;
-(void)updateView;
-(void)setupConstraints;
-(void)setTemperatureLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)todayModelWantsUpdate:(id)arg1 ;
-(void)todayModel:(id)arg1 forecastWasUpdated:(id)arg2 ;
-(void)_teardownWeatherModel;
-(WATodayAutoupdatingLocationModel *)todayModel;
-(void)_setupWeatherModel;
-(id)_conditionsImage;
-(void)setTodayModel:(WATodayAutoupdatingLocationModel *)arg1 ;
-(void)setIsViewCreated:(BOOL)arg1 ;
-(void)updateLabelColors;
-(UILabel *)natualLanguageDescriptionLabel;
-(UIImageView *)conditionImageView;
-(void)setNatualLanguageDescriptionLabel:(UILabel *)arg1 ;
-(void)setConditionImageView:(UIImageView *)arg1 ;
-(BOOL)isViewCreated;
@end

