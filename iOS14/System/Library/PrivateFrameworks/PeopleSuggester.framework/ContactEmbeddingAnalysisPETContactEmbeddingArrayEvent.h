/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ContactEmbeddingAnalysisPETContactEmbeddingArrayEvent : PBCodable <NSCopying> {

	NSMutableArray* _contactEmbeddings;
	NSString* _sessinobd;
	NSString* _userId;

}

@property (nonatomic,retain) NSString * sessinobd;                            //@synthesize sessinobd=_sessinobd - In the implementation block
@property (nonatomic,retain) NSString * userId;                               //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSMutableArray * contactEmbeddings;              //@synthesize contactEmbeddings=_contactEmbeddings - In the implementation block
+(Class)contactEmbeddingType;
-(void)setUserId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)userId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addContactEmbedding:(id)arg1 ;
-(void)setSessinobd:(NSString *)arg1 ;
-(unsigned long long)contactEmbeddingsCount;
-(void)clearContactEmbeddings;
-(id)contactEmbeddingAtIndex:(unsigned long long)arg1 ;
-(NSString *)sessinobd;
-(NSMutableArray *)contactEmbeddings;
-(void)setContactEmbeddings:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

