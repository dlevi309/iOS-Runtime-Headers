/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDShardedId : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _basemapId;
	GEOLatLng* _center;
	unsigned long long _muid;
	int _mapsResultType;
	int _resultProviderId;
	struct {
		unsigned has_basemapId : 1;
		unsigned has_muid : 1;
		unsigned has_mapsResultType : 1;
		unsigned has_resultProviderId : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (assign,nonatomic) BOOL hasBasemapId; 
@property (assign,nonatomic) unsigned long long basemapId; 
@property (assign,nonatomic) BOOL hasMapsResultType; 
@property (assign,nonatomic) int mapsResultType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(int)resultProviderId;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(id)jsonRepresentation;
-(unsigned long long)basemapId;
-(BOOL)hasCenter;
-(void)setBasemapId:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMapsResultType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)StringAsMapsResultType:(id)arg1 ;
-(void)setHasMapsResultType:(BOOL)arg1 ;
-(id)description;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(unsigned long long)hash;
-(int)mapsResultType;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(void)copyTo:(id)arg1 ;
-(void)setHasBasemapId:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBasemapId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mapsResultTypeAsString:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasMapsResultType;
@end

