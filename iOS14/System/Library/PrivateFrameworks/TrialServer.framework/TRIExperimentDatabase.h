/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


#import <TrialServer/TrialServer-Structs.h>
@class TRIDatabase;

@interface TRIExperimentDatabase : NSObject {

	TRIDatabase* _db;

}
-(id)init;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(id)experimentRecordWithExperimentDeployment:(id)arg1 ;
-(BOOL)enumerateExperimentRecordsMatchingExperimentId:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)setStatus:(long long)arg1 forExperimentDeployment:(id)arg2 usingTransaction:(id)arg3 ;
-(BOOL)setTreatmentId:(id)arg1 forExperimentDeployment:(id)arg2 usingTransaction:(id)arg3 ;
-(BOOL)enumerateExperimentRecordsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)removeExperimentRecordWithExperimentDeployment:(id)arg1 ;
-(unsigned long long)addExperimentWithExperimentDeployment:(id)arg1 type:(int)arg2 status:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 namespaces:(id)arg6 ;
-(BOOL)namespacesAreAvailableForExperimentId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 namespaces:(id)arg4 ;
-(id)treatmentURLsForExperimentDeployment:(id)arg1 usingTransaction:(id)arg2 ;
-(BOOL)setTreatmentURL:(id)arg1 forExperimentDeployment:(id)arg2 namespaceName:(id)arg3 ;
-(BOOL)enumerateExperimentRecordsMatchingStatuses:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_enumerateExperimentRecordsMatchingWhereClause:(id)arg1 bind:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)enumerateNamespaceRecordsForExperimentDeployment:(id)arg1 usingTransaction:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)activeExperimentRecordWithTreatmentId:(id)arg1 ;
@end

