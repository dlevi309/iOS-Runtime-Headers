/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class NSMutableArray;

@interface _REMInProgressSaveRequestsContainer : NSObject {

	NSMutableArray* _inProgressSaveRequests;

}

@property (nonatomic,retain) NSMutableArray * inProgressSaveRequests;              //@synthesize inProgressSaveRequests=_inProgressSaveRequests - In the implementation block
-(id)init;
-(id)latestSaveInProgressAccount:(id)arg1 ;
-(id)latestSaveInProgressList:(id)arg1 ;
-(id)latestSaveInProgressReminder:(id)arg1 ;
-(id)latestSaveInProgressReminderForReminderChangeItem:(id)arg1 ;
-(void)saveRequestSaveDidStart:(id)arg1 ;
-(void)saveRequestSaveDidFinish:(id)arg1 ;
-(NSMutableArray *)inProgressSaveRequests;
-(id)_latestSaveInProgressAccountForObjectID:(id)arg1 saveRequest:(id)arg2 ;
-(id)_firstMatchInSaveRequests:(/*^block*/id)arg1 ;
-(id)_latestSaveInProgressListForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackParentList:(id)arg3 saveRequest:(id)arg4 ;
-(id)_latestSaveInProgressReminderForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackList:(id)arg3 fallbackParentList:(id)arg4 fallbackParentReminder:(id)arg5 saveRequest:(id)arg6 ;
-(void)setInProgressSaveRequests:(NSMutableArray *)arg1 ;
@end

