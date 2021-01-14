/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/_DPReportGenerator.h>

@interface _DPPrioReporter : _DPReportGenerator
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(id)reportPrioKeys:(id)arg1 storage:(id)arg2 ;
-(id)keysWithDefaultValues;
-(id)defaultRecordsWithValues:(id)arg1 key:(id)arg2 properties:(id)arg3 ;
-(id)reportToPrioRecords:(id)arg1 forKey:(id)arg2 parameters:(id)arg3 storage:(id)arg4 ;
-(void)deleteRecordsForKey:(id)arg1 storage:(id)arg2 ;
-(id)jsonReportFromObject:(id)arg1 ;
-(id)reportPrioRecords:(id)arg1 ;
@end

