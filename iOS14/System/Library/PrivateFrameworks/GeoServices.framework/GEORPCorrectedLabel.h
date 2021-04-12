/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLatLng, NSString, NSMutableArray, GEOMapRegion;

@interface GEORPCorrectedLabel : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLatLng* _coordinate;
	NSString* _correctedValue;
	NSMutableArray* _featureHandles;
	GEOMapRegion* _featureRegion;
	NSString* _originalValue;
	unsigned long long _uid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _localizedLabels;
	struct {
		unsigned has_uid : 1;
		unsigned has_localizedLabels : 1;
		unsigned read_coordinate : 1;
		unsigned read_correctedValue : 1;
		unsigned read_featureHandles : 1;
		unsigned read_featureRegion : 1;
		unsigned read_originalValue : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOriginalValue; 
@property (nonatomic,retain) NSString * originalValue; 
@property (nonatomic,readonly) BOOL hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue; 
@property (nonatomic,readonly) BOOL hasFeatureRegion; 
@property (nonatomic,retain) GEOMapRegion * featureRegion; 
@property (nonatomic,retain) NSMutableArray * featureHandles; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (assign,nonatomic) BOOL hasUid; 
@property (assign,nonatomic) unsigned long long uid; 
@property (assign,nonatomic) BOOL hasLocalizedLabels; 
@property (assign,nonatomic) BOOL localizedLabels; 
+(Class)featureHandleType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUid:(unsigned long long)arg1 ;
-(BOOL)hasCoordinate;
-(unsigned long long)uid;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(GEOMapRegion *)featureRegion;
-(void)setFeatureRegion:(GEOMapRegion *)arg1 ;
-(void)addFeatureHandle:(id)arg1 ;
-(void)setLocalizedLabels:(BOOL)arg1 ;
-(unsigned long long)featureHandlesCount;
-(void)clearFeatureHandles;
-(id)featureHandleAtIndex:(unsigned long long)arg1 ;
-(void)setHasUid:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasFeatureRegion;
-(NSMutableArray *)featureHandles;
-(void)setFeatureHandles:(NSMutableArray *)arg1 ;
-(BOOL)localizedLabels;
-(void)setHasLocalizedLabels:(BOOL)arg1 ;
-(BOOL)hasLocalizedLabels;
-(BOOL)hasUid;
-(GEOLatLng *)coordinate;
-(NSString *)originalValue;
-(NSString *)correctedValue;
-(void)setOriginalValue:(NSString *)arg1 ;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

