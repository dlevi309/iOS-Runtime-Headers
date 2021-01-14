/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMCoreAutomationNotifications : NSObject {

	long long _chatsWrittenCount;
	long long _messagesWrittenCount;
	long long _attachmentsWrittenCount;

}

@property (readonly) long long chatsWrittenCount;                    //@synthesize chatsWrittenCount=_chatsWrittenCount - In the implementation block
@property (readonly) long long messagesWrittenCount;                 //@synthesize messagesWrittenCount=_messagesWrittenCount - In the implementation block
@property (readonly) long long attachmentsWrittenCount;              //@synthesize attachmentsWrittenCount=_attachmentsWrittenCount - In the implementation block
+(id)sharedInstance;
-(void)clearSyncCounts;
-(id)init;
-(void)postCoreAutomationNotificationWithDictionary:(id)arg1 withVerboseLogging:(BOOL)arg2 ;
-(void)postCoreAutomationNotificationWithAction:(id)arg1 ;
-(void)addNewAttachmentsSyncedCount:(long long)arg1 ;
-(void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg1 chatsDidsync:(BOOL)arg2 messagesDidSync:(BOOL)arg3 attachmentsDidSync:(BOOL)arg4 ;
-(void)addNewChatsSyncedCount:(long long)arg1 ;
-(void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg1 withErrorString:(id)arg2 ;
-(void)postCoreAutomationNotificationFinishedTapToDownload:(id)arg1 downloadedFromCloudKitSuccessfully:(BOOL)arg2 ;
-(void)addNewMessagesSyncedCount:(long long)arg1 ;
-(long long)chatsWrittenCount;
-(long long)messagesWrittenCount;
-(long long)attachmentsWrittenCount;
@end

