/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableDictionary, NSMapTable, NSMutableSet, HDDaemon;

@interface HDTaskServerRegistry : NSObject {

	NSMutableDictionary* _taskServerClassesByTaskIdentifier;
	NSMapTable* _taskServersByUUID;
	NSMutableDictionary* _taskServerObserversByUUID;
	NSMutableSet* _loadedPluginURLs;
	os_unfair_lock_s _lock;
	HDDaemon* _daemon;

}

@property (nonatomic,__weak,readonly) HDDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
-(HDDaemon *)daemon;
-(id)taskServerForTaskUUID:(id)arg1 ;
-(id)createTaskServerEndpointForIdentifier:(id)arg1 taskUUID:(id)arg2 configuration:(id)arg3 client:(id)arg4 connectionQueue:(id)arg5 error:(id*)arg6 ;
-(void)didCreateTaskServer:(id)arg1 ;
-(BOOL)registerTaskServerClass:(Class)arg1 error:(id*)arg2 ;
-(BOOL)registerTaskServerClassesWithProvider:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerTaskServerClasses:(id)arg1 error:(id*)arg2 ;
-(void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(BOOL)_lock_registerTaskServerClass:(Class)arg1 error:(id*)arg2 ;
-(BOOL)_lock_loadTaskServersFromPluginAtURL:(id)arg1 error:(id*)arg2 ;
-(void)taskServerDidInvalidate:(id)arg1 ;
-(BOOL)loadTaskServersFromPluginAtURL:(id)arg1 error:(id*)arg2 ;
-(void)removeTaskServerObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2 queue:(id)arg3 ;
@end

