/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKBKeyViewAnimator.h>
#import <UIKitCore/_UIFloatingContentViewDelegate.h>

@class NSMutableDictionary, NSString;

@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator <_UIFloatingContentViewDelegate> {

	NSMutableDictionary* _selectedKeyTimestamps;
	NSMutableDictionary* _transitionCompletions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionFloatingKeyView:(id)arg1 toState:(int)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(BOOL)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 ;
-(BOOL)shouldPurgeKeyViews;
-(void)animateFloatingKeyView:(id)arg1 toControlState:(unsigned long long)arg2 ;
-(void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(Class)keyViewClassForKey:(id)arg1 renderTraits:(id)arg2 screenTraits:(id)arg3 ;
-(void)addTransitionCompletion:(/*^block*/id)arg1 forKeyName:(id)arg2 ;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2 ;
-(BOOL)shouldAssertCurrentKeyState:(id)arg1 ;
-(void)reset;
-(long long)_transitionFromState:(int)arg1 toState:(int)arg2 ;
-(unsigned long long)controlStateForKeyState:(int)arg1 ;
-(void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
@end

