/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_area : 1;
		unsigned wrote_boundingBoxs : 1;
		unsigned wrote_geohashes : 1;
		unsigned wrote_name : 1;
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
-(void)_readName;
-(NSString *)area;
-(void)setArea:(NSString *)arg1 ;
-(BOOL)hasArea;
-(void)_readArea;
-(void)_readGeohashes;
-(void)_addNoFlagsGeohashes:(id)arg1 ;
-(void)_readBoundingBoxs;
-(void)_addNoFlagsBoundingBox:(id)arg1 ;
-(NSMutableArray *)geohashes;
-(unsigned long long)geohashesCount;
-(void)clearGeohashes;
-(id)geohashesAtIndex:(unsigned long long)arg1 ;
-(void)addGeohashes:(id)arg1 ;
-(unsigned long long)boundingBoxsCount;
-(void)clearBoundingBoxs;
-(id)boundingBoxAtIndex:(unsigned long long)arg1 ;
-(void)addBoundingBox:(id)arg1 ;
-(void)setGeohashes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)boundingBoxs;
-(void)setBoundingBoxs:(NSMutableArray *)arg1 ;
@end

