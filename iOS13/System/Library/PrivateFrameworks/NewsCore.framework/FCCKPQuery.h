/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface FCCKPQuery : PBCodable <NSCopying> {

	NSMutableArray* _filters;
	int _queryOperator;
	NSMutableArray* _sorts;
	NSMutableArray* _types;
	BOOL _distinct;
	SCD_Struct_FC7 _has;

}

@property (nonatomic,retain) NSMutableArray * types;                //@synthesize types=_types - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;              //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * sorts;                //@synthesize sorts=_sorts - In the implementation block
@property (assign,nonatomic) BOOL hasDistinct; 
@property (assign,nonatomic) BOOL distinct;                         //@synthesize distinct=_distinct - In the implementation block
@property (assign,nonatomic) BOOL hasQueryOperator; 
@property (assign,nonatomic) int queryOperator;                     //@synthesize queryOperator=_queryOperator - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)filters;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)types;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(unsigned long long)typesCount;
-(void)clearTypes;
-(BOOL)distinct;
-(void)addFilters:(id)arg1 ;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
-(void)addTypes:(id)arg1 ;
-(void)setTypes:(NSMutableArray *)arg1 ;
-(void)setDistinct:(BOOL)arg1 ;
-(void)setSorts:(NSMutableArray *)arg1 ;
-(void)addSorts:(id)arg1 ;
-(id)typesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sortsCount;
-(void)clearSorts;
-(id)sortsAtIndex:(unsigned long long)arg1 ;
-(void)setHasDistinct:(BOOL)arg1 ;
-(BOOL)hasDistinct;
-(int)queryOperator;
-(void)setQueryOperator:(int)arg1 ;
-(void)setHasQueryOperator:(BOOL)arg1 ;
-(BOOL)hasQueryOperator;
-(NSMutableArray *)sorts;
@end

