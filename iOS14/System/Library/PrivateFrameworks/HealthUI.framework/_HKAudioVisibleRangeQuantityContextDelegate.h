/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/_HKAudioStandardQuantityContextDelegate.h>

@class HKLineSeries;

@interface _HKAudioVisibleRangeQuantityContextDelegate : _HKAudioStandardQuantityContextDelegate {

	HKLineSeries* _audioOverlayLineSeries;

}

@property (nonatomic,readonly) HKLineSeries * audioOverlayLineSeries;              //@synthesize audioOverlayLineSeries=_audioOverlayLineSeries - In the implementation block
-(id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id)formatterForTimescope:(long long)arg1 ;
-(id)alternateLineSeries;
-(id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2 ;
-(HKLineSeries *)audioOverlayLineSeries;
-(void)_enumerateAudioExposureChartPoints:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

