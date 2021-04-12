/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoding.framework/IMTranscoding
*/

#import <IMTranscoding/IMTranscoding-Structs.h>
#import <IMTranscoding/IMGifFileWriter.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface IMTranscodeController : NSObject <IMGifFileWriter> {

	NSObject*<OS_xpc_object> _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_disconnected;
-(BOOL)_connect;
-(void)generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(IMPreviewConstraints)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)copyGifFileFromSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
-(void)_validateFileTransfer:(id)arg1 utiType:(id)arg2 retries:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_validateTextRenderingForMessage:(id)arg1 retries:(int)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 fallBack:(BOOL)arg9 retries:(int)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)_transcodeFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 retries:(unsigned long long)arg4 fallBack:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(IMPreviewConstraints)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)copyGifFileFromSourcePath:(id)arg1 toDestinationPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)validateTextRenderingForMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)transcodeFallbackFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)transcodeFallbackFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)transcodeLocalTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)sizePreview:(id)arg1 constraints:(IMPreviewConstraints)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

