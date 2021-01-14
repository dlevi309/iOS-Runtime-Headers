/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPDiagnosticDataReporter : NSObject
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)clearScalarKey:(id)arg1 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(id)blacklistFileCreationKey;
+(id)blacklistFileRemovalKey;
+(id)submittedRecordRemovalKey;
+(id)staleRecordRemovalKey;
+(id)staleReportFileRemovalKey;
+(id)IOTrackingPrefix;
+(void)addValue:(long long)arg1 forDPKey:(id)arg2 scalarKeyPrefix:(id)arg3 ;
+(id)budgetUpdateKey;
+(id)diagnosticReportKeyFor:(id)arg1 scalerKeyPrefix:(id)arg2 ;
+(void)setValue:(long long)arg1 forDPKey:(id)arg2 scalarKeyPrefix:(id)arg3 ;
+(void)clearDPKey:(id)arg1 scalarKeyPrefix:(id)arg2 ;
+(id)daReportSubmissionKey;
+(id)parsecReportSubmissionKey;
@end

