/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPRecordQueryPredicates : NSObject
+(void)initialize;
+(id)predicateForKey:(id)arg1 ;
+(id)predicateForRecordsWithVersionMismatch;
+(id)predicateForRecordsSubmitted;
+(id)predicateForAllRecords;
+(id)predicateForRecordsOlderThan:(id)arg1 ;
+(id)entityForKey:(id)arg1 ;
+(id)predicateForRecordsNotSubmittedForKeyBeginsWith:(id)arg1 ;
+(id)predicateForRecordsNotSubmittedForKey:(id)arg1 ;
+(id)predicateForKey:(id)arg1 beginsWith:(BOOL)arg2 submitted:(BOOL)arg3 matchReportVersion:(BOOL)arg4 ;
+(id)predicateForKey:(id)arg1 beginsWith:(BOOL)arg2 matchReportVersion:(BOOL)arg3 ;
+(id)predicateForRecordsNotSubmitted;
+(id)predicateForKeyBeginsWith:(id)arg1 ;
+(id)predicateForRecordsInDateRangeStart:(id)arg1 end:(id)arg2 ;
+(id)predicateForRecordsSubmittedForKey:(id)arg1 ;
+(id)predicateForRecordsMatchingKey:(id)arg1 ;
@end

