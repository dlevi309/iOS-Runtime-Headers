/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)interfaceOrientation;
-(CGPoint)translation;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setTranslation:(CGPoint)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(id)topMostAppLayouts;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(CGRect)containerViewBounds;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 ;
-(long long)initialFloatingConfiguration;
-(void)setInitialFloatingConfiguration:(long long)arg1 ;
@end

