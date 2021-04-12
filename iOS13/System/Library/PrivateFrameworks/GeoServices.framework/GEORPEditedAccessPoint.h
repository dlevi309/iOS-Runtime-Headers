/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORoadAccessPoint, GEORPCorrectedString;

@interface GEORPEditedAccessPoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORoadAccessPoint* _corrected;
	GEORPCorrectedString* _name;
	GEORoadAccessPoint* _original;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_corrected : 1;
		unsigned read_name : 1;
		unsigned read_original : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_corrected : 1;
		unsigned wrote_name : 1;
		unsigned wrote_original : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOriginal; 
@property (nonatomic,retain) GEORoadAccessPoint * original; 
@property (nonatomic,readonly) BOOL hasCorrected; 
@property (nonatomic,retain) GEORoadAccessPoint * corrected; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEORPCorrectedString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEORPCorrectedString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(GEORPCorrectedString *)arg1 ;
-(id)dictionaryRepresentation;
-(GEORoadAccessPoint *)original;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readOriginal;
-(void)_readCorrected;
-(void)_readName;
-(GEORoadAccessPoint *)corrected;
-(void)setOriginal:(GEORoadAccessPoint *)arg1 ;
-(void)setCorrected:(GEORoadAccessPoint *)arg1 ;
-(BOOL)hasOriginal;
-(BOOL)hasCorrected;
@end

