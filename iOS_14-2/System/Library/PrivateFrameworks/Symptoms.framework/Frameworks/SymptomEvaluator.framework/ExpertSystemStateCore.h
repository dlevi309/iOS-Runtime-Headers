/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString, NSDictionary, StopWatch;

@interface ExpertSystemStateCore : NSObject {

	int _loopTokens;
	NSString* _label;
	unsigned long long _rank;
	NSDictionary* _entryPreds;
	StopWatch* _sojournTime;
	/*^block*/id _entryAction;
	/*^block*/id _loopEvaluation;
	/*^block*/id _exitAction;
	ExpertSystemStateCore* _previousState;

}

@property (readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long rank;                          //@synthesize rank=_rank - In the implementation block
@property (readonly) NSDictionary * entryPreds;                        //@synthesize entryPreds=_entryPreds - In the implementation block
@property (readonly) StopWatch * sojournTime;                          //@synthesize sojournTime=_sojournTime - In the implementation block
@property (nonatomic,copy) id entryAction;                             //@synthesize entryAction=_entryAction - In the implementation block
@property (nonatomic,copy) id loopEvaluation;                          //@synthesize loopEvaluation=_loopEvaluation - In the implementation block
@property (nonatomic,copy) id exitAction;                              //@synthesize exitAction=_exitAction - In the implementation block
@property (assign) int loopTokens;                                     //@synthesize loopTokens=_loopTokens - In the implementation block
@property (retain) ExpertSystemStateCore * previousState;              //@synthesize previousState=_previousState - In the implementation block
-(ExpertSystemStateCore *)previousState;
-(void)setEntryAction:(id)arg1 ;
-(void)setLoopTokens:(int)arg1 ;
-(void)setPreviousState:(ExpertSystemStateCore *)arg1 ;
-(int)loopTokens;
-(void)setLoopEvaluation:(id)arg1 ;
-(unsigned long long)rank;
-(id)entryAction;
-(id)loopEvaluation;
-(id)exitAction;
-(void)setExitAction:(id)arg1 ;
-(NSString *)label;
-(StopWatch *)sojournTime;
-(id)initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(NSDictionary *)entryPreds;
@end

