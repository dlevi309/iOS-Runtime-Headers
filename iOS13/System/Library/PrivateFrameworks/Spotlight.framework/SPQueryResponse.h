/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/


@class SPQueryTask, NSArray, NSString;

@interface SPQueryResponse : NSObject {

	int _kind;
	int _state;
	SPQueryTask* _task;
	NSArray* _resultSections;
	NSString* _rankingDebugLog;
	NSString* _sessionEntityString;

}

@property (assign,nonatomic) int kind;                                    //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) int state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SPQueryTask * task;                          //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSArray * resultSections;                    //@synthesize resultSections=_resultSections - In the implementation block
@property (nonatomic,retain) NSString * sessionEntityString;              //@synthesize sessionEntityString=_sessionEntityString - In the implementation block
@property (nonatomic,retain) NSString * rankingDebugLog;                  //@synthesize rankingDebugLog=_rankingDebugLog - In the implementation block
-(id)init;
-(id)description;
-(id)copy;
-(int)state;
-(int)kind;
-(void)setKind:(int)arg1 ;
-(void)setState:(int)arg1 ;
-(SPQueryTask *)task;
-(void)setTask:(SPQueryTask *)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(NSString *)sessionEntityString;
-(NSArray *)resultSections;
-(void)setResultSections:(NSArray *)arg1 ;
-(void)setSessionEntityString:(NSString *)arg1 ;
-(NSString *)rankingDebugLog;
-(void)setRankingDebugLog:(NSString *)arg1 ;
@end

