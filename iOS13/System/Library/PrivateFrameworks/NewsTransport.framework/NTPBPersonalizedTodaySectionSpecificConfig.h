/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable <NSCopying> {

	unsigned long long _maxArticlesShown;
	NSMutableArray* _mandatoryArticles;
	NSMutableArray* _personalizedArticles;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,retain) NSMutableArray * mandatoryArticles;                 //@synthesize mandatoryArticles=_mandatoryArticles - In the implementation block
@property (nonatomic,retain) NSMutableArray * personalizedArticles;              //@synthesize personalizedArticles=_personalizedArticles - In the implementation block
@property (assign,nonatomic) BOOL hasMaxArticlesShown; 
@property (assign,nonatomic) unsigned long long maxArticlesShown;                //@synthesize maxArticlesShown=_maxArticlesShown - In the implementation block
+(Class)mandatoryArticlesType;
+(Class)personalizedArticlesType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)mandatoryArticles;
-(NSMutableArray *)personalizedArticles;
-(void)addMandatoryArticles:(id)arg1 ;
-(void)addPersonalizedArticles:(id)arg1 ;
-(void)setMaxArticlesShown:(unsigned long long)arg1 ;
-(void)setHasMaxArticlesShown:(BOOL)arg1 ;
-(BOOL)hasMaxArticlesShown;
-(unsigned long long)maxArticlesShown;
-(void)setMandatoryArticles:(NSMutableArray *)arg1 ;
-(void)setPersonalizedArticles:(NSMutableArray *)arg1 ;
-(void)clearMandatoryArticles;
-(unsigned long long)mandatoryArticlesCount;
-(id)mandatoryArticlesAtIndex:(unsigned long long)arg1 ;
-(void)clearPersonalizedArticles;
-(unsigned long long)personalizedArticlesCount;
-(id)personalizedArticlesAtIndex:(unsigned long long)arg1 ;
@end

