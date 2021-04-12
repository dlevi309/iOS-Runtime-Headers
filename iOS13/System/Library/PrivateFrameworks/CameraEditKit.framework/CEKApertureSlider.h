/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <CameraEditKit/CEKDiscreteSlider.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol CEKApertureSliderDelegate;
@class NSNumberFormatter, NSString;

@interface CEKApertureSlider : CEKDiscreteSlider <UIScrollViewDelegate> {

	id<CEKApertureSliderDelegate> _delegate;
	unsigned long long __minimumApertureIndex;
	unsigned long long __maximumApertureIndex;
	NSNumberFormatter* __decimalFormatter;
	NSNumberFormatter* __wholeNumberFormatter;

}

@property (assign,setter=_setMinimumApertureIndex:,nonatomic) unsigned long long _minimumApertureIndex;              //@synthesize _minimumApertureIndex=__minimumApertureIndex - In the implementation block
@property (assign,setter=_setMaximumApertureIndex:,nonatomic) unsigned long long _maximumApertureIndex;              //@synthesize _maximumApertureIndex=__maximumApertureIndex - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * _decimalFormatter;                                                //@synthesize _decimalFormatter=__decimalFormatter - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * _wholeNumberFormatter;                                            //@synthesize _wholeNumberFormatter=__wholeNumberFormatter - In the implementation block
@property (assign,nonatomic,__weak) id<CEKApertureSliderDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double apertureValue; 
@property (nonatomic,readonly) double minimumApertureValue; 
@property (nonatomic,readonly) double maximumApertureValue; 
@property (nonatomic,readonly) double markedApertureValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)firstFullStopIndexAfterOrIncludingIndex:(unsigned long long)arg1 ;
+(id)validApertureValues;
+(BOOL)isValidApertureIndexFullStop:(unsigned long long)arg1 ;
+(BOOL)isValidApertureIndex:(unsigned long long)arg1 ;
-(id<CEKApertureSliderDelegate>)delegate;
-(void)setDelegate:(id<CEKApertureSliderDelegate>)arg1 ;
-(NSNumberFormatter *)_decimalFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)valueText;
-(double)apertureValue;
-(double)horizontalValueLabelOffset;
-(NSNumberFormatter *)_wholeNumberFormatter;
-(void)_updateMainTickMarkOffset;
-(void)_handleDidChangeValue:(id)arg1 ;
-(unsigned long long)_minimumApertureIndex;
-(unsigned long long)_indexOfClosestValidValueForAperture:(double)arg1 ;
-(unsigned long long)_maximumApertureIndex;
-(unsigned long long)_discreteIndexForValidApertureIndex:(unsigned long long)arg1 ;
-(double)minimumApertureValue;
-(double)maximumApertureValue;
-(double)markedApertureValue;
-(void)setApertureValueClosestTo:(double)arg1 ;
-(void)setMarkedApertureValueClosestTo:(double)arg1 ;
-(unsigned long long)_validApertureIndexForDiscreteIndex:(unsigned long long)arg1 ;
-(void)setMinimumApertureValueClosestTo:(double)arg1 maximumApertureValueClosestTo:(double)arg2 ;
-(void)setMarkedApertureValueToNone;
-(void)_setMinimumApertureIndex:(unsigned long long)arg1 ;
-(void)_setMaximumApertureIndex:(unsigned long long)arg1 ;
@end

