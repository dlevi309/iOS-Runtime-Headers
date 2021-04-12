/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

