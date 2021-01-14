/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@interface _UIVisualEffectAlphaEntry : _UIVisualEffectViewEntry {

	double _initialAlpha;
	double _finalAlpha;

}
-(void)addEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(id)description;
-(id)initWithInitialAlpha:(double)arg1 finalAlpha:(double)arg2 ;
-(id)copyForTransitionOut;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
@end

