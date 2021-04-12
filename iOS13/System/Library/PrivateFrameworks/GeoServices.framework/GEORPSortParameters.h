/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEORPSortParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _sortBy;
	int _sortDirection;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasSortBy; 
@property (assign,nonatomic) int sortBy; 
@property (assign,nonatomic) BOOL hasSortDirection; 
@property (assign,nonatomic) int sortDirection; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)sortBy;
-(void)setSortBy:(int)arg1 ;
-(void)setHasSortBy:(BOOL)arg1 ;
-(BOOL)hasSortBy;
-(id)sortByAsString:(int)arg1 ;
-(int)StringAsSortBy:(id)arg1 ;
-(int)sortDirection;
-(void)setSortDirection:(int)arg1 ;
-(void)setHasSortDirection:(BOOL)arg1 ;
-(BOOL)hasSortDirection;
-(id)sortDirectionAsString:(int)arg1 ;
-(int)StringAsSortDirection:(id)arg1 ;
@end

