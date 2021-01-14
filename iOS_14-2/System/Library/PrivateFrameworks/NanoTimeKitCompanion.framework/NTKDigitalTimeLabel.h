/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility;                         //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                     //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                 //@synthesize frozen=_frozen - In the implementation block
-(void)setFrozen:(BOOL)arg1 ;
-(UIColor *)contentColor;
-(void)setShadowColor:(id)arg1 ;
-(UIColor *)color;
-(void)setTimeOffset:(double)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(void)setStyle:(NTKDigitalTimeLabelStyle *)arg1 ;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(BOOL)isFrozen;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(void)setFrameUsingCurrentStyle;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)usesLegibility;
-(id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(id)_newUnderlyingLabel:(BOOL)arg1 ;
-(void)applyFaceFromColor:(unsigned long long)arg1 toColor:(unsigned long long)arg2 fraction:(float)arg3 device:(id)arg4 ;
-(id)_labelColorFromFaceColor:(unsigned long long)arg1 device:(id)arg2 ;
-(void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_tritiumBoldTextStatusDidChange:(id)arg1 ;
-(void)applyFaceColor:(unsigned long long)arg1 device:(id)arg2 ;
@end

