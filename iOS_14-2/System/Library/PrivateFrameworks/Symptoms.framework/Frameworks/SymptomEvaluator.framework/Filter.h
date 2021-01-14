/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@interface Filter : NSObject {

	unsigned _symptomId;
	long long _subsystemId;
	long long _queueLenAlert;
	long long _queueLenDrop;
	long long _queueTimeLimit;

}

@property (assign,nonatomic) long long subsystemId;                 //@synthesize subsystemId=_subsystemId - In the implementation block
@property (assign,nonatomic) unsigned symptomId;                    //@synthesize symptomId=_symptomId - In the implementation block
@property (assign,nonatomic) long long queueLenAlert;               //@synthesize queueLenAlert=_queueLenAlert - In the implementation block
@property (assign,nonatomic) long long queueLenDrop;                //@synthesize queueLenDrop=_queueLenDrop - In the implementation block
@property (assign,nonatomic) long long queueTimeLimit;              //@synthesize queueTimeLimit=_queueTimeLimit - In the implementation block
+(id)initForSymptom:(unsigned)arg1 withParams:(id)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(long long)subsystemId;
-(unsigned)symptomId;
-(long long)queueLenAlert;
-(long long)queueLenDrop;
-(long long)queueTimeLimit;
-(void)setSubsystemId:(long long)arg1 ;
-(void)setSymptomId:(unsigned)arg1 ;
-(void)setQueueLenAlert:(long long)arg1 ;
-(void)setQueueLenDrop:(long long)arg1 ;
-(void)setQueueTimeLimit:(long long)arg1 ;
@end

