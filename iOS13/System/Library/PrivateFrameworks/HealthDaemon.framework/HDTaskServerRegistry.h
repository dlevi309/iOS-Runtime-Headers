/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableDictionary, NSMapTable, NSMutableSet, HDDaemon;

@interface HDTaskServerRegistry : NSObject {

	NSMutableDictionary* _taskServerClassesByTaskIdentifier;
	NSMapTable* _taskServersByUUID;
	NSMutableSet* _loadedPluginURLs;
	os_unfair_lock_s _lock;
	HDDaemon* _daemon;

}

@property (nonatomic,__weak,readonly) HDDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
-(HDDaemon *)daemon;
-(id)initWithDaemon:(id)arg1 ;
-(void)didCreateTaskServer:(id)arg1 ;
-(BOOL)registerTaskServerClassesWithProvider:(id)arg1 error:(id*)arg2 ;
-(id)createTaskServerEndpointForIdentifier:(id)arg1 taskUUID:(id)arg2 configuration:(id)arg3 client:(id)arg4 connectionQueue:(id)arg5 delegate:(id)arg6 error:(id*)arg7 ;
-(BOOL)registerTaskServerClasses:(id)arg1 error:(id*)arg2 ;
-(BOOL)_lock_registerTaskServerClass:(Class)arg1 error:(id*)arg2 ;
-(BOOL)_lock_loadTaskServersFromPluginAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerTaskServerClass:(Class)arg1 error:(id*)arg2 ;
-(BOOL)loadTaskServersFromPluginAtURL:(id)arg1 error:(id*)arg2 ;
-(id)taskServerForTaskUUID:(id)arg1 ;
@end

