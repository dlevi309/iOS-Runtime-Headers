/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBChainableModifierEvent.h>

@interface SBSwitcherModifierEvent : SBChainableModifierEvent

@property (nonatomic,readonly) long long type; 
-(id)loggingCategory;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)type;
-(BOOL)isTransitionEvent;
-(BOOL)isGestureEvent;
@end

