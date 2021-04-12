/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class NSString, UIGestureRecognizer;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction {

	NSString* _suppressionReason;
	UIGestureRecognizer* _gestureRecognizer;
	long long _completionType;

}

@property (nonatomic,retain) UIGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,readonly) long long completionType;                           //@synthesize completionType=_completionType - In the implementation block
-(void)_begin;
-(void)_didComplete;
-(void)setGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(void)_beginAnimation;
-(long long)completionType;
-(void)_setupAnimation;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(void)finishWithCompletionType:(long long)arg1 ;
-(void)systemGestureStateChanged:(id)arg1 ;
-(BOOL)shouldSuppressMedusaKeyboardDuringGesture;
@end

