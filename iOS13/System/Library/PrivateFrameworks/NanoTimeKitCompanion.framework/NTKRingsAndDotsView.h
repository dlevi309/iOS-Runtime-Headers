/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKColoringView.h>

@class UIColor, NSArray, NSMutableArray, NSString;

@interface NTKRingsAndDotsView : UIView <NTKColoringView> {

	BOOL _hidesOverlapShadow;
	UIColor* _overrideColor;
	NSArray* _ringColors;
	NSMutableArray* _ringsFillFractions;
	UIColor* _foregroundColor;
	UIColor* _secondaryForegroundColor;
	double _diameter;
	double _ringWidth;
	double _ringGapWidth;
	double _appearanceAnimationProgress;
	NSArray* _ringViews;
	NSArray* _overlapArcArray;

}

@property (assign,nonatomic) double diameter;                                  //@synthesize diameter=_diameter - In the implementation block
@property (assign,nonatomic) double ringWidth;                                 //@synthesize ringWidth=_ringWidth - In the implementation block
@property (assign,nonatomic) double ringGapWidth;                              //@synthesize ringGapWidth=_ringGapWidth - In the implementation block
@property (assign,nonatomic) double appearanceAnimationProgress;               //@synthesize appearanceAnimationProgress=_appearanceAnimationProgress - In the implementation block
@property (nonatomic,retain) NSArray * ringViews;                              //@synthesize ringViews=_ringViews - In the implementation block
@property (nonatomic,retain) NSArray * overlapArcArray;                        //@synthesize overlapArcArray=_overlapArcArray - In the implementation block
@property (nonatomic,retain) NSArray * ringColors;                             //@synthesize ringColors=_ringColors - In the implementation block
@property (nonatomic,retain) NSMutableArray * ringsFillFractions;              //@synthesize ringsFillFractions=_ringsFillFractions - In the implementation block
@property (assign,nonatomic) BOOL hidesOverlapShadow;                          //@synthesize hidesOverlapShadow=_hidesOverlapShadow - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                        //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryForegroundColor;               //@synthesize secondaryForegroundColor=_secondaryForegroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor;                          //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
+(id)emptyFillFractions;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(double)ringWidth;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)setFilterProvider:(id)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 diameter:(double)arg2 ringWidth:(double)arg3 ringGapWidth:(double)arg4 overlapStrokeWidth:(double)arg5 ;
-(void)setRingColors:(NSArray *)arg1 ;
-(void)setRingsFillFractions:(NSMutableArray *)arg1 ;
-(UIColor *)secondaryForegroundColor;
-(BOOL)usesLegibility;
-(void)setSecondaryForegroundColor:(UIColor *)arg1 ;
-(void)setRingWidth:(double)arg1 ;
-(void)setRingGapWidth:(double)arg1 ;
-(void)_setDiameter:(double)arg1 ;
-(double)radiusForRingAtIndex:(long long)arg1 ;
-(void)setHidesOverlapShadow:(BOOL)arg1 ;
-(NSArray *)ringColors;
-(NSMutableArray *)ringsFillFractions;
-(BOOL)hidesOverlapShadow;
-(double)ringGapWidth;
-(double)appearanceAnimationProgress;
-(void)setAppearanceAnimationProgress:(double)arg1 ;
-(NSArray *)ringViews;
-(void)setRingViews:(NSArray *)arg1 ;
-(NSArray *)overlapArcArray;
-(void)setOverlapArcArray:(NSArray *)arg1 ;
@end
