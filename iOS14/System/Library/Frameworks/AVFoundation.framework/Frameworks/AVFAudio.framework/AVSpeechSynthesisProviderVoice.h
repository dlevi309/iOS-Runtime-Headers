/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface AVSpeechSynthesisProviderVoice : NSObject <NSSecureCoding, NSCopying> {

	float _version;
	NSString* _name;
	NSString* _identifier;
	NSArray* _supportedLanguages;
	long long _voiceSize;
	long long _gender;
	long long _age;

}

@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) long long voiceSize;                       //@synthesize voiceSize=_voiceSize - In the implementation block
@property (assign,nonatomic) float version;                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long gender;                          //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) long long age;                             //@synthesize age=_age - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)didUpdateSpeechVoices;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setAge:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setVersion:(float)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setGender:(long long)arg1 ;
-(NSArray *)supportedLanguages;
-(long long)gender;
-(void)setSupportedLanguages:(NSArray *)arg1 ;
-(long long)age;
-(id)initWithName:(id)arg1 identifier:(id)arg2 supportedLanguages:(id)arg3 ;
-(void)setVoiceSize:(long long)arg1 ;
-(float)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)voiceSize;
@end

