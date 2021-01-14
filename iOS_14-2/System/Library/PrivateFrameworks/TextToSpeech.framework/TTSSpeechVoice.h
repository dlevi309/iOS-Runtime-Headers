/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TTSSpeechService;
@class NSString;

@interface TTSSpeechVoice : NSObject <NSSecureCoding, NSCopying> {

	id<TTSSpeechService> _service;
	BOOL _isDefault;
	BOOL _isFallbackDefault;
	BOOL _excludeInAvailableVoiceList;
	BOOL _canBeDownloaded;
	BOOL _isCombinedFootprint;
	NSString* _name;
	NSString* _language;
	NSString* _identifier;
	long long _footprint;
	long long _gender;
	NSString* _nonCombinedVoiceId;
	NSString* _serviceIdentifier;

}

@property (nonatomic,retain) NSString * serviceIdentifier;                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * language;                             //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long footprint;                             //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                                //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) BOOL isFallbackDefault;                        //@synthesize isFallbackDefault=_isFallbackDefault - In the implementation block
@property (nonatomic,readonly) BOOL excludeInAvailableVoiceList;              //@synthesize excludeInAvailableVoiceList=_excludeInAvailableVoiceList - In the implementation block
@property (assign,nonatomic) long long gender;                                //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) BOOL canBeDownloaded;                            //@synthesize canBeDownloaded=_canBeDownloaded - In the implementation block
@property (nonatomic,readonly) BOOL isCombinedFootprint;                      //@synthesize isCombinedFootprint=_isCombinedFootprint - In the implementation block
@property (nonatomic,retain) NSString * nonCombinedVoiceId;                   //@synthesize nonCombinedVoiceId=_nonCombinedVoiceId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedName:(id)arg1 forLanguage:(id)arg2 ;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)isFallbackDefault;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)serviceIdentifier;
-(id)description;
-(void)setService:(id)arg1 ;
-(BOOL)isDefault;
-(id)initWithCoder:(id)arg1 ;
-(void)setFootprint:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setGender:(long long)arg1 ;
-(long long)gender;
-(long long)footprint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(id)service;
-(BOOL)canBeDownloaded;
-(BOOL)excludeInAvailableVoiceList;
-(NSString *)nonCombinedVoiceId;
-(void)setNonCombinedVoiceId:(NSString *)arg1 ;
-(void)setCanBeDownloaded:(BOOL)arg1 ;
-(id)localizedNameForLanguage:(id)arg1 ;
-(BOOL)isCombinedFootprint;
@end

