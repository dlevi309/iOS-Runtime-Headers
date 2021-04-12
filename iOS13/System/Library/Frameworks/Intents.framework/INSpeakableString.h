/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * spokenPhrase;                              //@synthesize spokenPhrase=_spokenPhrase - In the implementation block
@property (nonatomic,retain) NSString * pronunciationHint;                         //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * vocabularyIdentifier;                      //@synthesize vocabularyIdentifier=_vocabularyIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeSpeakableMatches;              //@synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)string;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)spokenPhrase;
-(id)_intents_localizedCopyWithLocalizer:(id)arg1 ;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(NSString *)pronunciationHint;
-(void)setPronunciationHint:(NSString *)arg1 ;
-(NSString *)vocabularyIdentifier;
-(void)setVocabularyIdentifier:(NSString *)arg1 ;
-(NSArray *)alternativeSpeakableMatches;
-(void)setSpokenPhrase:(NSString *)arg1 ;
-(id)initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithSpokenPhrase:(id)arg1 ;
-(id)_initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 alternativeMatches:(id)arg4 ;
-(id)_effectiveNSStringValue;
-(id)spokenPhrases;
-(id)initWithIdentifier:(id)arg1 string:(id)arg2 ;
@end

