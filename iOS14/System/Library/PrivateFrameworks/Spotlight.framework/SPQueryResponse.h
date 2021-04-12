/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/


@class SPQueryTask, NSArray, NSString;

@interface SPQueryResponse : NSObject {

	int _kind;
	int _state;
	SPQueryTask* _task;
	NSArray* _resultSections;
	NSString* _sessionEntityString;

}

@property (assign,nonatomic) int kind;                                    //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) int state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SPQueryTask * task;                          //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSArray * resultSections;                    //@synthesize resultSections=_resultSections - In the implementation block
@property (nonatomic,retain) NSString * sessionEntityString;              //@synthesize sessionEntityString=_sessionEntityString - In the implementation block
-(id)initWithTask:(id)arg1 ;
-(SPQueryTask *)task;
-(id)init;
-(NSArray *)resultSections;
-(void)setTask:(SPQueryTask *)arg1 ;
-(int)kind;
-(id)description;
-(id)copy;
-(void)setResultSections:(NSArray *)arg1 ;
-(void)setKind:(int)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(NSString *)sessionEntityString;
-(void)setSessionEntityString:(NSString *)arg1 ;
@end

