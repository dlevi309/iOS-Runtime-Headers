/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDResolvedItem : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _extractedTerm;
	int _resolvedItemType;
	unsigned _resultIndex;
	SCD_Struct_GE33 _flags;

}

@property (nonatomic,readonly) BOOL hasExtractedTerm; 
@property (nonatomic,retain) NSString * extractedTerm; 
@property (assign,nonatomic) BOOL hasResolvedItemType; 
@property (assign,nonatomic) int resolvedItemType; 
@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) unsigned resultIndex; 
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
-(int)resolvedItemType;
-(void)setResultIndex:(unsigned)arg1 ;
-(BOOL)hasResolvedItemType;
-(void)setResolvedItemType:(int)arg1 ;
-(BOOL)hasExtractedTerm;
-(NSString *)extractedTerm;
-(unsigned)resultIndex;
-(BOOL)hasResultIndex;
-(void)setExtractedTerm:(NSString *)arg1 ;
-(void)setHasResolvedItemType:(BOOL)arg1 ;
-(id)resolvedItemTypeAsString:(int)arg1 ;
-(int)StringAsResolvedItemType:(id)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
@end

