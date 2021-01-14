/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmEvaluator : NSObject {

	shared_ptr<quasar::LmEvaluator>* _evaluator;
	BOOL _roundingEnabled;

}

@property (assign,nonatomic) BOOL roundingEnabled;              //@synthesize roundingEnabled=_roundingEnabled - In the implementation block
+(void)initialize;
-(BOOL)roundingEnabled;
-(void)setRoundingEnabled:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 root:(id)arg2 recognizerConfiguration:(id)arg3 ;
-(BOOL)runEvaluationWithData:(id)arg1 handle:(id)arg2 result:(id*)arg3 bestWeight:(float*)arg4 ;
-(id)initWithConfiguration:(id)arg1 recognizerConfiguration:(id)arg2 ;
-(BOOL)runEvaluationWithData:(id)arg1 handle:(id)arg2 result:(id*)arg3 ;
-(BOOL)runEvaluationWithData:(id)arg1 handle:(id)arg2 shouldStop:(/*^block*/id)arg3 result:(id*)arg4 bestWeight:(float*)arg5 ;
@end

