/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBMoveGestureFloatingSwitcherModifier : SBGestureSwitcherModifier {

	long long _initialFloatingConfiguration;
	long long _interfaceOrientation;
	CGPoint _translation;

}

@property (assign,nonatomic) long long initialFloatingConfiguration;              //@synthesize initialFloatingConfiguration=_initialFloatingConfiguration - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                      //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) CGPoint translation;                                 //@synthesize translation=_translation - In the implementation block
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)topMostLayoutElements;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(CGRect)containerViewBounds;
-(void)setTranslation:(CGPoint)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(long long)interfaceOrientation;
-(CGPoint)translation;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 ;
-(long long)initialFloatingConfiguration;
-(void)setInitialFloatingConfiguration:(long long)arg1 ;
@end

