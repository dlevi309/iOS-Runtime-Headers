/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary, NSArray, NSAttributedString;

@interface VSSpeechRequest : NSObject <NSSecureCoding, NSCopying> {

	BOOL _shouldCache;
	BOOL _disableCompactVoiceFallback;
	BOOL _forceServerTTS;
	BOOL _canUseServerTTS;
	BOOL _retryDeviceOnNetworkStall;
	unsigned _audioSessionID;
	NSString* _text;
	NSString* _languageCode;
	long long _footprint;
	long long _voiceType;
	long long _gender;
	NSURL* _outputPath;
	double _rate;
	double _pitch;
	double _volume;
	NSDictionary* _contextInfo;
	NSURL* _resourceListURL;
	NSURL* _resourceSearchPathURL;
	NSArray* _customResourceURLs;
	NSAttributedString* _attributedText;
	NSString* _utterance;
	NSString* _clientBundleIdentifier;
	unsigned long long _requestCreatedTimestamp;
	/*^block*/id _stopHandler;
	/*^block*/id _pauseHandler;
	long long _pointer;
	NSString* _voiceName;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * utterance;                                      //@synthesize utterance=_utterance - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                         //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long requestCreatedTimestamp;              //@synthesize requestCreatedTimestamp=_requestCreatedTimestamp - In the implementation block
@property (nonatomic,copy) id stopHandler;                                            //@synthesize stopHandler=_stopHandler - In the implementation block
@property (nonatomic,copy) id pauseHandler;                                           //@synthesize pauseHandler=_pauseHandler - In the implementation block
@property (assign,nonatomic) long long pointer;                                       //@synthesize pointer=_pointer - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                                      //@synthesize voiceName=_voiceName - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                   //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) long long footprint;                                     //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) long long voiceType;                                     //@synthesize voiceType=_voiceType - In the implementation block
@property (assign,nonatomic) long long gender;                                        //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSURL * outputPath;                                        //@synthesize outputPath=_outputPath - In the implementation block
@property (assign,nonatomic) BOOL shouldCache;                                        //@synthesize shouldCache=_shouldCache - In the implementation block
@property (assign,nonatomic) double rate;                                             //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) double pitch;                                            //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                           //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy) NSDictionary * contextInfo;                                //@synthesize contextInfo=_contextInfo - In the implementation block
@property (assign,nonatomic) BOOL disableCompactVoiceFallback;                        //@synthesize disableCompactVoiceFallback=_disableCompactVoiceFallback - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                                 //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) BOOL forceServerTTS;                                     //@synthesize forceServerTTS=_forceServerTTS - In the implementation block
@property (assign,nonatomic) BOOL canUseServerTTS;                                    //@synthesize canUseServerTTS=_canUseServerTTS - In the implementation block
@property (assign,nonatomic) BOOL retryDeviceOnNetworkStall;                          //@synthesize retryDeviceOnNetworkStall=_retryDeviceOnNetworkStall - In the implementation block
@property (nonatomic,copy) NSURL * resourceListURL;                                   //@synthesize resourceListURL=_resourceListURL - In the implementation block
@property (nonatomic,copy) NSURL * resourceSearchPathURL;                             //@synthesize resourceSearchPathURL=_resourceSearchPathURL - In the implementation block
@property (nonatomic,retain) NSArray * customResourceURLs;                            //@synthesize customResourceURLs=_customResourceURLs - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)shouldCache;
-(NSString *)clientBundleIdentifier;
-(void)setLanguageCode:(NSString *)arg1 ;
-(double)pitch;
-(NSAttributedString *)attributedText;
-(unsigned)audioSessionID;
-(void)setVolume:(double)arg1 ;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)voiceName;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)utterance;
-(long long)pointer;
-(id)init;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)setUtterance:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setContextInfo:(NSDictionary *)arg1 ;
-(void)setRate:(double)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)languageCode;
-(long long)voiceType;
-(BOOL)canUseServerTTS;
-(id)logText;
-(unsigned long long)requestCreatedTimestamp;
-(void)setRequestCreatedTimestamp:(unsigned long long)arg1 ;
-(id)description;
-(double)rate;
-(BOOL)forceServerTTS;
-(void)setForceServerTTS:(BOOL)arg1 ;
-(NSString *)text;
-(id)pauseHandler;
-(void)setPauseHandler:(id)arg1 ;
-(void)setVoiceType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFootprint:(long long)arg1 ;
-(void)setOutputPath:(NSURL *)arg1 ;
-(void)setGender:(long long)arg1 ;
-(void)setPitch:(double)arg1 ;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(long long)gender;
-(double)volume;
-(NSDictionary *)contextInfo;
-(BOOL)canLogRequestText;
-(id)stopHandler;
-(void)setStopHandler:(id)arg1 ;
-(long long)footprint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(id)contextInfoString;
-(NSArray *)customResourceURLs;
-(NSURL *)outputPath;
-(BOOL)disableCompactVoiceFallback;
-(void)setDisableCompactVoiceFallback:(BOOL)arg1 ;
-(NSURL *)resourceListURL;
-(void)setResourceListURL:(NSURL *)arg1 ;
-(NSURL *)resourceSearchPathURL;
-(void)setResourceSearchPathURL:(NSURL *)arg1 ;
-(void)setCustomResourceURLs:(NSArray *)arg1 ;
-(id)logUtterance;
-(BOOL)isSimilarTo:(id)arg1 ;
-(BOOL)retryDeviceOnNetworkStall;
-(void)setRetryDeviceOnNetworkStall:(BOOL)arg1 ;
-(void)setPointer:(long long)arg1 ;
-(void)setShouldCache:(BOOL)arg1 ;
@end

