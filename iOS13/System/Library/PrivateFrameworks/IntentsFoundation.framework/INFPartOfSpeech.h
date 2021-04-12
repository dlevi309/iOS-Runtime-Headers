/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)identifier;
-(id)dictionaryRepresentation;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(unsigned long long)gender;
-(void)setGender:(unsigned long long)arg1 ;
-(NSMutableDictionary *)variants;
-(void)setVariants:(NSMutableDictionary *)arg1 ;
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

