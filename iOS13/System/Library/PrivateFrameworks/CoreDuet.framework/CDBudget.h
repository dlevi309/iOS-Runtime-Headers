/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString;

@interface CDBudget : NSObject {

	NSString* _name;
	long long _type;
	unsigned long long _integerId;

}

@property (readonly) unsigned long long integerId;              //@synthesize integerId=_integerId - In the implementation block
@property (readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (readonly) long long type;                            //@synthesize type=_type - In the implementation block
-(NSString *)name;
-(long long)type;
-(unsigned long long)integerId;
-(id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)incrementByValue:(long long)arg1 error:(id*)arg2 ;
-(BOOL)decrementByValue:(long long)arg1 error:(id*)arg2 ;
-(BOOL)compareValueTo:(long long)arg1 swapOnMatchWithValue:(long long)arg2 error:(id*)arg3 ;
-(long long)creditsRemainingWithError:(id*)arg1 ;
-(BOOL)deleteWithError:(id*)arg1 ;
-(id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 error:(id*)arg4 ;
-(id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)forecastEffectiveOnDate:(id)arg1 error:(id*)arg2 ;
@end

