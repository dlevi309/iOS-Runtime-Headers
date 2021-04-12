/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOPDOrientedBoundingBox;

@interface GEOPDStorefrontFace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _features;
	GEOPDOrientedBoundingBox* _geometry;
	unsigned long long _groupId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_groupId : 1;
		unsigned read_features : 1;
		unsigned read_geometry : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasGeometry; 
@property (nonatomic,retain) GEOPDOrientedBoundingBox * geometry; 
@property (nonatomic,retain) NSMutableArray * features; 
@property (assign,nonatomic) BOOL hasGroupId; 
@property (assign,nonatomic) unsigned long long groupId; 
+(Class)featureType;
+(BOOL)isValid:(id)arg1 ;
-(GEOPDOrientedBoundingBox *)geometry;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSMutableArray *)features;
-(id)jsonRepresentation;
-(unsigned long long)groupId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setFeatures:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)hasGeometry;
-(void)setGroupId:(unsigned long long)arg1 ;
-(void)setGeometry:(GEOPDOrientedBoundingBox *)arg1 ;
-(unsigned long long)hash;
-(void)addFeature:(id)arg1 ;
-(unsigned long long)featuresCount;
-(void)clearFeatures;
-(id)featureAtIndex:(unsigned long long)arg1 ;
-(void)setHasGroupId:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasGroupId;
@end

