/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


@protocol OS_dispatch_queue;
@class NSObject, NSLocale, SFSpeechSynthesisVoice;

@interface SFSpeechSynthesizer : NSObject {

	NSObject*<OS_dispatch_queue> _serverTaskQueue;
	NSObject*<OS_dispatch_queue> _deviceTaskQueue;
	NSObject*<OS_dispatch_queue> _cacheTaskQueue;
	BOOL _isVoiceAssetDownloaded;
	NSLocale* _locale;
	SFSpeechSynthesisVoice* _voice;

}

@property (nonatomic,copy,readonly) NSLocale * locale;                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) SFSpeechSynthesisVoice * voice;              //@synthesize voice=_voice - In the implementation block
@property (nonatomic,readonly) BOOL isVoiceAssetDownloaded;                 //@synthesize isVoiceAssetDownloaded=_isVoiceAssetDownloaded - In the implementation block
+(void)initialize;
+(id)supportedLocales;
+(id)supportedVoicesByLocale:(id)arg1 ;
+(id)getVoiceByName:(id)arg1 ;
-(SFSpeechSynthesisVoice *)voice;
-(NSLocale *)locale;
-(id)init;
-(void)prewarm:(long long)arg1 ;
-(void)dealloc;
-(id)initWithVoice:(id)arg1 ;
-(id)startTaskWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)startTaskWithRequest:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)startTaskWithRequest:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isVoiceAssetDownloaded;
@end

