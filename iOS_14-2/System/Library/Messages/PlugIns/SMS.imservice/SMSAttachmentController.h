/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
*/


@class NSMutableDictionary, NSMutableSet;

@interface SMSAttachmentController : NSObject {

	NSMutableDictionary* _connectionMap;
	NSMutableDictionary* _fileTransferMap;
	NSMutableDictionary* _contextMap;
	NSMutableDictionary* _blockMap;
	NSMutableDictionary* _peerCompletionBlocks;
	NSMutableSet* _pendingRemoteFileRequests;

}

@property (nonatomic,retain) NSMutableSet * pendingRemoteFileRequests;              //@synthesize pendingRemoteFileRequests=_pendingRemoteFileRequests - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)retrieveAttachmentsForMessage:(id)arg1 displayID:(id)arg2 token:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)remoteFileResponse:(id)arg1 ;
-(void)remotefileRequest:(id)arg1 attempts:(long long)arg2 ;
-(void)processAttachmentsForMessage:(id)arg1 generateTextParts:(BOOL)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)processAttachmentsForPeerRelayForMessage:(id)arg1 lastAddressHandle:(id)arg2 lastAddressedSIMID:(id)arg3 completionBlock:(/*^block*/id)arg4 uploadFailureBlock:(/*^block*/id)arg5 ;
-(void)_sizeLimitsForTransfer:(id)arg1 bigSize:(unsigned long long*)arg2 smallSize:(unsigned long long*)arg3 ;
-(BOOL)shouldSendLowResolutionOnly;
-(NSMutableSet *)pendingRemoteFileRequests;
-(void)setPendingRemoteFileRequests:(NSMutableSet *)arg1 ;
-(void)maxTransferFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(void)retrieveLocalFileTransfer:(id)arg1 attachmentIndex:(unsigned long long)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 requestedSize:(id)arg8 fileSize:(unsigned long long)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
@end

