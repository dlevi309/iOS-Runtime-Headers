/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class _UIVisualEffectViewEntry;

@interface _UIVisualEffectViewReversingEntry : _UIVisualEffectViewEntry {

	_UIVisualEffectViewEntry* _sourceEntry;

}
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(id)description;
-(id)copyForTransitionOut;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(id)initWithViewEntry:(id)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
@end

