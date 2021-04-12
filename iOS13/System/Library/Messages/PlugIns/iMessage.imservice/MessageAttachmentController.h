/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class NSMutableDictionary, NSMutableSet;

@interface MessageAttachmentController : NSObject {

	NSMutableDictionary* _peerCompletionBlocks;
	NSMutableSet* _pendingRemoteFileRequests;
	NSMutableDictionary* _localPayloadDataRequestGUIDToCompletionBlockMap;
	NSMutableDictionary* _eagerUploadStatuses;

}

@property (nonatomic,retain) NSMutableSet * pendingRemoteFileRequests;                                           //@synthesize pendingRemoteFileRequests=_pendingRemoteFileRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localPayloadDataRequestGUIDToCompletionBlockMap;              //@synthesize localPayloadDataRequestGUIDToCompletionBlockMap=_localPayloadDataRequestGUIDToCompletionBlockMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eagerUploadStatuses;                                          //@synthesize eagerUploadStatuses=_eagerUploadStatuses - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendLowResolutionOnly; 
+(id)sharedInstance;
+(id)_combinedTransferUserInfoForAttachmentSendContexts:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)eagerUploadCancel:(id)arg1 ;
-(void)eagerUploadTransfer:(id)arg1 ;
-(void)downloadPayloadDataForMessageGUID:(id)arg1 payLoadDictionary:(id)arg2 topic:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)retrieveAttachmentsForMessage:(id)arg1 inlineAttachments:(id)arg2 displayID:(id)arg3 topic:(id)arg4 comingFromStorage:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)remoteFileResponse:(id)arg1 ;
-(void)remotefileRequest:(id)arg1 attempts:(long long)arg2 shouldRetry:(BOOL)arg3 ;
-(void)sendPayloadData:(id)arg1 messageGUID:(id)arg2 fromID:(id)arg3 recipients:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)acceptFileTransfer:(id)arg1 ;
-(void)retrieveHighResolutionAttachmentForMessage:(id)arg1 fileTransferGUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handlePayloadDataRequest:(id)arg1 attempts:(unsigned long long)arg2 ;
-(void)handlePayloadDataResponse:(id)arg1 ;
-(void)sendAttachmentsForMessage:(id)arg1 canSendInline:(BOOL)arg2 displayIDs:(id)arg3 additionalContext:(id)arg4 mode:(unsigned long long)arg5 fromID:(id)arg6 recipients:(id)arg7 completionBlock:(/*^block*/id)arg8 uploadFailureBlock:(/*^block*/id)arg9 ;
-(void)sendFallbackAttachmentsForMessage:(id)arg1 displayIDs:(id)arg2 additionalContext:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(unsigned long long)_largeFileSizeFor:(id)arg1 allowedLargerRepresentation:(BOOL*)arg2 ;
-(void)_fileTransferSizeForAuxVideoFromServerBag:(unsigned long long*)arg1 smallSize:(unsigned long long*)arg2 serverBag:(id)arg3 ;
-(unsigned long long)_maxAllowedAuxVideoSize;
-(void)_fetchStandardSizeLimit:(unsigned long long*)arg1 highQualitySizeLimit:(unsigned long long*)arg2 forTransfer:(id)arg3 ;
-(unsigned long long)_smallerImageFileSize;
-(BOOL)shouldSendLowResolutionOnly;
-(BOOL)_previewAttachmentEnabledForStickers;
-(id)_transferInfoFileForKey:(id)arg1 ;
-(id)_fetchSizeLimitsForTransfer:(id)arg1 mode:(unsigned long long)arg2 ;
-(id)eagerUploadKeyForURL:(id)arg1 transcodeDictionary:(id)arg2 ;
-(id)eagerUploadStatusForKey:(id)arg1 ;
-(void)_sendURL:(id)arg1 urlToRemove:(id)arg2 topic:(id)arg3 sessionInfo:(id)arg4 messageGUID:(id)arg5 fileTransferGUID:(id)arg6 attachmentSendContexts:(id)arg7 failIfError:(BOOL)arg8 sendStatus:(id)arg9 attachmentStatus:(id)arg10 group:(id)arg11 ;
-(void)_transcodeURL:(id)arg1 transfer:(id)arg2 sizes:(id)arg3 sendStatus:(id)arg4 urlGroup:(id)arg5 didTranscode:(/*^block*/id)arg6 handleURL:(/*^block*/id)arg7 ;
-(void)sendAttachmentsForMessage:(id)arg1 canSendInline:(BOOL)arg2 displayIDs:(id)arg3 additionalContext:(id)arg4 mode:(unsigned long long)arg5 sessionInfo:(id)arg6 topic:(id)arg7 completionBlock:(/*^block*/id)arg8 uploadFailureBlock:(/*^block*/id)arg9 ;
-(void)sessionInfoForBusinessReceipients:(id)arg1 fromID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_fileHash:(id)arg1 ;
-(id)_transferInfoForKey:(id)arg1 ;
-(double)_stickerUploadTTL;
-(void)_setTransferInfo:(id)arg1 key:(id)arg2 ;
-(void)_deleteTransferInfoForKey:(id)arg1 ;
-(void)handleTranscodeCompletionBlockForMessage:(id)arg1 displayIDs:(id)arg2 additionalContext:(id)arg3 attemptedTranscode:(BOOL)arg4 transcodedTransferGUIDs:(id)arg5 containsAutoLoopVideo:(BOOL)arg6 outputURLs:(id)arg7 text:(id)arg8 success:(BOOL)arg9 error:(id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(BOOL)_shouldAutoDownloadUTIType:(id)arg1 fileSize:(unsigned long long)arg2 ;
-(void)retrieveLocalFileTransfer:(id)arg1 attachmentIndex:(unsigned long long)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 requestedSize:(id)arg8 fileSize:(unsigned long long)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(BOOL)_shouldDisableFasterDownload:(id)arg1 message:(id)arg2 ;
-(NSMutableSet *)pendingRemoteFileRequests;
-(void)setPendingRemoteFileRequests:(NSMutableSet *)arg1 ;
-(void)_sendAttachmentToPeerDevice:(unsigned long long)arg1 fileData:(id)arg2 fileTransferGUID:(id)arg3 messageGuid:(id)arg4 newFilename:(id)arg5 useLocalPeersFileAPI:(BOOL)arg6 error:(long long)arg7 ;
-(id)_createPayloadRequestDictionaryForMessageGUID:(id)arg1 requestKey:(id)arg2 ;
-(id)_createPayloadResponseDictionaryWithDictionary:(id)arg1 payloadData:(id)arg2 attachments:(id)arg3 ;
-(unsigned long long)_maxCompressedPayloadDataLength;
-(void)sendPayloadData:(id)arg1 messageGUID:(id)arg2 sessionInfo:(id)arg3 topic:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)_shouldUploadPayloadDataOverMMCS:(id)arg1 ;
-(void)fetchPayloadDataFromCompanionForGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)maxTransferFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(BOOL)_shouldAutoAccept:(id)arg1 transfer:(id)arg2 shouldDownloadFromPeer:(BOOL)arg3 ;
-(NSMutableDictionary *)localPayloadDataRequestGUIDToCompletionBlockMap;
-(void)setLocalPayloadDataRequestGUIDToCompletionBlockMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)eagerUploadStatuses;
-(void)setEagerUploadStatuses:(NSMutableDictionary *)arg1 ;
@end

