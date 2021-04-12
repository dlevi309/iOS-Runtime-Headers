/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class NSMutableDictionary;

@interface EKStats : NSObject {

	int _domain;
	NSMutableDictionary* _scalarOperations;
	NSMutableDictionary* _distributionOperations;
	unsigned _significantDigits;

}
+(BOOL)enabled;
+(void)addToScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3 ;
+(unsigned long long)getCurrentTime;
+(void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 ;
+(void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 ;
+(void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned)arg4 ;
+(double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 sinceStartTime:(unsigned long long)arg3 significantDigits:(unsigned)arg4 ;
+(void)clearScalar:(id)arg1 domain:(int)arg2 ;
+(void)setScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3 ;
+(void)clearDistribution:(id)arg1 domain:(int)arg2 ;
+(void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned)arg4 ;
+(double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 sinceStartTime:(unsigned long long)arg3 ;
+(double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 timingBlock:(/*^block*/id)arg3 ;
+(double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 significantDigits:(unsigned)arg3 timingBlock:(/*^block*/id)arg4 ;
-(void)commit;
-(id)initWithDomain:(int)arg1 ;
-(id)initWithDomain:(int)arg1 significantDigits:(unsigned)arg2 ;
-(void)clearDistribution:(id)arg1 ;
-(void)pushToDistribution:(id)arg1 value:(double)arg2 ;
-(void)setDistribution:(id)arg1 value:(double)arg2 ;
-(void)clearScalar:(id)arg1 ;
-(void)setScalar:(id)arg1 value:(long long)arg2 ;
-(void)addToScalar:(id)arg1 value:(long long)arg2 ;
-(void)setDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned)arg3 ;
-(void)pushToDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned)arg3 ;
@end

