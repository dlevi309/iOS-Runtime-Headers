/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INSpeakableStringExport.h>
#import <libobjc.A.dylib/INSpeakable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable, NSCopying, NSSecureCoding> {

	NSString* _spokenPhrase;
	NSString* _pronunciationHint;
	NSString* _vocabularyIdentifier;
	NSArray* _alternativeSpeakableMatches;

}

@property (nonatomic,retain) NSString * spokenPhrase;                              //@synthesize spokenPhrase=_spokenPhrase - In the implementation block
@property (nonatomic,retain) NSString * pronunciationHint;                         //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * vocabularyIdentifier;                      //@synthesize vocabularyIdentifier=_vocabularyIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * alternativeSpeakableMatches;              //@synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(NSString *)pronunciationHint;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)_intents_localizedCopyWithLocalizer:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setVocabularyIdentifier:(NSString *)arg1 ;
-(NSArray *)alternativeSpeakableMatches;
-(NSString *)spokenPhrase;
-(NSString *)description;
-(void)setPronunciationHint:(NSString *)arg1 ;
-(id)spokenPhrases;
-(id)initWithSpokenPhrase:(id)arg1 ;
-(void)setSpokenPhrase:(NSString *)arg1 ;
-(id)initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)_effectiveNSStringValue;
-(id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 string:(id)arg2 ;
-(NSString *)vocabularyIdentifier;
-(id)_initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 alternativeMatches:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)string;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

