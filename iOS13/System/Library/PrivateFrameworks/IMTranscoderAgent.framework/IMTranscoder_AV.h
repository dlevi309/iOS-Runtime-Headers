/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
*/

#import <IMTranscoderAgent/IMTranscoder.h>

@interface IMTranscoder_AV : IMTranscoder
+(id)supportedUTIs;
-(void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)_fileSizeForTransfer:(id)arg1 ;
-(BOOL)_isHEVCVideo:(id)arg1 ;
-(long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 ;
-(void)_transcodeVideoAsync:(id)arg1 target:(long long)arg2 maxBytes:(unsigned long long)arg3 removeAlpha:(BOOL)arg4 userInfo:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(/*^block*/id)arg9 ;
@end

