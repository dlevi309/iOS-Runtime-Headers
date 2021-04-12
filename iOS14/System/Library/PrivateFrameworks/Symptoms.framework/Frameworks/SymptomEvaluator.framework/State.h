/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString, NSDictionary, StopWatch, AWDSymptomsAdvisoryAlternateNetworkType, NSMutableArray;

@interface State : NSObject {

	int _loopTokens;
	NSString* _label;
	unsigned long long _rank;
	NSDictionary* _entryCellPreds;
	NSDictionary* _entryWiFiPreds;
	StopWatch* _sojournTime;
	/*^block*/id _entryAction;
	/*^block*/id _loopEvaluation;
	/*^block*/id _exitAction;
	State* _previousState;
	AWDSymptomsAdvisoryAlternateNetworkType* _awdMetric;
	NSMutableArray* _digest;

}

@property (readonly) NSString * label;                                               //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long rank;                                        //@synthesize rank=_rank - In the implementation block
@property (readonly) NSDictionary * entryCellPreds;                                  //@synthesize entryCellPreds=_entryCellPreds - In the implementation block
@property (readonly) NSDictionary * entryWiFiPreds;                                  //@synthesize entryWiFiPreds=_entryWiFiPreds - In the implementation block
@property (readonly) StopWatch * sojournTime;                                        //@synthesize sojournTime=_sojournTime - In the implementation block
@property (nonatomic,copy) id entryAction;                                           //@synthesize entryAction=_entryAction - In the implementation block
@property (nonatomic,copy) id loopEvaluation;                                        //@synthesize loopEvaluation=_loopEvaluation - In the implementation block
@property (nonatomic,copy) id exitAction;                                            //@synthesize exitAction=_exitAction - In the implementation block
@property (assign) int loopTokens;                                                   //@synthesize loopTokens=_loopTokens - In the implementation block
@property (retain) State * previousState;                                            //@synthesize previousState=_previousState - In the implementation block
@property (retain) AWDSymptomsAdvisoryAlternateNetworkType * awdMetric;              //@synthesize awdMetric=_awdMetric - In the implementation block
@property (readonly) NSMutableArray * digest;                                        //@synthesize digest=_digest - In the implementation block
+(id)createAndInitializeAWDMetricForStateWithLevel:(int)arg1 activationIdentifier:(unsigned)arg2 policy:(int)arg3 andSignature:(id)arg4 ;
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4 ;
-(State *)previousState;
-(void)setAwdMetric:(AWDSymptomsAdvisoryAlternateNetworkType *)arg1 ;
-(void)setEntryAction:(id)arg1 ;
-(id)_initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4 ;
-(void)setLoopTokens:(int)arg1 ;
-(void)setPreviousState:(State *)arg1 ;
-(int)loopTokens;
-(void)setLoopEvaluation:(id)arg1 ;
-(NSDictionary *)entryCellPreds;
-(unsigned long long)rank;
-(id)entryAction;
-(id)loopEvaluation;
-(id)exitAction;
-(NSDictionary *)entryWiFiPreds;
-(NSMutableArray *)digest;
-(AWDSymptomsAdvisoryAlternateNetworkType *)awdMetric;
-(void)setExitAction:(id)arg1 ;
-(NSString *)label;
-(void)dealloc;
-(StopWatch *)sojournTime;
@end

