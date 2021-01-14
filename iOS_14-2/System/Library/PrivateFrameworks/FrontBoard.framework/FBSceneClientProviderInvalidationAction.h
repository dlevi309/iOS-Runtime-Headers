/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class BSAtomicSignal, BSAction;

@interface FBSceneClientProviderInvalidationAction : NSObject {

	BSAtomicSignal* _invalidated;
	BSAction* _action;

}
-(id)init;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
@end

