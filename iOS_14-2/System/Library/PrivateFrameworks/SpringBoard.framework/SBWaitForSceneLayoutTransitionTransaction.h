/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransaction.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>

@class SBLayoutStateTransitionCoordinator, NSString;

@interface SBWaitForSceneLayoutTransitionTransaction : SBTransaction <SBLayoutStateTransitionObserver> {

	SBLayoutStateTransitionCoordinator* _transitionCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)_begin;
-(void)dealloc;
-(id)initWithSceneLayoutTransitionCoordinator:(id)arg1 ;
@end

