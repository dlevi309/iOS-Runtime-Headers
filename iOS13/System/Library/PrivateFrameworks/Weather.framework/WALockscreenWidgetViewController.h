/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WATodayModelObserver.h>

@protocol WAWidgetDelegate;
@class WATodayPadView, WATodayModel, WAForecastModel, NSTimer, NSDate, NSString;

@interface WALockscreenWidgetViewController : UIViewController <WATodayModelObserver> {

	BOOL _locationServicesActive;
	WATodayPadView* _todayView;
	double _updateInterval;
	id<WAWidgetDelegate> _delegate;
	WATodayModel* _todayModel;
	WAForecastModel* _currentForecastModel;
	NSTimer* _updateTimer;
	NSDate* _updateLastCompletionDate;

}

@property (nonatomic,retain) WATodayModel * todayModel;                         //@synthesize todayModel=_todayModel - In the implementation block
@property (nonatomic,retain) WATodayPadView * todayView;                        //@synthesize todayView=_todayView - In the implementation block
@property (nonatomic,copy) WAForecastModel * currentForecastModel;              //@synthesize currentForecastModel=_currentForecastModel - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                             //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,copy) NSDate * updateLastCompletionDate;                   //@synthesize updateLastCompletionDate=_updateLastCompletionDate - In the implementation block
@property (assign,nonatomic) BOOL locationServicesActive;                       //@synthesize locationServicesActive=_locationServicesActive - In the implementation block
@property (assign,nonatomic) double updateInterval;                             //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic,__weak) id<WAWidgetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL todayViewIsVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstanceIfExists;
-(id)init;
-(id<WAWidgetDelegate>)delegate;
-(void)setDelegate:(id<WAWidgetDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(id)_locationName;
-(id)_temperature;
-(void)_updateTimerFired:(id)arg1 ;
-(void)setLocationServicesActive:(BOOL)arg1 ;
-(void)todayModelWantsUpdate:(id)arg1 ;
-(void)todayModel:(id)arg1 forecastWasUpdated:(id)arg2 ;
-(BOOL)locationServicesActive;
-(void)setTodayView:(WATodayPadView *)arg1 ;
-(WATodayPadView *)todayView;
-(void)_updateTodayView;
-(void)_updateWithReason:(id)arg1 ;
-(void)_teardownWeatherModel;
-(void)_setTodayViewHidden:(BOOL)arg1 ;
-(void)_teardownTimer;
-(WATodayModel *)todayModel;
-(void)_scheduleNewTimer;
-(void)_setupWeatherModel;
-(BOOL)_delegateShouldUpdateForecast;
-(void)_delegateWillUpdate;
-(void)setUpdateLastCompletionDate:(NSDate *)arg1 ;
-(void)_delegateUpdateDidFailWithError:(id)arg1 ;
-(void)setCurrentForecastModel:(WAForecastModel *)arg1 ;
-(WAForecastModel *)currentForecastModel;
-(BOOL)shouldFakeWeather;
-(id)_conditionsLine;
-(id)_conditionsImage;
-(void)getLocationServicesAuthorizationStatus:(/*^block*/id)arg1 ;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(NSTimer *)updateTimer;
-(void)setTodayModel:(WATodayModel *)arg1 ;
-(void)updateWeather;
-(BOOL)todayViewIsVisible;
-(void)_delegateDidUpdate;
-(NSDate *)updateLastCompletionDate;
@end

