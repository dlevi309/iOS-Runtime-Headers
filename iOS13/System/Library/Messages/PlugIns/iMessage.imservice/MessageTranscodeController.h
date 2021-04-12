/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@interface MessageTranscodeController : NSObject
+(id)sharedInstance;
-(void)generateSnapshotForMessageGUID:(id)arg1 payloadData:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 sizes:(id)arg4 representations:(long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)transcodeFallbackFileTransferContents:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 sizes:(id)arg4 representations:(long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)transcodePayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

