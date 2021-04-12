/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface VSVoiceAsset : VSAssetBase <NSSecureCoding> {

	BOOL _isInstalled;
	BOOL _isBuiltInVoice;
	BOOL _isVoiceReadyToUse;
	NSString* _name;
	NSArray* _languages;
	long long _gender;
	long long _footprint;
	long long _type;

}

@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long gender;                    //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) long long footprint;                 //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * languages;                   //@synthesize languages=_languages - In the implementation block
@property (assign,nonatomic) BOOL isInstalled;                    //@synthesize isInstalled=_isInstalled - In the implementation block
@property (assign,nonatomic) BOOL isBuiltInVoice;                 //@synthesize isBuiltInVoice=_isBuiltInVoice - In the implementation block
@property (assign,nonatomic) BOOL isVoiceReadyToUse;              //@synthesize isVoiceReadyToUse=_isVoiceReadyToUse - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)typeFromString:(id)arg1 ;
+(long long)genderFromString:(id)arg1 ;
+(id)typeStringFromType:(long long)arg1 ;
+(id)genderStringFromGender:(long long)arg1 ;
+(id)footprintStringFromFootprint:(long long)arg1 ;
+(long long)footprintFromString:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isInstalled;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(long long)footprint;
-(void)setFootprint:(long long)arg1 ;
-(void)setIsBuiltInVoice:(BOOL)arg1 ;
-(BOOL)isBuiltInVoice;
-(id)voiceKey;
-(BOOL)isVoiceReadyToUse;
-(id)descriptiveKey;
-(void)setIsInstalled:(BOOL)arg1 ;
-(void)setIsVoiceReadyToUse:(BOOL)arg1 ;
@end

