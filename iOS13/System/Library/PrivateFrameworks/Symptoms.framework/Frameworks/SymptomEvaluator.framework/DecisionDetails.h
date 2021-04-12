/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSDate, NSMutableArray, NSMutableDictionary;

@interface DecisionDetails : NSObject {

	NSDate* _timestamp;
	NSMutableArray* _evaluations;
	NSMutableDictionary* _additionalInfo;
	unsigned long long _reasonCode;
	char* _reason;

}

@property (nonatomic,retain) NSDate * timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * evaluations;                      //@synthesize evaluations=_evaluations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalInfo;              //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (assign,nonatomic) unsigned long long reasonCode;                     //@synthesize reasonCode=_reasonCode - In the implementation block
@property (assign,nonatomic) char* reason;                                      //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(id)description;
-(char*)reason;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setReason:(char*)arg1 ;
-(NSMutableDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSMutableDictionary *)arg1 ;
-(unsigned long long)reasonCode;
-(void)setReasonCode:(unsigned long long)arg1 ;
-(id)initWithReason:(const char*)arg1 code:(unsigned long long)arg2 evaluations:(id)arg3 ;
-(NSMutableArray *)evaluations;
-(void)setEvaluations:(NSMutableArray *)arg1 ;
@end

