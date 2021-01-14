/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPMaintenance.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, _DPCoreDataStorage;

@interface _DPStorage : NSObject <_DPMaintenance> {

	BOOL _readOnly;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _converterFromEntity;
	NSDictionary* _converterFromClass;
	_DPCoreDataStorage* _coredataStorage;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                                     //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,readonly) NSDictionary * converterFromEntity;                //@synthesize converterFromEntity=_converterFromEntity - In the implementation block
@property (nonatomic,readonly) NSDictionary * converterFromClass;                 //@synthesize converterFromClass=_converterFromClass - In the implementation block
@property (nonatomic,readonly) _DPCoreDataStorage * coredataStorage;              //@synthesize coredataStorage=_coredataStorage - In the implementation block
+(id)storageWithDirectory:(id)arg1 readOnly:(BOOL)arg2 ;
+(id)errorStringFor:(long long)arg1 ;
+(id)createFetchRequestFor:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 fetchLimit:(unsigned long long)arg4 fetchOffset:(unsigned long long)arg5 ;
+(id)shuffleOrderOfRecords:(id)arg1 count:(unsigned long long)arg2 ;
+(id)entitiesRequiringMaintenance;
-(void)flush;
-(id)init;
-(BOOL)readOnly;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDirectory:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)dealloc;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(_DPCoreDataStorage *)coredataStorage;
-(void)fetchRecordsFor:(id)arg1 predicate:(id)arg2 fetchLimit:(unsigned long long)arg3 fetchOffset:(unsigned long long)arg4 randomizeOrder:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(NSDictionary *)converterFromEntity;
-(void)saveRecords:(id)arg1 andFlush:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)handleEmptyArrayError:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)removeBadObjects:(id)arg1 ;
-(NSDictionary *)converterFromClass;
-(void)fetchRecordCountForEntity:(id)arg1 predicate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchKeynamesFor:(id)arg1 predicate:(id)arg2 fetchLimit:(unsigned long long)arg3 fetchOffset:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)fetchRecordsFor:(id)arg1 predicate:(id)arg2 fetchLimit:(unsigned long long)arg3 fetchOffset:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)saveRecords:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateRecords:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteRecords:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteAllRecordsByKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)deleteStorageWithObliterationOption:(BOOL)arg1 ;
-(void)scheduleStorageCullingWithName:(id)arg1 database:(id)arg2 ;
@end
