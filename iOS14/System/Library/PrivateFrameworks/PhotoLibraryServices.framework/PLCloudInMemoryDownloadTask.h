/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMapTable, NSString, CPLResourceTransferTask, NSArray;

@interface PLCloudInMemoryDownloadTask : NSObject {

	NSMapTable* _taskIDsToCompletionHandlers;
	BOOL _completed;
	NSString* _resourceID;
	CPLResourceTransferTask* _transferTask;

}

@property (nonatomic,copy,readonly) NSString * resourceID;                        //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,retain) CPLResourceTransferTask * transferTask;              //@synthesize transferTask=_transferTask - In the implementation block
@property (getter=isCompleted,nonatomic,readonly) BOOL completed;                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * taskIDs; 
-(NSArray *)taskIDs;
-(id)initWithResourceID:(id)arg1 taskID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addClientWithTaskID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelClientWithTaskID:(id)arg1 ;
-(CPLResourceTransferTask *)transferTask;
-(void)reportCompletionWithData:(id)arg1 error:(id)arg2 ;
-(NSString *)resourceID;
-(BOOL)isCompleted;
-(void)setTransferTask:(CPLResourceTransferTask *)arg1 ;
@end

