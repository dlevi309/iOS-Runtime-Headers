/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ClockKitUI/CLKUITimeLabel.h>
#import <libobjc.A.dylib/NTKColoringView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class UIColor, NTKDigitalTimeLabelStyle, NSString;

@interface NTKDigitalTimeLabel : CLKUITimeLabel <NTKColoringView, NTKTimeView> {

	UIColor* _shadowColor;
	BOOL _usesLegibility;
	BOOL _frozen;
	UIColor* _overrideColor;

}

@property (nonatomic,copy) NTKDigitalTimeLabelStyle * style; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility;                         //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                     //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                 //@synthesize frozen=_frozen - In the implementation block
-(void)setStyle:(NTKDigitalTimeLabelStyle *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)isFrozen;
-(void)setShadowColor:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTimeOffset:(double)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(UIColor *)contentColor;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(id)_newUnderlyingLabel:(BOOL)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(void)setFrameUsingCurrentStyle;
-(BOOL)usesLegibility;
-(void)applyFaceFromColor:(unsigned long long)arg1 toColor:(unsigned long long)arg2 fraction:(float)arg3 device:(id)arg4 ;
-(id)_labelColorFromFaceColor:(unsigned long long)arg1 device:(id)arg2 ;
-(void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)applyFaceColor:(unsigned long long)arg1 device:(id)arg2 ;
@end

