/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/PRSQueryTask.h>

@class PARSession, SFSearchSuggestion, PARTask;

@interface PRSCoreParsecQueryTask : PRSQueryTask {

	PARSession* _parSession;
	BOOL _parsecEnabled;
	SFSearchSuggestion* _suggestion;
	PARTask* _task;

}

@property (nonatomic,retain) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (retain) PARTask * task;                                         //@synthesize task=_task - In the implementation block
-(PARTask *)task;
-(SFSearchSuggestion *)suggestion;
-(void)setTask:(PARTask *)arg1 ;
-(void)setSuggestion:(SFSearchSuggestion *)arg1 ;
-(void)resume;
-(void)setParsecState:(BOOL)arg1 ;
-(void)handleResults:(id)arg1 ;
-(BOOL)needsBag;
-(id)initWithSession:(id)arg1 parsecSession:(id)arg2 handler:(id)arg3 queue:(id)arg4 queryContext:(id)arg5 queryIdent:(unsigned long long)arg6 ;
@end

