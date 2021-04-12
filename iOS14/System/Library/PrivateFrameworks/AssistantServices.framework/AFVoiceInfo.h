/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCustom;
	BOOL _wasInitalizedFromDictionaryRepresentation;
	NSString* _languageCode;
	long long _footprint;
	NSString* _name;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;
	long long _gender;

}

@property (assign,nonatomic) long long gender;                                              //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) BOOL wasInitalizedFromDictionaryRepresentation;              //@synthesize wasInitalizedFromDictionaryRepresentation=_wasInitalizedFromDictionaryRepresentation - In the implementation block
@property (nonatomic,readonly) NSString * languageCode;                                     //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL isCustom;                                                 //@synthesize isCustom=_isCustom - In the implementation block
@property (nonatomic,readonly) long long footprint;                                         //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * contentVersion;                                   //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) NSString * masteredVersion;                                  //@synthesize masteredVersion=_masteredVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)defaultGenderForOutputVoiceLanguageCode:(id)arg1 ;
+(long long)genderForVSSpeechGender:(long long)arg1 ;
+(id)allVoicesForSiriSessionLanguage:(id)arg1 ;
+(id)voiceInfoForLanguageCode:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)languageCode;
-(BOOL)isCustom;
-(NSString *)name;
-(id)description;
-(id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(BOOL)arg3 name:(id)arg4 footprint:(long long)arg5 contentVersion:(id)arg6 masteredVersion:(id)arg7 ;
-(id)genderString;
-(id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(BOOL)arg3 ;
-(id)footprintString;
-(BOOL)isLanguageAndGenderEqual:(id)arg1 ;
-(void)setIsCustom:(BOOL)arg1 ;
-(NSString *)masteredVersion;
-(BOOL)wasInitalizedFromDictionaryRepresentation;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)VSSpeechGender;
-(long long)VSSpeechFootprint;
-(long long)VSSpeechType;
-(id)VSVoiceAsset;
-(NSNumber *)contentVersion;
-(BOOL)isMatchForVoiceAsset:(id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
-(void)setGender:(long long)arg1 ;
-(long long)gender;
-(BOOL)isValidForSiriSessionLanguage:(id)arg1 ;
-(long long)footprint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

