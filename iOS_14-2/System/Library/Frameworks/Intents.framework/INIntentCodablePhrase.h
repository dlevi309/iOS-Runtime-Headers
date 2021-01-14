/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INIntentCodableDescription, NSString;

@interface INIntentCodablePhrase : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	INIntentCodableDescription* _codableDescription;
	NSString* _pronunciationHint;
	NSString* _pronunciationHintLocID;
	NSString* _phrase;
	NSString* _phraseLocID;

}

@property (assign,setter=_setCodableDescription:,nonatomic,__weak) INIntentCodableDescription * _codableDescription;              //@synthesize codableDescription=_codableDescription - In the implementation block
@property (nonatomic,copy) NSString * pronunciationHint;                                                                          //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,copy) NSString * pronunciationHintLocID;                                                                     //@synthesize pronunciationHintLocID=_pronunciationHintLocID - In the implementation block
@property (nonatomic,copy) NSString * phrase;                                                                                     //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * phraseLocID;                                                                                //@synthesize phraseLocID=_phraseLocID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPhrase; 
@property (nonatomic,copy,readonly) NSString * localizedPronunciationHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)dictionaryRepresentation;
-(INIntentCodableDescription *)_codableDescription;
-(void)updateWithDictionary:(id)arg1 ;
-(NSString *)pronunciationHint;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setCodableDescription:(id)arg1 ;
-(NSString *)localizedPhrase;
-(id)localizedPhraseForLanguage:(id)arg1 ;
-(id)localizedPhraseWithLocalizer:(id)arg1 ;
-(NSString *)localizedPronunciationHint;
-(id)localizedPronunciationHintForLanguage:(id)arg1 ;
-(id)localizedPronunciationHintWithLocalizer:(id)arg1 ;
-(NSString *)pronunciationHintLocID;
-(void)setPronunciationHintLocID:(NSString *)arg1 ;
-(NSString *)phraseLocID;
-(void)setPhraseLocID:(NSString *)arg1 ;
-(id)__INCodableDescriptionPronunciationHintIDKey;
-(id)__INCodableDescriptionPronunciationHintKey;
-(id)__INCodableDescriptionPhraseIDKey;
-(id)__INCodableDescriptionPhraseKey;
-(void)setPronunciationHint:(NSString *)arg1 ;
-(NSString *)phrase;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPhrase:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

