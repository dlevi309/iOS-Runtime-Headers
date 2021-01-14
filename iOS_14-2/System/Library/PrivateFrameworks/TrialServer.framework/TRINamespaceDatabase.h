/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


#import <TrialServer/TrialServer-Structs.h>
@class TRIDatabase;

@interface TRINamespaceDatabase : NSObject {

	TRIDatabase* _db;

}
-(id)init;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)enumerateAppContainerIdsForContainer:(int)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)hasUnfetchedNamespaceForTeamId:(id)arg1 ;
-(id)dynamicNamespaceRecordWithNamespaceName:(id)arg1 ;
-(BOOL)enumerateDynamicNamespaceRecordsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)removeDynamicNamespaceRecordWithNamespaceName:(id)arg1 ;
-(unsigned long long)setFetched:(BOOL)arg1 forDynamicNamespaceName:(id)arg2 ;
-(BOOL)addOrUpdateDynamicNamespaceWithName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainer:(int)arg7 ;
-(BOOL)_enumerateDynamicNamespaceRecordsWithWhereClause:(id)arg1 bind:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)enumerateDynamicNamespaceRecordsForContainer:(int)arg1 teamId:(id)arg2 block:(/*^block*/id)arg3 ;
@end

