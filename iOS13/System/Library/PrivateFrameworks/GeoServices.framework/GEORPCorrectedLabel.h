/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_coordinate : 1;
		unsigned wrote_correctedValue : 1;
		unsigned wrote_featureHandles : 1;
		unsigned wrote_featureRegion : 1;
		unsigned wrote_originalValue : 1;
		unsigned wrote_uid : 1;
		unsigned wrote_localizedLabels : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)featureHandleType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOLatLng *)coordinate;
-(id)dictionaryRepresentation;
-(unsigned long long)uid;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUid:(unsigned long long)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readOriginalValue;
-(void)_readCorrectedValue;
-(NSString *)originalValue;
-(NSString *)correctedValue;
-(void)setOriginalValue:(NSString *)arg1 ;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(void)_readCoordinate;
-(BOOL)hasCoordinate;
-(void)_readFeatureRegion;
-(void)_readFeatureHandles;
-(void)_addNoFlagsFeatureHandle:(id)arg1 ;
-(GEOMapRegion *)featureRegion;
-(void)setFeatureRegion:(GEOMapRegion *)arg1 ;
-(unsigned long long)featureHandlesCount;
-(void)clearFeatureHandles;
-(id)featureHandleAtIndex:(unsigned long long)arg1 ;
-(void)addFeatureHandle:(id)arg1 ;
-(BOOL)hasFeatureRegion;
-(NSMutableArray *)featureHandles;
-(void)setFeatureHandles:(NSMutableArray *)arg1 ;
-(void)setHasUid:(BOOL)arg1 ;
-(BOOL)hasUid;
-(BOOL)localizedLabels;
-(void)setLocalizedLabels:(BOOL)arg1 ;
-(void)setHasLocalizedLabels:(BOOL)arg1 ;
-(BOOL)hasLocalizedLabels;
@end

