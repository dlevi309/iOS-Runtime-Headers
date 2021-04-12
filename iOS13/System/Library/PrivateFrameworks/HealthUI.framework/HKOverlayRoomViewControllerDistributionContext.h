/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOverlayRoomViewControllerIntegratedContext.h>

@class HKInteractiveChartOverlayPredicate, NSDictionary;

@interface HKOverlayRoomViewControllerDistributionContext : HKOverlayRoomViewControllerIntegratedContext {

	long long _distributionStyle;
	long long _options;
	HKInteractiveChartOverlayPredicate* _namedPredicate;
	NSDictionary* _styleToMetricColors;

}

@property (assign,nonatomic) long long distributionStyle;                                      //@synthesize distributionStyle=_distributionStyle - In the implementation block
@property (assign,nonatomic) long long options;                                                //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) HKInteractiveChartOverlayPredicate * namedPredicate;              //@synthesize namedPredicate=_namedPredicate - In the implementation block
@property (nonatomic,retain) NSDictionary * styleToMetricColors;                               //@synthesize styleToMetricColors=_styleToMetricColors - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(long long)distributionStyle;
-(id)_representativeDisplayTypeForStyle:(long long)arg1 ;
-(id)representativeDisplayType;
-(id)_computeTitleFromStyleAndPredicate;
-(id)_selectedMetricColorsForDistributionStyle:(long long)arg1 ;
-(HKInteractiveChartOverlayPredicate *)namedPredicate;
-(NSDictionary *)styleToMetricColors;
-(id)initWithStyle:(long long)arg1 namedPredicate:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 options:(long long)arg5 mode:(long long)arg6 ;
-(id)buildContextItemWithValue:(id)arg1 valueContext:(id)arg2 forTimeScope:(long long)arg3 ;
-(id)buildOverlayDisplayTypeForTimeScope:(long long)arg1 ;
-(void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDistributionStyle:(long long)arg1 ;
-(void)setNamedPredicate:(HKInteractiveChartOverlayPredicate *)arg1 ;
-(void)setStyleToMetricColors:(NSDictionary *)arg1 ;
@end

