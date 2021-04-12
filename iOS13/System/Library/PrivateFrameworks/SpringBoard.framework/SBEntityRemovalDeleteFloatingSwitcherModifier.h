/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBEntityRemovalDeleteFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	long long _floatingConfiguration;
	BOOL _blursFromAppLayout;

}

@property (assign,nonatomic) BOOL blursFromAppLayout;              //@synthesize blursFromAppLayout=_blursFromAppLayout - In the implementation block
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)opacitySettings;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)topMostAppLayouts;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(CGRect)containerViewBounds;
-(id)transitionDidEnd;
-(BOOL)_isIndexFromAppLayout:(unsigned long long)arg1 ;
-(BOOL)_isIndexToAppLayout:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4 ;
-(BOOL)blursFromAppLayout;
-(void)setBlursFromAppLayout:(BOOL)arg1 ;
@end

