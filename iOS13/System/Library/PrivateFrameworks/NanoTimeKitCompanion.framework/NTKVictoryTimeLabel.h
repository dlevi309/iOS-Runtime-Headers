/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSHashTable *)labels;
-(void)setLabels:(NSHashTable *)arg1 ;
-(void)setOutlineAlpha:(double)arg1 ;
-(double)outlineAlpha;
-(UIColor *)outlineColor;
-(void)setOutlineColor:(UIColor *)arg1 ;
-(id)_newUnderlyingLabel:(BOOL)arg1 ;
-(void)setAdditionalPaddingInsets:(double)arg1 ;
-(id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2 additionalPaddingInsets:(double)arg3 ;
-(double)additionalPaddingInsets;
@end

