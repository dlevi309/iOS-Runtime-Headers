/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStateMachine.h>

@class NSMutableArray;

@interface _UIDragInteractionDriverStateMachine : _UIStateMachine {

	NSMutableArray* _eventQueue;

}

@property (nonatomic,readonly) unsigned long long state; 
+(void)debugStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
+(void)debugAttemptedInvalidStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 ;
-(void)handleEvent:(unsigned long long)arg1 ;
-(id)initWithDriver:(id)arg1 ;
@end

