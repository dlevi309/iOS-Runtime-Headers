/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBInitialRestartState;

@interface SBStartupTransitionFactory : NSObject {

	SBInitialRestartState* _initialRestartState;

}
-(id)initWithInitialRestartState:(id)arg1 ;
-(id)transitionForContext:(id)arg1 outDestination:(unsigned long long*)arg2 ;
-(id)_transactionForDestination:(unsigned long long)arg1 context:(id)arg2 ;
@end

