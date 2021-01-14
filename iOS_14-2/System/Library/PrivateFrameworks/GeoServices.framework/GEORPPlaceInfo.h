/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

@interface GEORPPlaceInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlaceResponse* _placeResponse;
	NSString* _sourceApplication;
	NSString* _sourceUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_placeRequest : 1;
		unsigned read_placeResponse : 1;
		unsigned read_sourceApplication : 1;
		unsigned read_sourceUrl : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (nonatomic,readonly) BOOL hasPlaceResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * placeResponse; 
@property (nonatomic,readonly) BOOL hasSourceApplication; 
@property (nonatomic,retain) NSString * sourceApplication; 
@property (nonatomic,readonly) BOOL hasSourceUrl; 
@property (nonatomic,retain) NSString * sourceUrl; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(BOOL)hasPlaceRequest;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)sourceApplication;
-(id)init;
-(id)jsonRepresentation;
-(GEOPDPlaceRequest *)placeRequest;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDPlaceResponse *)placeResponse;
-(BOOL)hasPlaceResponse;
-(void)setPlaceResponse:(GEOPDPlaceResponse *)arg1 ;
-(NSString *)sourceUrl;
-(void)setSourceApplication:(NSString *)arg1 ;
-(void)setSourceUrl:(NSString *)arg1 ;
-(BOOL)hasSourceApplication;
-(BOOL)hasSourceUrl;
-(id)description;
-(unsigned long long)hash;
-(void)clearSessionId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)_clearLocationsFromPlaceRequest;
-(void)_clearLocationsFromPlaceResponse;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

