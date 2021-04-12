/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLBackgroundJobWorkerProtocol <NSObject>
@optional
-(BOOL)isInterruptible;
-(void)stopWorkingOnManagedObjectID:(id)arg1;

@required
+(id)workerWithLibrary:(id)arg1;
-(BOOL)hasPendingJobs;
-(id)managedObjectIDsNeedingProcessing;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2;

@end

