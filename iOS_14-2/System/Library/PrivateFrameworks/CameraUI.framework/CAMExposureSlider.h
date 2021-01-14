/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraEditKit/CEKDiscreteSlider.h>

@class NSNumberFormatter;

@interface CAMExposureSlider : CEKDiscreteSlider {

	double __previousHorizontalLabelOffset;
	NSNumberFormatter* __decimalFormatter;

}

@property (assign,nonatomic) double _previousHorizontalLabelOffset;                //@synthesize _previousHorizontalLabelOffset=__previousHorizontalLabelOffset - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * _decimalFormatter;              //@synthesize _decimalFormatter=__decimalFormatter - In the implementation block
@property (nonatomic,readonly) double exposureValue; 
+(id)exposureValues;
+(id)decimalFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)exposureValue;
-(NSNumberFormatter *)_decimalFormatter;
-(id)valueText;
-(void)updateValueLabel;
-(void)setExposureValueClosestTo:(double)arg1 ;
-(unsigned long long)_indexOfClosestValidValueForExposureValue:(double)arg1 ;
-(double)horizontalValueLabelOffset;
-(double)_previousHorizontalLabelOffset;
-(void)set_previousHorizontalLabelOffset:(double)arg1 ;
@end

