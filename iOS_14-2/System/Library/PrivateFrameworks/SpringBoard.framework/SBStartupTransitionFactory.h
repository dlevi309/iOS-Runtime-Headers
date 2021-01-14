/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

