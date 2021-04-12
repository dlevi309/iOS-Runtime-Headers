/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@class CATState;

@interface CATTransition : NSObject {

	CATState* _state;
	SEL _action;

}

@property (nonatomic,__weak,readonly) CATState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SEL action;                           //@synthesize action=_action - In the implementation block
+(id)new;
-(id)init;
-(id)description;
-(CATState *)state;
-(SEL)action;
-(id)initWithState:(id)arg1 action:(SEL)arg2 ;
@end

