/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioSessionProviding <NSObject>
@required
-(BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(id)arg3 error:(id*)arg4;
-(void)setDuckOthersOption:(BOOL)arg1;
-(void)enableSmartRoutingConsideration:(BOOL)arg1;
-(BOOL)duckOthersOption;
-(BOOL)prewarmAudioSessionWithError:(id*)arg1;
-(BOOL)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2;
-(void)enableMiniDucking:(BOOL)arg1;
-(void)setAudioSessionDelegate:(id)arg1;

@end

