/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class Filter;

@interface FilterActions : NSObject {

	unsigned _triggerSymptomId;
	Filter* _initialFilter;
	long long _delayValue;
	Filter* _finalFilter;

}

@property (assign,nonatomic) unsigned triggerSymptomId;              //@synthesize triggerSymptomId=_triggerSymptomId - In the implementation block
@property (nonatomic,readonly) Filter * initialFilter;               //@synthesize initialFilter=_initialFilter - In the implementation block
@property (nonatomic,readonly) long long delayValue;                 //@synthesize delayValue=_delayValue - In the implementation block
@property (nonatomic,readonly) Filter * finalFilter;                 //@synthesize finalFilter=_finalFilter - In the implementation block
+(id)initForSymptom:(unsigned)arg1 trigger:(unsigned)arg2 triggering:(id)arg3 finally:(id)arg4 after:(id)arg5 ;
-(id)description;
-(void)initForSymptom:(unsigned)arg1 trigger:(unsigned)arg2 triggering:(id)arg3 finally:(id)arg4 after:(id)arg5 ;
-(unsigned)triggerSymptomId;
-(void)setTriggerSymptomId:(unsigned)arg1 ;
-(Filter *)initialFilter;
-(long long)delayValue;
-(Filter *)finalFilter;
@end

