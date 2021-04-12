/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
*/


@protocol OS_dispatch_queue;
#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
@class NSArray, NSObject, IMTranscoder_TextRendering;

@interface IMTranscodingAgentController : NSObject {

	NSArray* _transcoders;
	NSArray* _fallbackTranscoders;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _textValidationQueue;
	NSObject*<OS_dispatch_queue> _previewGenerationQueue;
	IMTranscoder_TextRendering* _textTranscoder;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)validateTextRenderingForMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_registerTranscoders;
-(id)_findTranscoderForUTI:(id)arg1 ;
-(BOOL)shouldProcessFileTransfer:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 target:(long long)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 ;
-(void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 fallback:(BOOL)arg9 representations:(long long)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 fallBack:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(IMPreviewConstraints)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)sizePreview:(id)arg1 constraints:(IMPreviewConstraints)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)decodeiMessageAppPayload:(id)arg1 bundleID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end
