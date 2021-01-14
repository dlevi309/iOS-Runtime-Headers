/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@interface EKStats : NSObject
+(BOOL)enabled;
+(void)clearScalar:(id)arg1 domain:(int)arg2 ;
+(void)setScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3 ;
+(void)addToScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3 ;
+(void)clearDistribution:(id)arg1 domain:(int)arg2 ;
+(void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 ;
+(void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 ;
+(void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned)arg4 ;
+(void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned)arg4 ;
-(void)commit;
-(id)initWithDomain:(int)arg1 significantDigits:(unsigned)arg2 ;
-(void)clearScalar:(id)arg1 ;
-(void)setScalar:(id)arg1 value:(long long)arg2 ;
-(void)addToScalar:(id)arg1 value:(long long)arg2 ;
-(void)clearDistribution:(id)arg1 ;
-(void)setDistribution:(id)arg1 value:(double)arg2 ;
-(void)pushToDistribution:(id)arg1 value:(double)arg2 ;
-(void)setDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned)arg3 ;
-(void)pushToDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned)arg3 ;
-(id)initWithDomain:(int)arg1 ;
@end

