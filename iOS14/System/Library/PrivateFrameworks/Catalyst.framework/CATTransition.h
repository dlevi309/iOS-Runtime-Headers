/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SEL)action;
-(id)description;
-(id)initWithState:(id)arg1 action:(SEL)arg2 ;
-(CATState *)state;
@end

