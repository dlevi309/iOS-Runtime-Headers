/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@class NSString, NSArray;

@interface SFSSCacheItem : NSObject {

	NSString* _key;
	NSString* _text;
	NSString* _voiceKey;
	NSString* _resourceKey;
	NSArray* _rawAudio;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * voiceKey;                           //@synthesize voiceKey=_voiceKey - In the implementation block
@property (nonatomic,readonly) NSString * resourceKey;                        //@synthesize resourceKey=_resourceKey - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (nonatomic,readonly) NSArray * rawAudio;                            //@synthesize rawAudio=_rawAudio - In the implementation block
+(id)generateCacheKey:(id)arg1 text:(id)arg2 ;
-(AudioStreamBasicDescription)asbd;
-(NSString *)voiceKey;
-(NSString *)text;
-(NSString *)key;
-(id)initWithText:(id)arg1 voiceName:(id)arg2 voiceKey:(id)arg3 resourceKey:(id)arg4 asbd:(AudioStreamBasicDescription)arg5 rawAudio:(id)arg6 ;
-(NSString *)resourceKey;
-(NSArray *)rawAudio;
@end

