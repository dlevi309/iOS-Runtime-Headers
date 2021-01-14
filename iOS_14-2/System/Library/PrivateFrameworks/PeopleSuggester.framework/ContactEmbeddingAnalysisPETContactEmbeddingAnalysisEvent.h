/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ContactEmbeddingAnalysisPETNeuralNetEmbedding;

@interface ContactEmbeddingAnalysisPETContactEmbeddingAnalysisEvent : PBCodable <NSCopying> {

	NSString* _contactId;
	ContactEmbeddingAnalysisPETNeuralNetEmbedding* _embeddingsAfterActivation;
	ContactEmbeddingAnalysisPETNeuralNetEmbedding* _embeddingsBeforeActivation;

}

@property (nonatomic,retain) ContactEmbeddingAnalysisPETNeuralNetEmbedding * embeddingsBeforeActivation;              //@synthesize embeddingsBeforeActivation=_embeddingsBeforeActivation - In the implementation block
@property (nonatomic,retain) ContactEmbeddingAnalysisPETNeuralNetEmbedding * embeddingsAfterActivation;               //@synthesize embeddingsAfterActivation=_embeddingsAfterActivation - In the implementation block
@property (nonatomic,retain) NSString * contactId;                                                                    //@synthesize contactId=_contactId - In the implementation block
-(id)dictionaryRepresentation;
-(void)setContactId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)contactId;
-(id)description;
-(ContactEmbeddingAnalysisPETNeuralNetEmbedding *)embeddingsBeforeActivation;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEmbeddingsBeforeActivation:(ContactEmbeddingAnalysisPETNeuralNetEmbedding *)arg1 ;
-(void)setEmbeddingsAfterActivation:(ContactEmbeddingAnalysisPETNeuralNetEmbedding *)arg1 ;
-(ContactEmbeddingAnalysisPETNeuralNetEmbedding *)embeddingsAfterActivation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

