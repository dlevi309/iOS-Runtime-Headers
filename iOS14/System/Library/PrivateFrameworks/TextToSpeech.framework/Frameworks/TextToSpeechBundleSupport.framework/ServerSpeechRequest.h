/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/


#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
@class TTSSpeechServerInstance, TTSSpeechRequest, NSArray, TTSVoiceResourceAsset;

@interface ServerSpeechRequest : NSObject {

	TTSSpeechServerInstance* clientServer;
	TTSSpeechRequest* clientRequest;
	CFStringRef text;
	CFAttributedStringRef attributedText;
	CFURLRef outputPathURL;
	char* voiceName;
	long long footprint;
	long long voiceType;
	long long gender;
	CFStringRef languageCode;
	unsigned char notifyMarkStart;
	unsigned char maintainInput;
	unsigned char supportsAccurateWordCallbacks;
	float rate;
	float pitch;
	float volume;
	unsigned char useSharedSession;
	unsigned audioSessionID;
	unsigned audioQueueFlags;
	NSArray* channels;
	TTSVoiceResourceAsset* voiceResource;
	NSArray* rulesetRangeAdjustments;
	/*^block*/id audioBufferCallback;
	unsigned char synthesizeSilently;

}
-(void)dealloc;
@end

