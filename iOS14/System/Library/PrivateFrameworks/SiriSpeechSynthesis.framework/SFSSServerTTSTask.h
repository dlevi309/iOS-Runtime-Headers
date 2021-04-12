/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/SFSpeechSynthesisTask.h>

@class SFSSOspreyTTSClient;

@interface SFSSServerTTSTask : SFSpeechSynthesisTask {

	SFSSOspreyTTSClient* _ospreyTTSClient;

}

@property (assign,nonatomic,__weak) SFSSOspreyTTSClient * ospreyTTSClient;              //@synthesize ospreyTTSClient=_ospreyTTSClient - In the implementation block
+(id)createOspreyRequestFromReqeust:(id)arg1 ;
+(AudioStreamBasicDescription)audioStreamBasicDescription:(id)arg1 ;
+(id)generateVoiceAssetFromVoiceMetaInfo:(id)arg1 ;
+(id)generateResourceAssetFromResourceMetaInfo:(id)arg1 ;
-(void)startTask:(/*^block*/id)arg1 ;
-(void)cancelTask;
-(id)initWithRequest:(id)arg1 ;
-(SFSSOspreyTTSClient *)ospreyTTSClient;
-(void)setOspreyTTSClient:(SFSSOspreyTTSClient *)arg1 ;
@end

