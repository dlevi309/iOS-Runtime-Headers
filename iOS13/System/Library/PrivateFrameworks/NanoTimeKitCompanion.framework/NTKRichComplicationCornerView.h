/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@class UIBezierPath;

@interface NTKRichComplicationCornerView : NTKRichComplicationView {

	long long _position;
	UIBezierPath* _hitTestPath;
	CGRect _hitTestBounds;
	double _innerComponentRotationInDegree;
	double _outerComponentRotationInDegree;

}

@property (assign,nonatomic) double innerComponentRotationInDegree;              //@synthesize innerComponentRotationInDegree=_innerComponentRotationInDegree - In the implementation block
@property (assign,nonatomic) double outerComponentRotationInDegree;              //@synthesize outerComponentRotationInDegree=_outerComponentRotationInDegree - In the implementation block
@property (assign,nonatomic) long long position;                                 //@synthesize position=_position - In the implementation block
+(id)viewWithLegacyComplicationType:(unsigned long long)arg1 ;
+(id)keylineImageForPosition:(long long)arg1 filled:(BOOL)arg2 forDevice:(id)arg3 narrowTopSlots:(BOOL)arg4 ;
+(id)layoutRuleForState:(long long)arg1 position:(long long)arg2 faceBounds:(CGRect)arg3 forDevice:(id)arg4 narrowTopSlots:(BOOL)arg5 ;
+(id)keylineViewForPosition:(long long)arg1 forDevice:(id)arg2 narrowTopSlots:(BOOL)arg3 ;
+(CGSize)viewSizeForDevice:(id)arg1 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 ;
+(UIEdgeInsets)_keylinePaddingForPosition:(long long)arg1 conentSize:(CGSize)arg2 forDevice:(id)arg3 narrowTopSlots:(BOOL)arg4 ;
+(CGAffineTransform)transformForState:(long long)arg1 position:(long long)arg2 device:(id)arg3 ;
+(id)_createHitTestPathWithViewBounds:(CGRect)arg1 position:(long long)arg2 forDevice:(id)arg3 ;
-(id)init;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_editingDidEnd;
-(id)initWithFamily:(long long)arg1 ;
-(id)_createAndAddColoringLabelWithFontSize:(double)arg1 ;
-(double)innerComponentRotationInDegree;
-(double)outerComponentRotationInDegree;
-(void)_layoutView:(id)arg1 origin:(CGPoint)arg2 editingTranslation:(CGPoint)arg3 editingRotationInDegree:(double)arg4 ;
-(void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 ;
-(void)_layoutCurvedLabel:(id)arg1 centerAngleInDegree:(double)arg2 editingRotationInDegree:(double)arg3 ;
-(void)setInnerComponentRotationInDegree:(double)arg1 ;
-(void)setOuterComponentRotationInDegree:(double)arg1 ;
@end

