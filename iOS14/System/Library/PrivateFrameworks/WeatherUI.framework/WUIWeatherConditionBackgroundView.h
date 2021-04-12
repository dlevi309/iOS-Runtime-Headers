/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
*/

#import <WeatherUI/WeatherUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source;
@class WUIDynamicWeatherBackground, NSArray, WUIDynamicWeatherBackgroundInteractiveTransaction, NSObject, UIImageView, WUIWeatherCondition;

@interface WUIWeatherConditionBackgroundView : UIView {

	long long _activeIndex;
	BOOL _hidesConditions;
	BOOL _hasViewAppeared;
	WUIDynamicWeatherBackground* _background;
	double _scrollOffset;
	NSArray* _cities;
	WUIDynamicWeatherBackgroundInteractiveTransaction* _crossfadeTransaction;
	NSObject*<OS_dispatch_source> _crossfadeEffectTimer;
	UIImageView* _introductionImageView;
	WUIWeatherCondition* _leftCondition;
	WUIWeatherCondition* _rightCondition;

}

@property (nonatomic,retain) NSArray * cities;                                                                      //@synthesize cities=_cities - In the implementation block
@property (nonatomic,retain) WUIDynamicWeatherBackgroundInteractiveTransaction * crossfadeTransaction;              //@synthesize crossfadeTransaction=_crossfadeTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> crossfadeEffectTimer;                                    //@synthesize crossfadeEffectTimer=_crossfadeEffectTimer - In the implementation block
@property (nonatomic,retain) UIImageView * introductionImageView;                                                   //@synthesize introductionImageView=_introductionImageView - In the implementation block
@property (nonatomic,retain) WUIWeatherCondition * leftCondition;                                                   //@synthesize leftCondition=_leftCondition - In the implementation block
@property (nonatomic,retain) WUIWeatherCondition * rightCondition;                                                  //@synthesize rightCondition=_rightCondition - In the implementation block
@property (nonatomic,readonly) NSArray * conditions; 
@property (nonatomic,readonly) WUIDynamicWeatherBackground * background;                                            //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) BOOL hidesConditions;                                                                  //@synthesize hidesConditions=_hidesConditions - In the implementation block
@property (assign,nonatomic) BOOL hasViewAppeared;                                                                  //@synthesize hasViewAppeared=_hasViewAppeared - In the implementation block
@property (assign,nonatomic) double scrollOffset;                                                                   //@synthesize scrollOffset=_scrollOffset - In the implementation block
-(WUIDynamicWeatherBackground *)background;
-(NSArray *)conditions;
-(double)scrollOffset;
-(void)setLeftCondition:(WUIWeatherCondition *)arg1 ;
-(void)setIntroductionImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCrossfadeEffectTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_addBackAllLayers;
-(void)prepareToSuspend;
-(void)setScrollEnded;
-(void)_setCondition:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_conditionAtIndex:(unsigned long long)arg1 ;
-(NSArray *)cities;
-(void)setHidesConditions:(BOOL)arg1 ;
-(void)setHasViewAppeared:(BOOL)arg1 ;
-(void)setRightCondition:(WUIWeatherCondition *)arg1 ;
-(void)useConditionView:(id)arg1 activeCityIndex:(unsigned long long)arg2 ;
-(void)updateConditionsAboutCityIndex:(long long)arg1 ;
-(void)layoutSubviews;
-(WUIWeatherCondition *)leftCondition;
-(void)setCities:(NSArray *)arg1 ;
-(void)didTransitionToSize:(CGSize)arg1 ;
-(WUIWeatherCondition *)rightCondition;
-(void)_cityDidUpdate:(id)arg1 ;
-(void)_removeSideLayers;
-(void)setScrollOffset:(double)arg1 ;
-(void)setCities:(id)arg1 activeCityIndex:(long long)arg2 activeCityLiveConditionOnly:(BOOL)arg3 animationDuration:(double)arg4 ;
-(void)setCities:(id)arg1 activeCityIndex:(long long)arg2 ;
-(void)prepareToResume;
-(BOOL)hasViewAppeared;
-(void)animateTransitionToSize:(CGSize)arg1 ;
-(id)relinquishConditionViewForCityAtIndex:(long long)arg1 ;
-(id)_conditions;
-(void)updateConditionIfNeededWithCities:(id)arg1 activeCityIndex:(long long)arg2 ;
-(WUIDynamicWeatherBackgroundInteractiveTransaction *)crossfadeTransaction;
-(void)saveImageForKeyCondition;
-(UIImageView *)introductionImageView;
-(void)setCities:(id)arg1 activeCityIndex:(long long)arg2 animationDuration:(double)arg3 ;
-(NSObject*<OS_dispatch_source>)crossfadeEffectTimer;
-(BOOL)hidesConditions;
-(void)setCrossfadeTransaction:(WUIDynamicWeatherBackgroundInteractiveTransaction *)arg1 ;
-(void)dealloc;
@end

