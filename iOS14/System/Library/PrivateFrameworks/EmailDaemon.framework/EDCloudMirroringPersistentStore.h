/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSPersistentContainer, EDTaskScheduler, NSManagedObjectContext, NSString;

@interface EDCloudMirroringPersistentStore : NSObject <EFLoggable> {

	NSPersistentContainer* _persistentContainer;
	EDTaskScheduler* _importScheduler;
	EDTaskScheduler* _exportScheduler;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,readonly) NSPersistentContainer * persistentContainer;                //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,retain) EDTaskScheduler * importScheduler;                            //@synthesize importScheduler=_importScheduler - In the implementation block
@property (nonatomic,retain) EDTaskScheduler * exportScheduler;                            //@synthesize exportScheduler=_exportScheduler - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(NSPersistentContainer *)persistentContainer;
-(NSManagedObjectContext *)managedObjectContext;
-(/*^block*/id)_wrapCompletion:(/*^block*/id)arg1 forRequestKind:(int)arg2 ;
-(id)init;
-(void)requestExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)_executeRequestWithKind:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_requestWithKind:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_schedulerForKind:(int)arg1 ;
-(void)setImportScheduler:(EDTaskScheduler *)arg1 ;
-(EDTaskScheduler *)exportScheduler;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)setExportScheduler:(EDTaskScheduler *)arg1 ;
-(void)requestImportWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setupCoreDataStack;
-(EDTaskScheduler *)importScheduler;
@end

