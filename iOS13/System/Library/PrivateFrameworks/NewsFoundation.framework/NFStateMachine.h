/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NFStateMachineState, NSMutableDictionary, NFMutexLock;

@interface NFStateMachine : NSObject {

	unsigned long long _status;
	NFStateMachineState* _state;
	id _owner;
	NSMutableDictionary* _states;
	NSMutableDictionary* _events;
	NFMutexLock* _lock;
	long long _statusToken;

}

@property (assign,nonatomic,__weak) id owner;                           //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * states;              //@synthesize states=_states - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NFStateMachineState * state;               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long status;                 //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NFMutexLock * lock;                        //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) long long statusToken;                     //@synthesize statusToken=_statusToken - In the implementation block
-(id)description;
-(id)debugDescription;
-(NFMutexLock *)lock;
-(void)setOwner:(id)arg1 ;
-(NFStateMachineState *)state;
-(unsigned long long)status;
-(id)owner;
-(void)setState:(NFStateMachineState *)arg1 ;
-(NSMutableDictionary *)events;
-(void)setEvents:(NSMutableDictionary *)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setLock:(NFMutexLock *)arg1 ;
-(NSMutableDictionary *)states;
-(void)activate;
-(void)deactivate;
-(void)activateIfNeeded;
-(void)setStates:(NSMutableDictionary *)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)addState:(id)arg1 ;
-(long long)statusToken;
-(void)setStatusToken:(long long)arg1 ;
-(id)initWithState:(id)arg1 withOwner:(id)arg2 ;
-(void)deactivateIfNeeded;
-(id)fireEventWithName:(id)arg1 withContext:(id)arg2 ;
@end

