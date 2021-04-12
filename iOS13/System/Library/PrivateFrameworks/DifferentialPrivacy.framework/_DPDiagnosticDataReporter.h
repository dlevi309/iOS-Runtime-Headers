/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPDiagnosticDataReporter : NSObject
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)clearScalarKey:(id)arg1 ;
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

