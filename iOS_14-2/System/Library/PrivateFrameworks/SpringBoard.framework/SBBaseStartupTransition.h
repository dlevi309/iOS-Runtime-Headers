/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBMainWorkspace *)mainWorkspace;
-(void)_begin;
-(SBStartupTransitionContext *)context;
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)destination;
-(id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 ;
@end

