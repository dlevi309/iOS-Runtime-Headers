/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)tokens;
-(void)addToken:(id)arg1 ;
-(id)sentenceWithIdentifier:(id)arg1 ;
-(id)tokenWithIdentifier:(id)arg1 ;
-(id)initWithGrammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3 ;
-(id)createSentenceWithIdentifier:(id)arg1 ;
-(void)addSentence:(id)arg1 ;
-(NSArray *)sentences;
-(id)createNounWithIdentifier:(id)arg1 language:(id)arg2 ;
-(id)createNounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3 ;
-(id)createAdjectiveWithIdentifier:(id)arg1 language:(id)arg2 ;
-(void)writeToFileAtPath:(id)arg1 ;
-(NSMutableDictionary *)tokensDictionary;
-(void)setTokensDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sentencesDictionary;
-(void)setSentencesDictionary:(NSMutableDictionary *)arg1 ;
@end

