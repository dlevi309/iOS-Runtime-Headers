/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CEKApertureSliderDelegate>)delegate;
-(double)apertureValue;
-(void)setApertureValueClosestTo:(double)arg1 ;
-(NSNumberFormatter *)_decimalFormatter;
-(void)setDelegate:(id<CEKApertureSliderDelegate>)arg1 ;
-(double)minimumApertureValue;
-(double)maximumApertureValue;
-(void)setMarkedApertureValueClosestTo:(double)arg1 ;
-(double)markedApertureValue;
-(void)setMinimumApertureValueClosestTo:(double)arg1 maximumApertureValueClosestTo:(double)arg2 ;
-(id)valueText;
-(double)horizontalValueLabelOffset;
-(NSNumberFormatter *)_wholeNumberFormatter;
-(void)_updateMainTickMarkOffset;
-(void)_handleDidChangeValue:(id)arg1 ;
-(unsigned long long)_minimumApertureIndex;
-(unsigned long long)_indexOfClosestValidValueForAperture:(double)arg1 ;
-(unsigned long long)_maximumApertureIndex;
-(unsigned long long)_discreteIndexForValidApertureIndex:(unsigned long long)arg1 ;
-(unsigned long long)_validApertureIndexForDiscreteIndex:(unsigned long long)arg1 ;
-(void)setMarkedApertureValueToNone;
-(void)_setMinimumApertureIndex:(unsigned long long)arg1 ;
-(void)_setMaximumApertureIndex:(unsigned long long)arg1 ;
@end

