/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSSocialService.h>

@class NPNameParser, NSMutableDictionary, NSDictionary, NSCharacterSet;

@interface CLSSocialServiceCoreNameParser : CLSSocialService {

	NPNameParser* _nameParser;
	NSMutableDictionary* _sexHintByCNIdentifier;
	NSDictionary* _vocabularyByRelationshipByLocale;
	NSMutableDictionary* _regularExpressionByRelationshipByLocale;
	NSCharacterSet* _nonLetterCharacterSet;

}

@property (retain) NPNameParser * nameParser;                                                            //@synthesize nameParser=_nameParser - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sexHintByCNIdentifier;                                //@synthesize sexHintByCNIdentifier=_sexHintByCNIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * vocabularyByRelationshipByLocale;                            //@synthesize vocabularyByRelationshipByLocale=_vocabularyByRelationshipByLocale - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * regularExpressionByRelationshipByLocale;              //@synthesize regularExpressionByRelationshipByLocale=_regularExpressionByRelationshipByLocale - In the implementation block
@property (nonatomic,retain) NSCharacterSet * nonLetterCharacterSet;                                     //@synthesize nonLetterCharacterSet=_nonLetterCharacterSet - In the implementation block
+(id)_dictionaryKeyForPersonRelationship:(unsigned long long)arg1 ;
+(unsigned long long)_personRelationshipFromString:(id)arg1 ;
-(id)init;
-(unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2 ;
-(void)invalidateMemoryCaches;
-(unsigned long long)sexHintForPerson:(id)arg1 usingLocales:(id)arg2 ;
-(unsigned long long)_sexHintForRelationship:(unsigned long long)arg1 ;
-(id)_normalizeName:(id)arg1 ;
-(id)_parentRelationships;
-(id)_regularExpressionForRelationship:(unsigned long long)arg1 languageCode:(id)arg2 ;
-(NPNameParser *)nameParser;
-(void)setNameParser:(NPNameParser *)arg1 ;
-(NSMutableDictionary *)sexHintByCNIdentifier;
-(void)setSexHintByCNIdentifier:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)vocabularyByRelationshipByLocale;
-(void)setVocabularyByRelationshipByLocale:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)regularExpressionByRelationshipByLocale;
-(void)setRegularExpressionByRelationshipByLocale:(NSMutableDictionary *)arg1 ;
-(NSCharacterSet *)nonLetterCharacterSet;
-(void)setNonLetterCharacterSet:(NSCharacterSet *)arg1 ;
@end

