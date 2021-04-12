/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseDatabase.h>

@interface TRIExperimentDatabase : TRIBaseDatabase
-(id)initWithPath:(id)arg1 ;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(unsigned*)arg1 ;
-(BOOL)setStatus:(long long)arg1 forExperimentId:(id)arg2 ;
-(BOOL)setTreatmentId:(id)arg1 forExperimentId:(id)arg2 ;
-(BOOL)setDurationForExperimentId:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 ;
-(id)allExperimentRecords;
-(BOOL)addExperimentWithId:(id)arg1 definitionPath:(id)arg2 ;
-(BOOL)updateExperiment:(id)arg1 ;
-(BOOL)setCompatibilityVersion:(unsigned)arg1 forNamespaceId:(unsigned)arg2 withExperimentId:(id)arg3 ;
-(id)recordWithExperimentId:(id)arg1 ;
-(BOOL)namespaceIdsWithExperimentStatus:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)treatmentPathsForExperimentId:(id)arg1 ;
-(BOOL)setNamespaceDescriptorDirectory:(id)arg1 experimentId:(id)arg2 ;
-(BOOL)namespacesAreAvailableForExperiment:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 namespaces:(id)arg4 ;
-(BOOL)setTreatmentPath:(id)arg1 withExperimentId:(id)arg2 namespaceId:(unsigned)arg3 ;
-(id)treatmentIdForExperimentId:(id)arg1 ;
-(BOOL)namespacesAreAvailableForExperiment:(id)arg1 namespaces:(id)arg2 ;
-(BOOL)experimentRecordsWithStatus:(long long)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)namespaceRecordsWithExperimentId:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)removeRecordWithExperimentId:(id)arg1 ;
-(BOOL)addNamespace:(unsigned)arg1 forExperimentId:(id)arg2 ;
-(BOOL)namespaceIdsInExperimentsWithStartTime:(double)arg1 endTime:(double)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)namespacesAreAvailableForExperiment:(id)arg1 startTimestamp:(double)arg2 endTimestamp:(double)arg3 namespaces:(id)arg4 ;
@end

