/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _CDDiagnosticDataReporter : NSObject
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)clearScalarKey:(id)arg1 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 limitingSigDigs:(unsigned long long)arg3 ;
+(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
+(void)pushValue:(double)arg1 forDistributionKey:(id)arg2 ;
+(void)clearDistributionKey:(id)arg1 ;
@end

