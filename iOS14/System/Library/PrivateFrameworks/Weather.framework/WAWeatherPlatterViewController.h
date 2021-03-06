/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFTemperatureUnitObserver.h>

@class NSURL, WFURLComponents, WATodayModel, UIView, WATodayHeaderView, WAAQIView, NSArray, UIStackView, NSMutableArray, City, NSString;

@interface WAWeatherPlatterViewController : UIViewController <WFTemperatureUnitObserver> {

	long long _status;
	NSURL* _commitURL;
	WFURLComponents* _URLComponents;
	WATodayModel* _model;
	UIView* _backgroundView;
	WATodayHeaderView* _headerView;
	UIView* _afterHeaderDividerLineView;
	WAAQIView* _aqiView;
	UIView* _afterAQIDividerLineView;
	NSArray* _hourlyForecastViews;
	UIStackView* _hourlyBeltView;
	NSMutableArray* _constraints;
	City* _city;
	CGRect _lastBounds;

}

@property (nonatomic,retain) WFURLComponents * URLComponents;                  //@synthesize URLComponents=_URLComponents - In the implementation block
@property (nonatomic,retain) WATodayModel * model;                             //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) long long status;                                 //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) WATodayHeaderView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * afterHeaderDividerLineView;              //@synthesize afterHeaderDividerLineView=_afterHeaderDividerLineView - In the implementation block
@property (nonatomic,retain) WAAQIView * aqiView;                              //@synthesize aqiView=_aqiView - In the implementation block
@property (nonatomic,retain) UIView * afterAQIDividerLineView;                 //@synthesize afterAQIDividerLineView=_afterAQIDividerLineView - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastViews;                    //@synthesize hourlyForecastViews=_hourlyForecastViews - In the implementation block
@property (nonatomic,retain) UIStackView * hourlyBeltView;                     //@synthesize hourlyBeltView=_hourlyBeltView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                     //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy) NSURL * commitURL;                                  //@synthesize commitURL=_commitURL - In the implementation block
@property (nonatomic,retain) City * city;                                      //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) CGRect lastBounds;                                //@synthesize lastBounds=_lastBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultViewHeight;
-(void)updateViewConstraints;
-(NSMutableArray *)constraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(City *)city;
-(WATodayModel *)model;
-(void)setHeaderView:(WATodayHeaderView *)arg1 ;
-(void)setURLComponents:(WFURLComponents *)arg1 ;
-(void)setCity:(City *)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2 ;
-(UIView *)backgroundView;
-(id)initWithLocation:(id)arg1 ;
-(void)setModel:(WATodayModel *)arg1 ;
-(WFURLComponents *)URLComponents;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_updateStatus:(long long)arg1 ;
-(WAAQIView *)aqiView;
-(void)setStatus:(long long)arg1 ;
-(WATodayHeaderView *)headerView;
-(void)setupConstraints;
-(void)viewDidLayoutSubviews;
-(long long)status;
-(id)initWithURLComponents:(id)arg1 ;
-(void)_updateViewContent;
-(void)setLastBounds:(CGRect)arg1 ;
-(double)preferredContentWidth;
-(void)_kickoffLoadingWithLocation:(id)arg1 orPerhapsALocationString:(id)arg2 ;
-(void)_contentSizeDidUpdate:(id)arg1 ;
-(void)setupBackgroundView;
-(void)setupHeaderView;
-(void)setupAfterHeaderDividerView;
-(void)setupAQIView;
-(void)setupAfterAQIDividerView;
-(void)setupHourlyForecast;
-(CGRect)lastBounds;
-(UIView *)afterHeaderDividerLineView;
-(void)setAfterHeaderDividerLineView:(UIView *)arg1 ;
-(void)setAqiView:(WAAQIView *)arg1 ;
-(UIView *)afterAQIDividerLineView;
-(void)setAfterAQIDividerLineView:(UIView *)arg1 ;
-(UIStackView *)hourlyBeltView;
-(void)setHourlyBeltView:(UIStackView *)arg1 ;
-(void)setHourlyForecastViews:(NSArray *)arg1 ;
-(NSArray *)hourlyForecastViews;
-(BOOL)_showingAQIViewForCity:(id)arg1 ;
-(void)_buildModelForLocation:(id)arg1 ;
-(void)_loadAQIDataForLocation:(id)arg1 ;
-(void)setCommitURL:(NSURL *)arg1 ;
-(void)_updateViewWithAQIFromCity:(id)arg1 ;
-(id)initWithLocationString:(id)arg1 ;
-(NSURL *)commitURL;
@end

