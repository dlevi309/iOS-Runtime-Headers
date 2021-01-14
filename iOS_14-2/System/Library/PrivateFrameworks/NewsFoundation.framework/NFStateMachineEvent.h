/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(NSSet *)states;
-(void)setDestinationState:(NFStateMachineState *)arg1 ;
-(id)fired:(id)arg1 withOwner:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(void)setStates:(NSSet *)arg1 ;
-(id)initWithName:(id)arg1 transitionFromStates:(id)arg2 toState:(id)arg3 ;
-(id)onFire:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NFStateMachineState *)destinationState;
-(BOOL)isEqual:(id)arg1 ;
@end

