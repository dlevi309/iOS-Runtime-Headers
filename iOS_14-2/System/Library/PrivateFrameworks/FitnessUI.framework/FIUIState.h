/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class NSMutableDictionary, NSString, NSMutableSet;

@interface FIUIState : NSObject {

	NSMutableDictionary* _transitions;
	BOOL _transitional;
	NSString* _label;
	/*^block*/id _entry;
	/*^block*/id _exit;
	FIUIState* _parentState;
	NSMutableSet* _childStates;
	FIUIState* _entryState;

}

@property (readonly) NSString * label;                                    //@synthesize label=_label - In the implementation block
@property (copy) id entry;                                                //@synthesize entry=_entry - In the implementation block
@property (copy) id exit;                                                 //@synthesize exit=_exit - In the implementation block
@property (getter=isTransitional) BOOL transitional;                      //@synthesize transitional=_transitional - In the implementation block
@property (assign,nonatomic,__weak) FIUIState * parentState;              //@synthesize parentState=_parentState - In the implementation block
@property (nonatomic,readonly) NSMutableSet * childStates;                //@synthesize childStates=_childStates - In the implementation block
@property (assign,nonatomic,__weak) FIUIState * entryState;               //@synthesize entryState=_entryState - In the implementation block
+(id)transitionalStateFromState:(id)arg1 toState:(id)arg2 entryEvent:(long long)arg3 exitEvent:(long long)arg4 ;
+(id)stateWithLabel:(id)arg1 ;
-(id)exit;
-(id)initWithLabel:(id)arg1 ;
-(id)entry;
-(BOOL)isTransitional;
-(id)description;
-(void)setEntry:(id)arg1 ;
-(void)setTransitional:(BOOL)arg1 ;
-(id)allTransitions;
-(NSString *)label;
-(void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3 handler:(/*^block*/id)arg4 gate:(/*^block*/id)arg5 ;
-(void)setParentState:(FIUIState *)arg1 ;
-(NSMutableSet *)childStates;
-(void)setEntryState:(FIUIState *)arg1 ;
-(void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3 ;
-(void)enumerateEvents:(/*^block*/id)arg1 ;
-(id)transitionForEvent:(long long)arg1 ;
-(void)addChildStates:(id)arg1 withEntryState:(id)arg2 ;
-(void)setExit:(id)arg1 ;
-(FIUIState *)parentState;
-(FIUIState *)entryState;
@end

