/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDSTransportHint;

@interface GEOPDSSearchLocationParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDSTransportHint* _searchTransportHint;
	int _searchLocationParametersType;
	struct {
		unsigned has_searchLocationParametersType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSearchLocationParametersType; 
@property (assign,nonatomic) int searchLocationParametersType; 
@property (nonatomic,readonly) BOOL hasSearchTransportHint; 
@property (nonatomic,retain) GEOPDSTransportHint * searchTransportHint; 
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
-(GEOPDSTransportHint *)searchTransportHint;
-(void)setSearchTransportHint:(GEOPDSTransportHint *)arg1 ;
-(int)searchLocationParametersType;
-(void)setSearchLocationParametersType:(int)arg1 ;
-(void)setHasSearchLocationParametersType:(BOOL)arg1 ;
-(BOOL)hasSearchLocationParametersType;
-(id)searchLocationParametersTypeAsString:(int)arg1 ;
-(int)StringAsSearchLocationParametersType:(id)arg1 ;
-(BOOL)hasSearchTransportHint;
@end

