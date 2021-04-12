/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, NSString;

@interface GEOPDOfflineIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _latLng;
	unsigned long long _offlineId;
	NSString* _offlineName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_offlineId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_latLng : 1;
		unsigned read_offlineName : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_latLng : 1;
		unsigned wrote_offlineId : 1;
		unsigned wrote_offlineName : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOfflineName; 
@property (nonatomic,retain) NSString * offlineName; 
@property (assign,nonatomic) BOOL hasOfflineId; 
@property (assign,nonatomic) unsigned long long offlineId; 
@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOLatLng *)latLng;
-(void)_readLatLng;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)hasLatLng;
-(void)_readOfflineName;
-(NSString *)offlineName;
-(void)setOfflineName:(NSString *)arg1 ;
-(BOOL)hasOfflineName;
-(unsigned long long)offlineId;
-(void)setOfflineId:(unsigned long long)arg1 ;
-(void)setHasOfflineId:(BOOL)arg1 ;
-(BOOL)hasOfflineId;
@end

