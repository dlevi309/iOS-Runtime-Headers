/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@interface SXDataTableConditionEngine : NSObject {

	unsigned long long _conditionCount;
	unsigned long long _validConditionCount;

}

@property (assign,nonatomic) unsigned long long conditionCount;                   //@synthesize conditionCount=_conditionCount - In the implementation block
@property (assign,nonatomic) unsigned long long validConditionCount;              //@synthesize validConditionCount=_validConditionCount - In the implementation block
+(id)engine;
-(id)description;
-(BOOL)isValid;
-(unsigned long long)conditionCount;
-(void)setConditionCount:(unsigned long long)arg1 ;
-(unsigned long long)isEvenInteger:(long long)arg1 ;
-(unsigned long long)validConditionCount;
-(void)setValidConditionCount:(unsigned long long)arg1 ;
-(unsigned long long)isOddInteger:(long long)arg1 ;
-(void)addConditionForEvenBoolean:(unsigned long long)arg1 withInteger:(unsigned long long)arg2 ;
-(void)addConditionForOddBoolean:(unsigned long long)arg1 withInteger:(unsigned long long)arg2 ;
-(void)addConditionForEqualInteger:(unsigned long long)arg1 withInteger:(unsigned long long)arg2 ;
-(void)addConditionForEqualString:(id)arg1 withString:(id)arg2 ;
@end

