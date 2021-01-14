/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppExposeGridSwitcherModifier;

@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppExposeGridSwitcherModifier* _appExposeModifier;
	BOOL _isTransitioningOutOfAppExpose;

}

@property (assign,nonatomic) BOOL reversesFloatingCardDirection; 
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(long long)plusButtonStyle;
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(double)contentPageViewScaleForAppLayout:(id)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)scrollViewAttributes;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(double)snapshotScaleForAppLayout:(id)arg1 ;
-(CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2 ;
-(id)initWithTransitionID:(id)arg1 appExposeModifier:(id)arg2 ;
-(BOOL)reversesFloatingCardDirection;
-(void)setReversesFloatingCardDirection:(BOOL)arg1 ;
@end

