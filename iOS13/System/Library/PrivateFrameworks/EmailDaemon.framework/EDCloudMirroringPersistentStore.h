/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentContainer *)persistentContainer;
-(void)_setupCoreDataStack;
-(void)_requestWithKind:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_schedulerForKind:(int)arg1 ;
-(void)_executeRequestWithKind:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(EDTaskScheduler *)importScheduler;
-(EDTaskScheduler *)exportScheduler;
-(/*^block*/id)_wrapCompletion:(/*^block*/id)arg1 forRequestKind:(int)arg2 ;
-(void)requestImportWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setImportScheduler:(EDTaskScheduler *)arg1 ;
-(void)setExportScheduler:(EDTaskScheduler *)arg1 ;
@end

