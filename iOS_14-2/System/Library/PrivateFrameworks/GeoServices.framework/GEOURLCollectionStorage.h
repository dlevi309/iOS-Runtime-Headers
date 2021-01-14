/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOURLCollectionStorage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _name;
	NSMutableArray* _places;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_name : 1;
		unsigned read_places : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSMutableArray * places; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)placeType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(NSMutableArray *)places;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)addPlace:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(unsigned long long)placesCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearPlaces;
-(id)placeAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

