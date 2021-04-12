/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAccessPointCorrections, GEORPFeedbackAddressFields, GEORPCorrectedCoordinate, GEORPMapLocation;

@interface GEORPAddressCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAccessPointCorrections* _accessPoint;
	GEORPFeedbackAddressFields* _addressFields;
	GEORPCorrectedCoordinate* _coordinate;
	GEORPMapLocation* _mapLocation;
	GEORPFeedbackAddressFields* _originalAddressFields;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_accessPoint : 1;
		unsigned read_addressFields : 1;
		unsigned read_coordinate : 1;
		unsigned read_mapLocation : 1;
		unsigned read_originalAddressFields : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_accessPoint : 1;
		unsigned wrote_addressFields : 1;
		unsigned wrote_coordinate : 1;
		unsigned wrote_mapLocation : 1;
		unsigned wrote_originalAddressFields : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddressFields; 
@property (nonatomic,retain) GEORPFeedbackAddressFields * addressFields; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * coordinate; 
@property (nonatomic,readonly) BOOL hasMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * mapLocation; 
@property (nonatomic,readonly) BOOL hasAccessPoint; 
@property (nonatomic,retain) GEORPAccessPointCorrections * accessPoint; 
@property (nonatomic,readonly) BOOL hasOriginalAddressFields; 
@property (nonatomic,retain) GEORPFeedbackAddressFields * originalAddressFields; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEORPCorrectedCoordinate *)coordinate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCoordinate;
-(BOOL)hasCoordinate;
-(void)_readMapLocation;
-(GEORPMapLocation *)mapLocation;
-(void)setMapLocation:(GEORPMapLocation *)arg1 ;
-(BOOL)hasMapLocation;
-(void)_readAccessPoint;
-(GEORPAccessPointCorrections *)accessPoint;
-(void)setAccessPoint:(GEORPAccessPointCorrections *)arg1 ;
-(BOOL)hasAccessPoint;
-(void)_readAddressFields;
-(void)_readOriginalAddressFields;
-(GEORPFeedbackAddressFields *)addressFields;
-(GEORPFeedbackAddressFields *)originalAddressFields;
-(void)setAddressFields:(GEORPFeedbackAddressFields *)arg1 ;
-(void)setOriginalAddressFields:(GEORPFeedbackAddressFields *)arg1 ;
-(BOOL)hasAddressFields;
-(BOOL)hasOriginalAddressFields;
@end

