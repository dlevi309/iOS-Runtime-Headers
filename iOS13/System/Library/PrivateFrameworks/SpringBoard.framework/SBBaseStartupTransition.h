/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransaction.h>
#import <libobjc.A.dylib/SBStartupTransition.h>

@class SBStartupTransitionContext, SBMainWorkspace;

@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition> {

	unsigned long long _destination;
	SBStartupTransitionContext* _context;
	SBMainWorkspace* _mainWorkspace;

}

@property (nonatomic,readonly) SBMainWorkspace * mainWorkspace;                   //@synthesize mainWorkspace=_mainWorkspace - In the implementation block
@property (nonatomic,readonly) SBStartupTransitionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long destination;                    //@synthesize destination=_destination - In the implementation block
-(SBStartupTransitionContext *)context;
-(unsigned long long)destination;
-(void)_begin;
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(SBMainWorkspace *)mainWorkspace;
-(id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 ;
@end

