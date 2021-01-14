/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface VSPresynthesizedAudioRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enqueue;
	unsigned _audioSessionID;
	NSData* _audioData;
	NSString* _text;
	NSString* _identifier;
	unsigned long long _requestCreatedTimestamp;
	NSString* _clientBundleIdentifier;
	unsigned long long _pcmDataSize;
	/*^block*/id _stopHandler;
	AudioStreamBasicDescription _decoderStreamDescription;
	AudioStreamBasicDescription _playerStreamDescription;

}

@property (nonatomic,copy) NSString * clientBundleIdentifier;                                     //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long pcmDataSize;                                      //@synthesize pcmDataSize=_pcmDataSize - In the implementation block
@property (nonatomic,copy) id stopHandler;                                                        //@synthesize stopHandler=_stopHandler - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                                             //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSData * audioData;                                           //@synthesize audioData=_audioData - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription decoderStreamDescription;              //@synthesize decoderStreamDescription=_decoderStreamDescription - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription playerStreamDescription;               //@synthesize playerStreamDescription=_playerStreamDescription - In the implementation block
@property (assign,nonatomic) BOOL enqueue;                                                        //@synthesize enqueue=_enqueue - In the implementation block
@property (nonatomic,retain) NSString * text;                                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long requestCreatedTimestamp;                          //@synthesize requestCreatedTimestamp=_requestCreatedTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clientBundleIdentifier;
-(BOOL)enqueue;
-(unsigned)audioSessionID;
-(id)init;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(AudioStreamBasicDescription)decoderStreamDescription;
-(AudioStreamBasicDescription)playerStreamDescription;
-(id)logText;
-(unsigned long long)requestCreatedTimestamp;
-(void)setRequestCreatedTimestamp:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)isValid;
-(NSString *)text;
-(NSData *)audioData;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setEnqueue:(BOOL)arg1 ;
-(BOOL)canLogRequestText;
-(id)initWithAudioData:(id)arg1 decoderStreamDescription:(AudioStreamBasicDescription)arg2 playerStreamDescription:(AudioStreamBasicDescription)arg3 ;
-(unsigned long long)pcmDataSize;
-(id)stopHandler;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithAudioData:(id)arg1 playerStreamDescription:(AudioStreamBasicDescription)arg2 ;
-(void)setPcmDataSize:(unsigned long long)arg1 ;
-(void)setStopHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
@end

