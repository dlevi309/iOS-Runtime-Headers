/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, NTKBlackcombDialColorPalette, CALayer, NSArray;

@interface NTKBlackcombBackgroundView : UIView {

	CLKDevice* _device;
	NTKBlackcombDialColorPalette* _palette;
	CALayer* _smallTickCoveringLayer;
	NSArray* _smallTicks;
	NSArray* _mediumTicks;
	NSArray* _largeTicks;
	BOOL _showingStatus;
	BOOL _usesLongSideTicks;

}

@property (assign,nonatomic) BOOL usesLongSideTicks;              //@synthesize usesLongSideTicks=_usesLongSideTicks - In the implementation block
-(id)initForDevice:(id)arg1 ;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(void)_setupTicks;
-(void)_layoutTopLargeTick;
-(CGRect)_tickLayoutBounds;
-(double)_outerDialRadiusAtMediumTick:(long long)arg1 verticalLength:(double)arg2 horizontalLength:(double)arg3 ;
-(double)_innerDialRadiusAtLargeTick:(long long)arg1 verticalLength:(double)arg2 horizontalLength:(double)arg3 ;
-(void)_applyBackgroundColor:(id)arg1 ;
-(void)setUsesLongSideTicks:(BOOL)arg1 ;
-(void)applyTransitionFractionToUsesLongSideTicks:(double)arg1 ;
-(void)configureTicksForStatus:(BOOL)arg1 ;
-(void)applyZoomFraction:(double)arg1 ;
-(BOOL)usesLongSideTicks;
@end

