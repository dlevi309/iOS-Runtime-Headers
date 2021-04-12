/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addEvent:(id)arg1 ;
-(id)owner;
-(NSMutableDictionary *)states;
-(void)setEvents:(NSMutableDictionary *)arg1 ;
-(id)debugDescription;
-(NFMutexLock *)lock;
-(void)deactivate;
-(void)activate;
-(id)description;
-(void)setLock:(NFMutexLock *)arg1 ;
-(void)deactivateIfNeeded;
-(id)initWithState:(id)arg1 withOwner:(id)arg2 ;
-(void)setStates:(NSMutableDictionary *)arg1 ;
-(void)setOwner:(id)arg1 ;
-(void)setState:(NFStateMachineState *)arg1 ;
-(NFStateMachineState *)state;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSMutableDictionary *)events;
-(id)fireEventWithName:(id)arg1 withContext:(id)arg2 ;
-(void)addState:(id)arg1 ;
-(void)setStatusToken:(long long)arg1 ;
-(void)activateIfNeeded;
-(long long)statusToken;
-(unsigned long long)status;
@end

