/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@class WATodayAutoupdatingLocationModel, UILabel, UIImageView, NSMutableArray, UIColor;

@interface WAGreetingView : UIView {

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
-(id)init;
-(void)dealloc;
-(NSMutableArray *)constraints;
-(id)initWithColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)labelColor;
-(void)updateConstraints;
-(void)updateView;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(id)_temperature;
-(void)setupConstraints;
-(void)startService;
-(void)setLabelColor:(UIColor *)arg1 ;
-(void)setTemperatureLabel:(UILabel *)arg1 ;
-(UILabel *)temperatureLabel;
-(WATodayAutoupdatingLocationModel *)todayModel;
-(id)_conditionsImage;
-(void)setTodayModel:(WATodayAutoupdatingLocationModel *)arg1 ;
-(void)setIsViewCreated:(BOOL)arg1 ;
-(void)createViews;
-(void)updateLabelColors;
-(UILabel *)natualLanguageDescriptionLabel;
-(UIImageView *)conditionImageView;
-(void)setNatualLanguageDescriptionLabel:(UILabel *)arg1 ;
-(void)setConditionImageView:(UIImageView *)arg1 ;
-(BOOL)isViewCreated;
@end

