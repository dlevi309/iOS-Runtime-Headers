/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@interface SBTransientOverlayDismissToAppsWorkspaceTransaction : SBMainWorkspaceTransaction
+(BOOL)isValidForTransitionRequest:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(void)_didComplete;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(void)_sendActivationResultWithError:(id)arg1 ;
@end

