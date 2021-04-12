/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/_HKAudioStandardQuantityContextDelegate.h>

@class HKLineSeries;

@interface _HKAudioVisibleRangeQuantityContextDelegate : _HKAudioStandardQuantityContextDelegate {

	HKLineSeries* _audioOverlayLineSeries;

}

@property (nonatomic,readonly) HKLineSeries * audioOverlayLineSeries;              //@synthesize audioOverlayLineSeries=_audioOverlayLineSeries - In the implementation block
-(id)formatterForTimescope:(long long)arg1 ;
-(id)alternateLineSeries;
-(id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2 ;
-(HKLineSeries *)audioOverlayLineSeries;
-(void)_enumerateAudioExposureChartPoints:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

