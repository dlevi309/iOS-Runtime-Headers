/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding> {

	NSDictionary* _audioFileSettings;

}

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) long long quality; 
@property (assign,nonatomic) long long gender; 
@property (nonatomic,readonly) NSDictionary * audioFileSettings;              //@synthesize audioFileSettings=_audioFileSettings - In the implementation block
+(id)currentLanguageCode;
+(id)voiceWithLanguage:(id)arg1 ;
+(id)speechVoices;
+(id)_voiceFromInternalVoiceListWithIdentifier:(id)arg1 ;
+(id)voiceWithIdentifier:(id)arg1 ;
+(id)_speechVoicesIncludingSiri;
+(id)_voiceWithIdentifier:(id)arg1 includingSiri:(BOOL)arg2 ;
+(id)_speechVoicesIncludingSiri:(BOOL)arg1 ;
+(id)test_speechVoices;
+(void)test_setSpeechVoices:(id)arg1 ;
+(void)test_setInternalSpeechVoices:(id)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)currentLanguageCode;
+(id)voiceWithLanguage:(id)arg1 ;
+(id)speechVoices;
+(id)voiceWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isInstalled;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(long long)quality;
-(BOOL)isDefault;
-(void)setIsDefault:(BOOL)arg1 ;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(BOOL)isFallbackDefault;
-(void)setQuality:(long long)arg1 ;
-(id)nameWithoutQuality;
-(NSDictionary *)audioFileSettings;
-(id)initWithLanguage:(id)arg1 ;
-(void)setAssetSize:(long long)arg1 ;
-(long long)assetSize;
-(void)setIsInstalled:(BOOL)arg1 ;
-(BOOL)canBeDownloaded;
-(BOOL)isCombinedVoice;
-(void)setCanBeDownloaded:(BOOL)arg1 ;
-(void)setIsCombinedVoice:(BOOL)arg1 ;
-(void)setIsFallbackDefault:(BOOL)arg1 ;
-(id)nonCombinedVoiceId;
-(void)setNonCombinedVoiceId:(id)arg1 ;
-(id)_localizedNameFormat;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)audioFileSettings;
@end

