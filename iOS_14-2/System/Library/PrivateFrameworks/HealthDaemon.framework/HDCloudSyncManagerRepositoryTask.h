/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncManagerTask.h>

@class HDCloudSyncManager, HDCloudSyncContext, NSArray;

@interface HDCloudSyncManagerRepositoryTask : HDCloudSyncManagerTask {

	BOOL _runWhenSyncProhibited;
	HDCloudSyncManager* _manager;
	HDCloudSyncContext* _context;
	NSArray* _repositories;

}

@property (assign,nonatomic,__weak) HDCloudSyncManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy) HDCloudSyncContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * repositories;                             //@synthesize repositories=_repositories - In the implementation block
@property (assign) BOOL runWhenSyncProhibited;                                 //@synthesize runWhenSyncProhibited=_runWhenSyncProhibited - In the implementation block
-(void)setManager:(HDCloudSyncManager *)arg1 ;
-(HDCloudSyncContext *)context;
-(void)main;
-(HDCloudSyncManager *)manager;
-(void)setContext:(HDCloudSyncContext *)arg1 ;
-(id)initWithManager:(id)arg1 context:(id)arg2 ;
-(void)mainWithRepositories:(id)arg1 error:(id)arg2 ;
-(void)setRunWhenSyncProhibited:(BOOL)arg1 ;
-(BOOL)runWhenSyncProhibited;
-(NSArray *)repositories;
-(void)setRepositories:(NSArray *)arg1 ;
@end

