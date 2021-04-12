/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@class NSMutableDictionary;

@interface _DECAggregateLogger : NSObject {

	NSMutableDictionary* _batchScalars;

}
+(void)logKey:(id)arg1 replaceScalarValueWith:(long long)arg2 ;
+(void)logIncrementKey:(id)arg1 ;
+(double)logKey:(id)arg1 blockTiming:(/*^block*/id)arg2 ;
+(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
+(void)logKey:(id)arg1 distValue:(double)arg2 ;
+(void)logWithCallback:(/*^block*/id)arg1 ;
-(void)flush;
-(void)logIncrementKey:(id)arg1 ;
-(id)initCallbackInstance;
-(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
-(void)logKey:(id)arg1 distValue:(double)arg2 ;
@end

