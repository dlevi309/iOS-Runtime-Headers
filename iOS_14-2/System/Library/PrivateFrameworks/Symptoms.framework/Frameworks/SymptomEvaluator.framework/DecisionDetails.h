/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithReason:(const char*)arg1 code:(unsigned long long)arg2 evaluations:(id)arg3 ;
-(NSDate *)timestamp;
-(void)setAdditionalInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)evaluations;
-(id)description;
-(unsigned long long)reasonCode;
-(char*)reason;
-(void)setEvaluations:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)additionalInfo;
-(void)setReasonCode:(unsigned long long)arg1 ;
-(void)setReason:(char*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)dealloc;
@end

