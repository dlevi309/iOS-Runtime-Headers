/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSString, NSSet, NFStateMachineState;

@interface NFStateMachineEvent : NSObject {

	NSString* _name;
	NSSet* _states;
	NFStateMachineState* _destinationState;
	/*^block*/id _fireBlock;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSSet * states;                                      //@synthesize states=_states - In the implementation block
@property (nonatomic,retain) NFStateMachineState * destinationState;              //@synthesize destinationState=_destinationState - In the implementation block
@property (nonatomic,copy) id fireBlock;                                          //@synthesize fireBlock=_fireBlock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSSet *)states;
-(void)setStates:(NSSet *)arg1 ;
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(NFStateMachineState *)destinationState;
-(id)fired:(id)arg1 withOwner:(id)arg2 ;
-(id)initWithName:(id)arg1 transitionFromStates:(id)arg2 toState:(id)arg3 ;
-(id)onFire:(/*^block*/id)arg1 ;
-(void)setDestinationState:(NFStateMachineState *)arg1 ;
@end

