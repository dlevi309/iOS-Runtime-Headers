/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@class NSMutableDictionary;

@interface _DECAggregateLogger : NSObject {

	NSMutableDictionary* _batchScalars;

}
+(void)logIncrementKey:(id)arg1 ;
+(void)logKey:(id)arg1 distValue:(double)arg2 ;
+(double)logKey:(id)arg1 blockTiming:(/*^block*/id)arg2 ;
+(void)logWithCallback:(/*^block*/id)arg1 ;
+(void)logKey:(id)arg1 replaceScalarValueWith:(long long)arg2 ;
+(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
-(void)flush;
-(void)logIncrementKey:(id)arg1 ;
-(void)logKey:(id)arg1 distValue:(double)arg2 ;
-(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
-(id)initCallbackInstance;
@end

