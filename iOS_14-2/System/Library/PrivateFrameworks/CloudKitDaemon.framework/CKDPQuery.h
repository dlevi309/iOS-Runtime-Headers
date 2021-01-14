/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying> {

	NSMutableArray* _filters;
	int _queryOperator;
	NSMutableArray* _sorts;
	NSMutableArray* _types;
	BOOL _distinct;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,retain) NSMutableArray * types;                //@synthesize types=_types - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;              //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * sorts;                //@synthesize sorts=_sorts - In the implementation block
@property (assign,nonatomic) BOOL hasDistinct; 
@property (assign,nonatomic) BOOL distinct;                         //@synthesize distinct=_distinct - In the implementation block
@property (assign,nonatomic) BOOL hasQueryOperator; 
@property (assign,nonatomic) int queryOperator;                     //@synthesize queryOperator=_queryOperator - In the implementation block
+(Class)filtersType;
+(Class)typesType;
+(Class)sortsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)types;
-(void)clearFilters;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)addFilters:(id)arg1 ;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
-(void)setHasQueryOperator:(BOOL)arg1 ;
-(unsigned long long)filtersCount;
-(void)clearTypes;
-(unsigned long long)sortsCount;
-(void)setHasDistinct:(BOOL)arg1 ;
-(NSMutableArray *)sorts;
-(NSMutableArray *)filters;
-(void)mergeFrom:(id)arg1 ;
-(void)setSorts:(NSMutableArray *)arg1 ;
-(void)setQueryOperator:(int)arg1 ;
-(id)description;
-(void)clearSorts;
-(void)addSorts:(id)arg1 ;
-(id)sortsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)distinct;
-(BOOL)hasQueryOperator;
-(void)addTypes:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTypes:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDistinct:(BOOL)arg1 ;
-(int)queryOperator;
-(unsigned long long)typesCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)typesAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDistinct;
-(id)queryOperatorAsString:(int)arg1 ;
-(int)StringAsQueryOperator:(id)arg1 ;
@end

