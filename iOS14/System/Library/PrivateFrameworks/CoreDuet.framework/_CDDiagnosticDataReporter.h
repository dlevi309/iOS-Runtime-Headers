/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _CDDiagnosticDataReporter : NSObject
+(void)pushValue:(double)arg1 forDistributionKey:(id)arg2 ;
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)clearDistributionKey:(id)arg1 ;
+(void)clearScalarKey:(id)arg1 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 limitingSigDigs:(unsigned long long)arg3 ;
+(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
@end

