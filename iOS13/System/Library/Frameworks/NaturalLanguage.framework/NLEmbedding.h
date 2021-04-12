/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString;

@interface NLEmbedding : NSObject {

	void* _embedding;

}

@property (readonly) unsigned long long dimension; 
@property (readonly) unsigned long long vocabularySize; 
@property (copy,readonly) NSString * language; 
@property (readonly) unsigned long long revision; 
+(id)wordEmbeddingForLanguage:(id)arg1 ;
+(id)wordEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2 ;
+(id)contextualWordEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2 ;
+(id)embeddingWithData:(id)arg1 error:(id*)arg2 ;
+(id)_embeddingWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)_embeddingWithData:(id)arg1 error:(id*)arg2 ;
+(id)contextualWordEmbeddingForLanguage:(id)arg1 ;
+(unsigned long long)currentRevisionForLanguage:(id)arg1 ;
+(BOOL)_writeEmbeddingForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 orData:(id)arg5 error:(id*)arg6 ;
+(id)embeddingDataForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)modelDescriptionForEmbedding:(id)arg1 ;
+(id)supportedRevisionsForLanguage:(id)arg1 ;
+(BOOL)writeEmbeddingForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 error:(id*)arg5 ;
+(BOOL)writeEmbeddingMLModelForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(id)embeddingWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)embeddingWithMLModel:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)containsString:(id)arg1 ;
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(unsigned long long)dimension;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSString *)language;
-(unsigned long long)revision;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(id)neighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 ;
-(id)initWithNLModel:(id)arg1 error:(id*)arg2 ;
-(id)vectorsForSentences:(id)arg1 maxTokens:(unsigned long long)arg2 ;
-(void*)_createEmbeddingRefWithContentsOfURL:(id)arg1 ;
-(void*)_createEmbeddingRefWithData:(id)arg1 ;
-(id)initContextualEmbeddingWithLocale:(CFLocaleRef)arg1 ;
-(double)distanceBetweenString:(id)arg1 andString:(id)arg2 distanceType:(long long)arg3 ;
-(void)enumerateNeighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)enumerateNeighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)neighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 ;
-(id)vectorForString:(id)arg1 ;
-(unsigned long long)vocabularySize;
-(id)_initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)_initWithData:(id)arg1 error:(id*)arg2 ;
-(void)enumerateNeighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)neighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 ;
-(void)enumerateNeighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)neighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 ;
-(BOOL)getVector:(float*)arg1 forString:(id)arg2 ;
@end

