/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSSocialService.h>

@class NPNameParser, NSMutableDictionary, NSDictionary, NSCharacterSet;

@interface CLSSocialServiceCoreNameParser : CLSSocialService {

	NPNameParser* _nameParser;
	NSMutableDictionary* _genderHintByCNIdentifier;
	NSDictionary* _vocabularyByRelationshipByLocale;
	NSMutableDictionary* _regularExpressionByRelationshipByLocale;
	NSCharacterSet* _nonLetterCharacterSet;

}

@property (retain) NPNameParser * nameParser;                                                            //@synthesize nameParser=_nameParser - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * genderHintByCNIdentifier;                             //@synthesize genderHintByCNIdentifier=_genderHintByCNIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * vocabularyByRelationshipByLocale;                            //@synthesize vocabularyByRelationshipByLocale=_vocabularyByRelationshipByLocale - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * regularExpressionByRelationshipByLocale;              //@synthesize regularExpressionByRelationshipByLocale=_regularExpressionByRelationshipByLocale - In the implementation block
@property (nonatomic,retain) NSCharacterSet * nonLetterCharacterSet;                                     //@synthesize nonLetterCharacterSet=_nonLetterCharacterSet - In the implementation block
+(id)_dictionaryKeyForPersonRelationship:(unsigned long long)arg1 ;
+(unsigned long long)_personRelationshipFromString:(id)arg1 ;
-(id)init;
-(void)invalidateMemoryCaches;
-(unsigned long long)genderHintForPerson:(id)arg1 usingLocales:(id)arg2 ;
-(unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2 ;
-(unsigned long long)_genderHintForRelationship:(unsigned long long)arg1 ;
-(id)_normalizeName:(id)arg1 ;
-(id)_parentRelationships;
-(id)_regularExpressionForRelationship:(unsigned long long)arg1 languageCode:(id)arg2 ;
-(NPNameParser *)nameParser;
-(void)setNameParser:(NPNameParser *)arg1 ;
-(NSMutableDictionary *)genderHintByCNIdentifier;
-(void)setGenderHintByCNIdentifier:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)vocabularyByRelationshipByLocale;
-(void)setVocabularyByRelationshipByLocale:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)regularExpressionByRelationshipByLocale;
-(void)setRegularExpressionByRelationshipByLocale:(NSMutableDictionary *)arg1 ;
-(NSCharacterSet *)nonLetterCharacterSet;
-(void)setNonLetterCharacterSet:(NSCharacterSet *)arg1 ;
@end

