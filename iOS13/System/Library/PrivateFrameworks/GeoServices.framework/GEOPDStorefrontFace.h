/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_features : 1;
		unsigned wrote_geometry : 1;
		unsigned wrote_groupId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasGeometry; 
@property (nonatomic,retain) GEOPDOrientedBoundingBox * geometry; 
@property (nonatomic,retain) NSMutableArray * features; 
@property (assign,nonatomic) BOOL hasGroupId; 
@property (assign,nonatomic) unsigned long long groupId; 
+(BOOL)isValid:(id)arg1 ;
+(Class)featureType;
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
-(NSMutableArray *)features;
-(GEOPDOrientedBoundingBox *)geometry;
-(void)setGeometry:(GEOPDOrientedBoundingBox *)arg1 ;
-(BOOL)hasGeometry;
-(void)readAll:(BOOL)arg1 ;
-(void)_readGeometry;
-(void)_readFeatures;
-(void)_addNoFlagsFeature:(id)arg1 ;
-(unsigned long long)featuresCount;
-(void)clearFeatures;
-(id)featureAtIndex:(unsigned long long)arg1 ;
-(void)addFeature:(id)arg1 ;
-(void)setFeatures:(NSMutableArray *)arg1 ;
-(unsigned long long)groupId;
-(void)setGroupId:(unsigned long long)arg1 ;
-(void)setHasGroupId:(BOOL)arg1 ;
-(BOOL)hasGroupId;
@end

