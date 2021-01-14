/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDSSearchEvChargingParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _networks;
	NSMutableArray* _ports;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_networks : 1;
		unsigned read_ports : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * ports; 
@property (nonatomic,retain) NSMutableArray * networks; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)networkType;
+(Class)portType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)networks;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setPorts:(NSMutableArray *)arg1 ;
-(void)setNetworks:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addPort:(id)arg1 ;
-(void)addNetwork:(id)arg1 ;
-(id)portAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)networksCount;
-(void)clearNetworks;
-(id)networkAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)ports;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)portsCount;
-(void)clearPorts;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

