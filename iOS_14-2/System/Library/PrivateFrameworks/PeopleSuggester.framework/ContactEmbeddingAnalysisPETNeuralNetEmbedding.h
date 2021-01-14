/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ContactEmbeddingAnalysisPETNeuralNetEmbedding : PBCodable <NSCopying> {

	SCD_Struct_Co3* _embeddings;

}

@property (nonatomic,readonly) unsigned long long embeddingsCount; 
@property (nonatomic,readonly) float* embeddings; 
-(id)dictionaryRepresentation;
-(unsigned long long)embeddingsCount;
-(void)clearEmbeddings;
-(float)embeddingsAtIndex:(unsigned long long)arg1 ;
-(void)addEmbeddings:(float)arg1 ;
-(float*)embeddings;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEmbeddings:(float*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

