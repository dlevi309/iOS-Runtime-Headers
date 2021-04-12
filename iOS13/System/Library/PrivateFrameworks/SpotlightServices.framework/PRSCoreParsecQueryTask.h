/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/PRSQueryTask.h>

@class PARSession, SFSearchSuggestion, PARTask;

@interface PRSCoreParsecQueryTask : PRSQueryTask {

	PARSession* _parSession;
	BOOL _parsecEnabled;
	unsigned long long _whyQuery;
	SFSearchSuggestion* _suggestion;
	PARTask* _task;

}

@property (nonatomic,retain) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (retain) PARTask * task;                                         //@synthesize task=_task - In the implementation block
-(void)resume;
-(PARTask *)task;
-(void)setTask:(PARTask *)arg1 ;
-(void)setSuggestion:(SFSearchSuggestion *)arg1 ;
-(SFSearchSuggestion *)suggestion;
-(void)handleResults:(id)arg1 ;
-(BOOL)needsBag;
-(void)setParsecState:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 parsecSession:(id)arg2 handler:(id)arg3 queue:(id)arg4 scaleFactor:(double)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7 ;
@end

