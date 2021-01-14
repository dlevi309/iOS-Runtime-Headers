/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBStartupTransitionContext;


@protocol SBStartupTransition
@property (nonatomic,readonly) SBStartupTransitionContext * context; 
@property (nonatomic,readonly) unsigned long long destination; 
@required
-(SBStartupTransitionContext *)context;
-(unsigned long long)destination;

@end

