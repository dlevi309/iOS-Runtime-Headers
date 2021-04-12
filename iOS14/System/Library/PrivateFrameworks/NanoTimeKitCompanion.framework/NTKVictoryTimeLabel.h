/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKDigitalTimeLabel.h>

@class UIColor, NSHashTable;

@interface NTKVictoryTimeLabel : NTKDigitalTimeLabel {

	UIColor* _outlineColor;
	double _outlineAlpha;
	double _additionalPaddingInsets;
	NSHashTable* _labels;

}

@property (assign,nonatomic) double additionalPaddingInsets;              //@synthesize additionalPaddingInsets=_additionalPaddingInsets - In the implementation block
@property (nonatomic,retain) NSHashTable * labels;                        //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UIColor * outlineColor;                      //@synthesize outlineColor=_outlineColor - In the implementation block
@property (assign,nonatomic) double outlineAlpha;                         //@synthesize outlineAlpha=_outlineAlpha - In the implementation block
-(void)setLabels:(NSHashTable *)arg1 ;
-(NSHashTable *)labels;
-(double)outlineAlpha;
-(void)setOutlineAlpha:(double)arg1 ;
-(void)setOutlineColor:(UIColor *)arg1 ;
-(UIColor *)outlineColor;
-(void)setAdditionalPaddingInsets:(double)arg1 ;
-(id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2 additionalPaddingInsets:(double)arg3 ;
-(id)_newUnderlyingLabel:(BOOL)arg1 ;
-(double)additionalPaddingInsets;
@end

