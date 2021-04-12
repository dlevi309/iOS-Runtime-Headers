/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEOPDTripLink : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSData* _linkGeometry;
	unsigned long long _linkId;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasLinkId; 
@property (assign,nonatomic) unsigned long long linkId; 
@property (nonatomic,readonly) BOOL hasLinkGeometry; 
@property (nonatomic,retain) NSData * linkGeometry; 
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
-(BOOL)hasLinkGeometry;
-(NSData *)linkGeometry;
-(void)setLinkGeometry:(NSData *)arg1 ;
-(unsigned long long)linkId;
-(void)setLinkId:(unsigned long long)arg1 ;
-(void)setHasLinkId:(BOOL)arg1 ;
-(BOOL)hasLinkId;
@end

