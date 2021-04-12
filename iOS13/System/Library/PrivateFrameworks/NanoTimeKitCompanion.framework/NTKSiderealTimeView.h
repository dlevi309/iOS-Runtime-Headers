/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKDualTimeView.h>

@class CABackdropLayer, CAFilter;

@interface NTKSiderealTimeView : NTKDualTimeView {

	CABackdropLayer* _blurBackdrop;
	CAFilter* _gaussianFilter;
	CAFilter* _brightnessFilter;
	CAFilter* _saturationFilter;

}
-(void)_setupDigitalTimeViews;
-(id)_secondTickActiveColorForColor:(unsigned long long)arg1 ;
-(void)_setupAnalogHandsView;
-(void)_didFinishTimeViewSetup;
-(BOOL)shouldUseCustomDialBackground;
-(id)_customDialBackgroundView;
-(void)setBrightnessFilterInputAmount:(double)arg1 ;
-(void)setSaturationFilterInputAmount:(double)arg1 ;
-(void)updateFilters;
-(double)_analogTickInset;
-(CGSize)_hourTickSize;
-(CGSize)_minuteTickSize;
-(unsigned long long)_hourTickCount;
-(unsigned long long)_minuteTickCount;
-(id)_hourTickColorForColor:(unsigned long long)arg1 ;
-(id)_minuteTickColorForColor:(unsigned long long)arg1 ;
-(id)_hourMinuteHandFillColorForColor:(unsigned long long)arg1 ;
-(id)_hourMinuteHandStrokeColorForColor:(unsigned long long)arg1 ;
-(CGSize)_secondTickSize;
-(double)_digitalTimeLabelFontSize;
-(id)_digitalTimeLabelColorForColor:(unsigned long long)arg1 ;
-(id)_secondTickInactiveColorForColor:(unsigned long long)arg1 ;
@end

