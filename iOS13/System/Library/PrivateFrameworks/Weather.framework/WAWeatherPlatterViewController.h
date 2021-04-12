/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFTemperatureUnitObserver.h>

@class NSURL, WFURLComponents, WATodayModel, UIView, WATodayHeaderView, NSArray, UIStackView, NSMutableArray, NSString;

@interface WAWeatherPlatterViewController : UIViewController <WFTemperatureUnitObserver> {

	long long _status;
	NSURL* _commitURL;
	WFURLComponents* _URLComponents;
	WATodayModel* _model;
	UIView* _backgroundView;
	WATodayHeaderView* _headerView;
	UIView* _dividerLineView;
	NSArray* _hourlyForecastViews;
	UIStackView* _hourlyBeltView;
	NSMutableArray* _constraints;
	double _viewWidth;

}

@property (nonatomic,retain) WFURLComponents * URLComponents;              //@synthesize URLComponents=_URLComponents - In the implementation block
@property (nonatomic,retain) WATodayModel * model;                         //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) long long status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) WATodayHeaderView * headerView;               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * dividerLineView;                     //@synthesize dividerLineView=_dividerLineView - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastViews;                //@synthesize hourlyForecastViews=_hourlyForecastViews - In the implementation block
@property (nonatomic,retain) UIStackView * hourlyBeltView;                 //@synthesize hourlyBeltView=_hourlyBeltView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                 //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy) NSURL * commitURL;                              //@synthesize commitURL=_commitURL - In the implementation block
@property (assign,nonatomic) double viewWidth;                             //@synthesize viewWidth=_viewWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSMutableArray *)constraints;
-(long long)status;
-(WFURLComponents *)URLComponents;
-(void)setURLComponents:(WFURLComponents *)arg1 ;
-(WATodayModel *)model;
-(void)setModel:(WATodayModel *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(UIView *)backgroundView;
-(void)_updateStatus:(long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(WATodayHeaderView *)headerView;
-(void)setHeaderView:(WATodayHeaderView *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)updateViewConstraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(id)initWithURLComponents:(id)arg1 ;
-(void)setupConstraints;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2 ;
-(void)_kickoffLoadingWithLocation:(id)arg1 orPerhapsALocationString:(id)arg2 ;
-(void)_contentSizeDidUpdate:(id)arg1 ;
-(void)setupBackgroundView;
-(void)setupHeaderView;
-(void)setupDividerView;
-(void)setupHourlyForecast;
-(void)setDividerLineView:(UIView *)arg1 ;
-(UIView *)dividerLineView;
-(UIStackView *)hourlyBeltView;
-(void)setHourlyBeltView:(UIStackView *)arg1 ;
-(void)setViewWidth:(double)arg1 ;
-(double)viewWidth;
-(void)setHourlyForecastViews:(NSArray *)arg1 ;
-(NSArray *)hourlyForecastViews;
-(void)_updateViewContent;
-(void)_buildModelForLocation:(id)arg1 ;
-(void)setCommitURL:(NSURL *)arg1 ;
-(id)initWithLocationString:(id)arg1 ;
-(NSURL *)commitURL;
@end

