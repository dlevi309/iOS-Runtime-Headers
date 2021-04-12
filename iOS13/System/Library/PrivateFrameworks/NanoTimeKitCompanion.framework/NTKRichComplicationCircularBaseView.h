/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@class UIView;

@interface NTKRichComplicationCircularBaseView : NTKRichComplicationView {

	double _editingRotationInDegree;
	UIView* _contentView;
	UIView* _framingView;
	long long _position;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIView * framingView;              //@synthesize framingView=_framingView - In the implementation block
@property (assign,nonatomic) long long position;                  //@synthesize position=_position - In the implementation block
+(id)keylineImageWithFilled:(BOOL)arg1 forDevice:(id)arg2 ;
+(CGAffineTransform)transformForState:(long long)arg1 ;
+(id)keylineViewForDevice:(id)arg1 ;
+(id)viewWithLegacyComplicationType:(unsigned long long)arg1 ;
+(id)layoutRuleForState:(long long)arg1 viewCenterInFaceBounds:(CGPoint)arg2 position:(long long)arg3 forDevice:(id)arg4 ;
+(id)keylineImageWithFilled:(BOOL)arg1 wide:(BOOL)arg2 expanded:(BOOL)arg3 forDevice:(id)arg4 ;
+(id)keylineViewForDevice:(id)arg1 wide:(BOOL)arg2 expanded:(BOOL)arg3 ;
+(id)layoutRuleForState:(long long)arg1 viewCenterInFaceBounds:(CGPoint)arg2 position:(long long)arg3 editingAdjustment:(long long)arg4 wide:(BOOL)arg5 forDevice:(id)arg6 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 ;
-(id)init;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(void)_editingDidEnd;
-(id)initWithFamily:(long long)arg1 ;
-(id)_createAndAddColoringLabel;
-(unsigned long long)_adjustFontSizeForLabel:(id)arg1 fontWeight:(double)arg2 possibleMaxWidths:(id)arg3 possibleFontSizes:(id)arg4 ;
-(void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 ;
-(UIView *)framingView;
@end

