/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


@class NSString, SFSpeechSynthesisVoice;

@interface SFSpeechSynthesisRequest : NSObject {

	BOOL _isPrivate;
	long long _type;
	NSString* _text;
	long long _solutionType;
	NSString* _locale;
	NSString* _gender;
	NSString* _voiceName;
	NSString* _clientBundleIdentifier;
	NSString* _requestIdentifer;
	SFSpeechSynthesisVoice* _voice;

}

@property (nonatomic,copy) NSString * locale;                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * gender;                                    //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                                 //@synthesize voiceName=_voiceName - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                    //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifer;                          //@synthesize requestIdentifer=_requestIdentifer - In the implementation block
@property (assign,nonatomic,__weak) SFSpeechSynthesisVoice * voice;              //@synthesize voice=_voice - In the implementation block
@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isPrivate;                                     //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,copy) NSString * text;                                      //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long solutionType;                             //@synthesize solutionType=_solutionType - In the implementation block
-(SFSpeechSynthesisVoice *)voice;
-(void)setVoice:(SFSpeechSynthesisVoice *)arg1 ;
-(NSString *)clientBundleIdentifier;
-(NSString *)locale;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)voiceName;
-(void)setLocale:(NSString *)arg1 ;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(long long)solutionType;
-(void)setText:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(NSString *)text;
-(long long)type;
-(void)setIsPrivate:(BOOL)arg1 ;
-(BOOL)isPrivate;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
-(NSString *)requestIdentifer;
-(void)setSolutionType:(long long)arg1 ;
-(void)setRequestIdentifer:(NSString *)arg1 ;
@end

