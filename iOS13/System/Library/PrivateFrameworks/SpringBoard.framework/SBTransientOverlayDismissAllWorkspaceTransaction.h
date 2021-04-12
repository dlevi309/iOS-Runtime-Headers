/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@interface SBTransientOverlayDismissAllWorkspaceTransaction : SBMainWorkspaceTransaction {

	long long _animatedOverride;

}

@property (assign,getter=isAnimatedOverride,nonatomic) long long animatedOverride;              //@synthesize animatedOverride=_animatedOverride - In the implementation block
+(BOOL)isValidForTransitionRequest:(id)arg1 ;
-(void)_begin;
-(id)initWithTransitionRequest:(id)arg1 ;
-(long long)isAnimatedOverride;
-(void)setAnimatedOverride:(long long)arg1 ;
@end

