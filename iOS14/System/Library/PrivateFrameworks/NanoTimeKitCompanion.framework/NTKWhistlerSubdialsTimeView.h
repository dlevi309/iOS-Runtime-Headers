/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKDualTimeView.h>

@class NTKWhistlerAnalogColorPalette;

@interface NTKWhistlerSubdialsTimeView : NTKDualTimeView {

	NTKWhistlerAnalogColorPalette* _palette;

}

@property (nonatomic,retain) NTKWhistlerAnalogColorPalette * palette;              //@synthesize palette=_palette - In the implementation block
-(NTKWhistlerAnalogColorPalette *)palette;
-(void)setPalette:(NTKWhistlerAnalogColorPalette *)arg1 ;
-(double)_analogTickInset;
-(CGSize)_hourTickSize;
-(CGSize)_minuteTickSize;
-(unsigned long long)_hourTickCount;
-(unsigned long long)_minuteTickCount;
-(id)_hourMinuteHandFillColorForColor:(unsigned long long)arg1 ;
-(id)_hourMinuteHandStrokeColorForColor:(unsigned long long)arg1 ;
-(id)_digitalTimeLabelColorForColor:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 andDevice:(id)arg3 ;
-(id)_secondHandColorForColor:(unsigned long long)arg1 ;
@end

