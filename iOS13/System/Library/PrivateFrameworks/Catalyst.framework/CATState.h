/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@class NSMutableDictionary, NSString;

@interface CATState : NSObject {

	NSMutableDictionary* mTranstionByTriggeringEvent;
	NSString* _name;
	SEL _enterAction;
	SEL _exitAction;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SEL enterAction;                     //@synthesize enterAction=_enterAction - In the implementation block
@property (assign,nonatomic) SEL exitAction;                      //@synthesize exitAction=_exitAction - In the implementation block
+(id)new;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 action:(SEL)arg3 ;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 ;
-(id)transitionWithTriggeringEvent:(id)arg1 ;
-(SEL)enterAction;
-(void)setEnterAction:(SEL)arg1 ;
-(SEL)exitAction;
-(void)setExitAction:(SEL)arg1 ;
@end

