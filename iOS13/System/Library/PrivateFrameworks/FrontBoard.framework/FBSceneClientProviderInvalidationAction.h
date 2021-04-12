/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class BSAtomicSignal, BSAction;

@interface FBSceneClientProviderInvalidationAction : NSObject {

	BSAtomicSignal* _invalidated;
	BSAction* _action;

}
-(id)init;
-(void)invalidate;
-(id)initWithHandler:(/*^block*/id)arg1 ;
@end

