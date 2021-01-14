/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOTrafficRegion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _area;
	NSMutableArray* _boundingBoxs;
	NSMutableArray* _geohashes;
	NSString* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_area : 1;
		unsigned read_boundingBoxs : 1;
		unsigned read_geohashes : 1;
		unsigned read_name : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSMutableArray * geohashes; 
@property (nonatomic,readonly) BOOL hasArea; 
@property (nonatomic,retain) NSString * area; 
@property (nonatomic,retain) NSMutableArray * boundingBoxs; 
+(BOOL)isValid:(id)arg1 ;
+(Class)geohashesType;
+(Class)boundingBoxType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)area;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasArea;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setArea:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)geohashes;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addBoundingBox:(id)arg1 ;
-(void)addGeohashes:(id)arg1 ;
-(unsigned long long)geohashesCount;
-(void)clearGeohashes;
-(id)geohashesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)boundingBoxsCount;
-(void)clearBoundingBoxs;
-(id)boundingBoxAtIndex:(unsigned long long)arg1 ;
-(void)setGeohashes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)boundingBoxs;
-(void)setBoundingBoxs:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

