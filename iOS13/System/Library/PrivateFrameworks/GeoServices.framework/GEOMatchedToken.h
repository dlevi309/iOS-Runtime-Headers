/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOMatchedToken : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE68* _geoIds;
	NSString* _matchedToken;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _geoType;
	struct {
		unsigned has_geoType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_geoIds : 1;
		unsigned read_matchedToken : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_geoIds : 1;
		unsigned wrote_matchedToken : 1;
		unsigned wrote_geoType : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * matchedToken; 
@property (assign,nonatomic) BOOL hasGeoType; 
@property (assign,nonatomic) int geoType; 
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) unsigned long long* geoIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
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
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readGeoIds;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(unsigned long long*)geoIds;
-(void)setGeoIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(void)addGeoId:(unsigned long long)arg1 ;
-(void)_readMatchedToken;
-(void)_addNoFlagsGeoId:(unsigned long long)arg1 ;
-(NSString *)matchedToken;
-(void)setMatchedToken:(NSString *)arg1 ;
-(int)geoType;
-(void)setGeoType:(int)arg1 ;
-(void)setHasGeoType:(BOOL)arg1 ;
-(BOOL)hasGeoType;
@end

