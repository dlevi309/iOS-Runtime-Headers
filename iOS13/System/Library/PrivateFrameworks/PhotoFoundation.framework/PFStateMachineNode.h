/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@class NSString, NSMutableDictionary;

@interface PFStateMachineNode : NSObject {

	NSString* _name;
	NSMutableDictionary* _transitions;
	/*^block*/id _action;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)nodeWithName:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)performAction:(id)arg1 ;
-(void)setAction:(/*^block*/id)arg1 ;
-(id)transitionForEventName:(id)arg1 ;
-(id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3 ;
-(id)_dotReachableNodes:(id)arg1 graph:(id)arg2 ;
-(id)addTransition:(id)arg1 ;
-(id)addTransitionOn:(id)arg1 to:(id)arg2 ;
-(id)addTransitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3 ;
-(id)addReturnTransitionOn:(id)arg1 ;
@end

