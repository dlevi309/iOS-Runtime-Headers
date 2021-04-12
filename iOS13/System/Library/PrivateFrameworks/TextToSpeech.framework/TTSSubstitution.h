/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSUUID;

@interface TTSSubstitution : NSObject <NSSecureCoding, NSCopying> {

	BOOL _active;
	BOOL _ignoreCase;
	BOOL _appliesToAllApps;
	BOOL _isReplacementTextAllPunctuation;
	BOOL _isReplacementTextSurroundedByPunctuation;
	BOOL _isUserSubstitution;
	NSString* _originalString;
	NSString* _replacementString;
	NSString* _phonemes;
	NSSet* _languages;
	NSSet* _voiceIds;
	NSUUID* _uuid;
	NSSet* _bundleIdentifiers;
	NSRange _replacementRange;

}

@property (nonatomic,retain) NSUUID * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * originalString;                                      //@synthesize originalString=_originalString - In the implementation block
@property (nonatomic,copy) NSString * replacementString;                                   //@synthesize replacementString=_replacementString - In the implementation block
@property (nonatomic,copy) NSString * phonemes;                                            //@synthesize phonemes=_phonemes - In the implementation block
@property (nonatomic,copy) NSSet * languages;                                              //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSSet * voiceIds;                                               //@synthesize voiceIds=_voiceIds - In the implementation block
@property (assign,nonatomic) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL ignoreCase;                                              //@synthesize ignoreCase=_ignoreCase - In the implementation block
@property (assign,nonatomic) NSRange replacementRange;                                     //@synthesize replacementRange=_replacementRange - In the implementation block
@property (assign,nonatomic) BOOL appliesToAllApps;                                        //@synthesize appliesToAllApps=_appliesToAllApps - In the implementation block
@property (nonatomic,copy) NSSet * bundleIdentifiers;                                      //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL isReplacementTextAllPunctuation;                       //@synthesize isReplacementTextAllPunctuation=_isReplacementTextAllPunctuation - In the implementation block
@property (nonatomic,readonly) BOOL isReplacementTextSurroundedByPunctuation;              //@synthesize isReplacementTextSurroundedByPunctuation=_isReplacementTextSurroundedByPunctuation - In the implementation block
@property (assign,nonatomic) BOOL isUserSubstitution;                                      //@synthesize isUserSubstitution=_isUserSubstitution - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)replacementString;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSSet *)languages;
-(void)setLanguages:(NSSet *)arg1 ;
-(BOOL)active;
-(void)setReplacementRange:(NSRange)arg1 ;
-(NSRange)replacementRange;
-(NSSet *)bundleIdentifiers;
-(void)setBundleIdentifiers:(NSSet *)arg1 ;
-(NSString *)originalString;
-(void)setOriginalString:(NSString *)arg1 ;
-(void)setPhonemes:(NSString *)arg1 ;
-(void)setIgnoreCase:(BOOL)arg1 ;
-(void)setAppliesToAllApps:(BOOL)arg1 ;
-(void)setReplacementString:(NSString *)arg1 ;
-(void)setVoiceIds:(NSSet *)arg1 ;
-(NSString *)phonemes;
-(NSSet *)voiceIds;
-(BOOL)ignoreCase;
-(BOOL)appliesToAllApps;
-(BOOL)isReplacementTextAllPunctuation;
-(BOOL)isReplacementTextSurroundedByPunctuation;
-(BOOL)isUserSubstitution;
-(void)setIsUserSubstitution:(BOOL)arg1 ;
@end

