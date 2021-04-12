/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PXMemoriesSeenHelper : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)defaultHelper;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)clearAnyPendingNotificationsFromMemories:(id)arg1 inLibrary:(id)arg2 ;
-(void)clearAnyPendingStateFromMemories:(id)arg1 inLibrary:(id)arg2 ;
-(void)_clearPendingNotificationForMemory:(id)arg1 inLibrary:(id)arg2 ;
@end

