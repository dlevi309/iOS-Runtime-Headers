/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
*/


@class NSMutableDictionary, NSArray;

@interface INFGrammarCollection : NSObject {

	NSMutableDictionary* _tokensDictionary;
	NSMutableDictionary* _sentencesDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * tokensDictionary;                 //@synthesize tokensDictionary=_tokensDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sentencesDictionary;              //@synthesize sentencesDictionary=_sentencesDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * sentences; 
@property (nonatomic,readonly) NSArray * tokens; 
+(id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3 ;
+(id)grammarCollection;
+(id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2 ;
-(id)dictionaryRepresentation;
-(NSArray *)tokens;
-(void)addToken:(id)arg1 ;
-(id)createAdjectiveWithIdentifier:(id)arg1 language:(id)arg2 ;
-(id)init;
-(NSMutableDictionary *)sentencesDictionary;
-(NSMutableDictionary *)tokensDictionary;
-(NSArray *)sentences;
-(id)initWithDictionary:(id)arg1 ;
-(id)createSentenceWithIdentifier:(id)arg1 ;
-(id)createNounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3 ;
-(id)tokenWithIdentifier:(id)arg1 ;
-(id)createNounWithIdentifier:(id)arg1 language:(id)arg2 ;
-(void)addSentence:(id)arg1 ;
-(id)initWithGrammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3 ;
-(void)setSentencesDictionary:(NSMutableDictionary *)arg1 ;
-(void)setTokensDictionary:(NSMutableDictionary *)arg1 ;
-(id)sentenceWithIdentifier:(id)arg1 ;
-(void)writeToFileAtPath:(id)arg1 ;
@end

