/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@class NSMutableDictionary, NSString;

@interface CATState : NSObject {

	NSMutableDictionary* mTransitionByTriggeringEvent;
	NSString* _name;
	SEL _enterAction;
	SEL _exitAction;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SEL enterAction;                     //@synthesize enterAction=_enterAction - In the implementation block
@property (assign,nonatomic) SEL exitAction;                      //@synthesize exitAction=_exitAction - In the implementation block
+(id)new;
-(id)init;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 action:(SEL)arg3 ;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 ;
-(SEL)enterAction;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)setEnterAction:(SEL)arg1 ;
-(id)transitionWithTriggeringEvent:(id)arg1 ;
-(SEL)exitAction;
-(void)setExitAction:(SEL)arg1 ;
@end

