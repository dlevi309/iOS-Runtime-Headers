/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
*/


@interface IMTranscoder : NSObject
+(id)supportedUTIs;
+(BOOL)shouldPreserveHDREncoding:(id)arg1 ;
+(BOOL)shouldUseHEIFEncoding:(id)arg1 sourceUTI:(id)arg2 ;
+(BOOL)supportsUTI:(id)arg1 ;
-(long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 ;
-(void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)transcodeProcessingRequired:(long long)arg1 ;
@end

