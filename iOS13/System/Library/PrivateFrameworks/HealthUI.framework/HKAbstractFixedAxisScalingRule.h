/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartsAxisScalingRule.h>

@class HKValueRange, NSDictionary, NSString;

@interface HKAbstractFixedAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {

	HKValueRange* _defaultAxisBounds;
	NSDictionary* _axisBoundsOverrides;
	BOOL _shouldExpandBoundsForOutliers;
	long long _portraitPrettyNumberRule;

}

@property (assign,nonatomic) BOOL shouldExpandBoundsForOutliers;                //@synthesize shouldExpandBoundsForOutliers=_shouldExpandBoundsForOutliers - In the implementation block
@property (assign,nonatomic) long long portraitPrettyNumberRule;                //@synthesize portraitPrettyNumberRule=_portraitPrettyNumberRule - In the implementation block
@property (nonatomic,readonly) HKValueRange * defaultAxisBounds;                //@synthesize defaultAxisBounds=_defaultAxisBounds - In the implementation block
@property (nonatomic,readonly) NSDictionary * axisBoundsOverrides;              //@synthesize axisBoundsOverrides=_axisBoundsOverrides - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setPortraitPrettyNumberRule:(long long)arg1 ;
-(id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 ;
-(id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3 ;
-(id)_valueRangeForZoomLevel:(long long)arg1 ;
-(long long)portraitPrettyNumberRule;
-(BOOL)shouldExpandBoundsForOutliers;
-(void)setShouldExpandBoundsForOutliers:(BOOL)arg1 ;
-(HKValueRange *)defaultAxisBounds;
-(NSDictionary *)axisBoundsOverrides;
@end

