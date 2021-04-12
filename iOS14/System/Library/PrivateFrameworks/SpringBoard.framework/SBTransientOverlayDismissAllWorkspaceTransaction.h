/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@interface SBTransientOverlayDismissAllWorkspaceTransaction : SBMainWorkspaceTransaction {

	long long _animatedOverride;

}

@property (assign,getter=isAnimatedOverride,nonatomic) long long animatedOverride;              //@synthesize animatedOverride=_animatedOverride - In the implementation block
+(BOOL)isValidForTransitionRequest:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(id)initWithTransitionRequest:(id)arg1 ;
-(long long)isAnimatedOverride;
-(void)setAnimatedOverride:(long long)arg1 ;
@end

