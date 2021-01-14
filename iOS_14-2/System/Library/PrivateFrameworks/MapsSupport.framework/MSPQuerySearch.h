/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOMapRegion;

@interface MSPQuerySearch : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _language;
	NSString* _locationDisplayString;
	GEOMapRegion* _mapRegion;
	NSString* _query;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query;                               //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationDisplayString; 
@property (nonatomic,retain) NSString * locationDisplayString;               //@synthesize locationDisplayString=_locationDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                            //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(NSString *)query;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLanguage;
-(void)setLanguage:(NSString *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(BOOL)hasMapRegion;
-(id)description;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)locationDisplayString;
-(void)setLocationDisplayString:(NSString *)arg1 ;
-(BOOL)hasLocationDisplayString;
@end

