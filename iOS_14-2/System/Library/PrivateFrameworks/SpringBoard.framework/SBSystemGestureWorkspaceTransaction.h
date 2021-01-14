/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIGestureRecognizer *)gestureRecognizer;
-(void)_begin;
-(void)_setupAnimation;
-(void)_didComplete;
-(void)_beginAnimation;
-(long long)completionType;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)setGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(void)finishWithCompletionType:(long long)arg1 ;
-(void)systemGestureStateChanged:(id)arg1 ;
-(BOOL)shouldSuppressMedusaKeyboardDuringGesture;
@end

