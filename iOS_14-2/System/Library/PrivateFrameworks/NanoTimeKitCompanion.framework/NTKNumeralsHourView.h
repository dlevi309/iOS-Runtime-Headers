/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIImageView.h>

@class NTKNumeralsAnalogFaceConfiguration, UIColor;

@interface NTKNumeralsHourView : UIImageView {

	long long _hour;
	unsigned long long _style;
	NTKNumeralsAnalogFaceConfiguration* _faceConfiguration;
	UIColor* _appliedColor;
	BOOL _isLoaded;

}

@property (readonly) BOOL isLoaded;              //@synthesize isLoaded=_isLoaded - In the implementation block
-(void)load;
-(void)layoutSubviews;
-(BOOL)isLoaded;
-(id)initUnloadedHourViewForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3 ;
-(id)_imageNameForStyle:(unsigned long long)arg1 hour:(long long)arg2 ;
-(void)applyFaceColorFromFaceConfiguration:(id)arg1 ;
-(id)_hourColorForDevice:(id)arg1 faceColor:(unsigned long long)arg2 colorSchemeUnits:(unsigned long long)arg3 ;
-(void)_applyTintColor:(id)arg1 ;
-(id)initForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4 ;
@end

