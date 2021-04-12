/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@protocol CLKMonochromeFilterProvider;
@class NSArray, UIStackView, NSString;

@interface NWCFiveHourForecastView : UIView <CLKFullColorImageView> {

	id<CLKMonochromeFilterProvider> _filterProvider;
	NSArray* _hourlyForecastViews;
	UIStackView* _horizontalStackView;

}

@property (nonatomic,retain) UIStackView * horizontalStackView;                                  //@synthesize horizontalStackView=_horizontalStackView - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastViews;                                      //@synthesize hourlyForecastViews=_hourlyForecastViews - In the implementation block
@property (nonatomic,readonly) Class hourlyForecastViewClass; 
@property (nonatomic,readonly) id<NWMDataFormatter> dataFormatter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
+(unsigned long long)maximumHourlyConditionCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_applyConstraints;
-(void)setHourlyForecastViews:(NSArray *)arg1 ;
-(NSArray *)hourlyForecastViews;
-(id<NWMDataFormatter>)dataFormatter;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(Class)hourlyForecastViewClass;
-(UIStackView *)horizontalStackView;
-(void)setHorizontalStackView:(UIStackView *)arg1 ;
-(void)_addHourlyForecastViewsToStackView:(id)arg1 ;
-(void)processHourlyForecastedConditions:(id)arg1 forTimeZone:(id)arg2 ;
@end

