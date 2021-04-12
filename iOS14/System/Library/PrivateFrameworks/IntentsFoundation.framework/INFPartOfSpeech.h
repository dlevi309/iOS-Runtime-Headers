/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
*/

#import <IntentsFoundation/INFSentenceToken.h>

@class NSString, NSMutableDictionary;

@interface INFPartOfSpeech : INFSentenceToken {

	NSString* _identifier;
	unsigned long long _gender;
	NSString* _language;
	unsigned long long _partOfSpeechType;
	NSMutableDictionary* _variants;

}

@property (nonatomic,retain) NSMutableDictionary * variants;                   //@synthesize variants=_variants - In the implementation block
@property (nonatomic,copy) NSString * language;                                //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) unsigned long long partOfSpeechType;              //@synthesize partOfSpeechType=_partOfSpeechType - In the implementation block
@property (assign,nonatomic) unsigned long long gender;                        //@synthesize gender=_gender - In the implementation block
+(id)adjectiveWithIdentifier:(id)arg1 language:(id)arg2 ;
+(id)nounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3 ;
+(id)nounWithIdentifier:(id)arg1 language:(id)arg2 ;
-(id)dictionaryRepresentation;
-(NSMutableDictionary *)variants;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setVariants:(NSMutableDictionary *)arg1 ;
-(id)identifier;
-(void)setGender:(unsigned long long)arg1 ;
-(unsigned long long)gender;
-(NSString *)language;
-(id)stringForContext:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 identifier:(id)arg2 ;
-(id)contributingSentenceContext;
-(id)initWithPartOfSpeechType:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3 ;
-(void)validateSelf;
-(void)setString:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(id)stringForVariants:(unsigned long long)arg1 ;
-(void)setString:(id)arg1 forVariantsDescriptor:(id)arg2 ;
-(id)stringForVariantsDescriptor:(id)arg1 ;
-(unsigned long long)partOfSpeechType;
-(void)setPartOfSpeechType:(unsigned long long)arg1 ;
@end

