/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_name : 1;
		unsigned wrote_places : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSMutableArray * places; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)placeType;
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(unsigned long long)placesCount;
-(NSMutableArray *)places;
-(void)addPlace:(id)arg1 ;
-(void)clearPlaces;
-(id)placeAtIndex:(unsigned long long)arg1 ;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(void)_readPlaces;
-(void)_addNoFlagsPlace:(id)arg1 ;
@end

