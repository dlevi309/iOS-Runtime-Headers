/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)voiceWithIdentifier:(id)arg1 ;
+(id)_voiceFromInternalVoiceListWithIdentifier:(id)arg1 ;
+(id)voiceWithLanguage:(id)arg1 ;
+(id)speechVoices;
+(id)currentLanguageCode;
+(id)_speechVoicesIncludingSiri;
+(id)_voiceWithIdentifier:(id)arg1 includingSiri:(BOOL)arg2 ;
+(id)_speechVoicesIncludingSiri:(BOOL)arg1 ;
+(id)test_speechVoices;
+(void)test_setSpeechVoices:(id)arg1 ;
+(void)test_setInternalSpeechVoices:(id)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)voiceWithIdentifier:(id)arg1 ;
+(id)voiceWithLanguage:(id)arg1 ;
+(id)speechVoices;
+(id)currentLanguageCode;
-(NSDictionary *)audioFileSettings;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)isFallbackDefault;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInstalled;
-(id)nameWithoutQuality;
-(long long)quality;
-(NSString *)name;
-(id)description;
-(void)setIsInstalled:(BOOL)arg1 ;
-(BOOL)isDefault;
-(void)setIsDefault:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)nonLocalizedName;
-(void)setQuality:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setGender:(long long)arg1 ;
-(long long)gender;
-(id)initWithLanguage:(id)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(long long)assetSize;
-(void)setAssetSize:(long long)arg1 ;
-(BOOL)canBeDownloaded;
-(BOOL)isCombinedVoice;
-(id)nonCombinedVoiceId;
-(void)setNonCombinedVoiceId:(id)arg1 ;
-(void)setCanBeDownloaded:(BOOL)arg1 ;
-(void)setNonLocalizedNameWithoutQuality:(id)arg1 ;
-(void)setIsCombinedVoice:(BOOL)arg1 ;
-(void)setIsFallbackDefault:(BOOL)arg1 ;
-(id)nonLocalizedNameWithoutQuality;
-(void)setBackupName:(id)arg1 ;
-(id)backupName;
-(id)_localizedNameFormat;
-(id)debugDescription;
-(NSDictionary *)audioFileSettings;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

