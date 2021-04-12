/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLatLng;

@interface GEOCollectionPlace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _address;
	GEOLatLng* _coordinate;
	unsigned long long _muid;
	NSString* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _providerId;
	struct {
		unsigned has_muid : 1;
		unsigned has_providerId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_coordinate : 1;
		unsigned read_name : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_address : 1;
		unsigned wrote_coordinate : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_name : 1;
		unsigned wrote_providerId : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasProviderId; 
@property (assign,nonatomic) int providerId; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(GEOLatLng *)coordinate;
-(id)dictionaryRepresentation;
-(NSString *)address;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)hasAddress;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)_readName;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)_readAddress;
-(void)_readCoordinate;
-(BOOL)hasCoordinate;
-(int)providerId;
-(void)setProviderId:(int)arg1 ;
-(BOOL)hasProviderId;
-(void)setHasProviderId:(BOOL)arg1 ;
@end

