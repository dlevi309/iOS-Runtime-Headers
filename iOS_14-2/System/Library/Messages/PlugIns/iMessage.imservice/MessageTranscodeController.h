/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@interface MessageTranscodeController : NSObject
+(id)sharedInstance;
-(void)generateSnapshotForMessageGUID:(id)arg1 payloadData:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 representations:(long long)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)transcodeFallbackFileTransferContents:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 representations:(long long)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)transcodePayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

