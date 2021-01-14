/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableSet, NSMutableDictionary;

@interface IMAutomationMessageSend : NSObject {

	NSMutableSet* _pendingSendGUIDs;
	NSMutableDictionary* _sentMessageInfo;

}

@property (nonatomic,retain) NSMutableSet * pendingSendGUIDs;                    //@synthesize pendingSendGUIDs=_pendingSendGUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sentMessageInfo;              //@synthesize sentMessageInfo=_sentMessageInfo - In the implementation block
-(id)init;
-(id)clearAttachmentsUploadedToCloudkit;
-(id)deleteAttachmentWithMessageGUID:(id)arg1 andFilePathIndex:(long long)arg2 ;
-(id)dictionaryFromGUID:(id)arg1 ;
-(id)fileSizeForMessageGUID:(id)arg1 withFilePathIndex:(long long)arg2 ;
-(id)loadHighResolutionFileForMessageGUID:(id)arg1 withFilePathIndex:(long long)arg2 ;
-(id)uploadAttachmentToCloudkitWithMessageGUID:(id)arg1 andFilePathIndex:(long long)arg2 ;
-(id)appendFilePathsWithGUIDs:(id)arg1 withText:(id)arg2 ;
-(id)sendMessage:(id)arg1 destinationID:(id)arg2 filePaths:(id)arg3 groupID:(id)arg4 bundleID:(id)arg5 attributionInfoName:(id)arg6 service:(id)arg7 timeOut:(double)arg8 error:(id*)arg9 ;
-(id)sendMessage:(id)arg1 destinationID:(id)arg2 filePaths:(id)arg3 isAudioMessage:(BOOL)arg4 groupID:(id)arg5 bundleID:(id)arg6 attributionInfoName:(id)arg7 service:(id)arg8 timeOut:(double)arg9 threadIdentifier:(id)arg10 error:(id*)arg11 ;
-(id)copyFilePathsToTmpLocation:(id)arg1 ;
-(id)createIMMessageToSendWithMessage:(id)arg1 filePaths:(id)arg2 bundleID:(id)arg3 attributionInfoName:(id)arg4 isAudioMessage:(BOOL)arg5 threadIdentifier:(id)arg6 ;
-(id)sendIMMessage:(id)arg1 chat:(id)arg2 timeOut:(double)arg3 resultDict:(id)arg4 error:(id*)arg5 ;
-(NSMutableSet *)pendingSendGUIDs;
-(id)sendMessage:(id)arg1 destinationID:(id)arg2 filePaths:(id)arg3 groupID:(id)arg4 service:(id)arg5 timeOut:(double)arg6 error:(id*)arg7 ;
-(id)sendMessage:(id)arg1 destinationID:(id)arg2 timeOut:(double)arg3 threadIdentifier:(id)arg4 error:(id*)arg5 ;
-(void)setPendingSendGUIDs:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)sentMessageInfo;
-(void)setSentMessageInfo:(NSMutableDictionary *)arg1 ;
-(void)deleteTmpFilePath:(id)arg1 ;
@end

