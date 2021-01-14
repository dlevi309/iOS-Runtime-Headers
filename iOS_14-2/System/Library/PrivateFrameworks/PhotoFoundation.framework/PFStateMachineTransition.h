/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@class NSString;

@interface PFStateMachineTransition : NSObject {

	NSString* _eventName;
	NSString* _destinationName;
	/*^block*/id _action;

}

@property (readonly) NSString * eventName;                    //@synthesize eventName=_eventName - In the implementation block
@property (readonly) NSString * destinationName;              //@synthesize destinationName=_destinationName - In the implementation block
+(id)transitionOn:(id)arg1 to:(id)arg2 ;
+(id)transitionOn:(id)arg1 to:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)returnTransitionOn:(id)arg1 ;
+(id)transitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3 ;
-(NSString *)eventName;
-(void)setAction:(/*^block*/id)arg1 ;
-(id)description;
-(NSString *)destinationName;
-(void)performAction:(id)arg1 ;
-(id)destination:(id)arg1 ;
-(id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3 ;
-(id)initWithEventName:(id)arg1 to:(id)arg2 action:(/*^block*/id)arg3 ;
-(id)_dotReachableNodes:(id)arg1 ;
@end

