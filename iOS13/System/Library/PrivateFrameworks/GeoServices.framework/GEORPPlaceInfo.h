/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_placeRequest : 1;
		unsigned wrote_placeResponse : 1;
		unsigned wrote_sourceApplication : 1;
		unsigned wrote_sourceUrl : 1;
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
-(NSString *)sourceApplication;
-(void)readAll:(BOOL)arg1 ;
-(void)_readSourceApplication;
-(void)_readSourceUrl;
-(NSString *)sourceUrl;
-(void)setSourceApplication:(NSString *)arg1 ;
-(void)setSourceUrl:(NSString *)arg1 ;
-(BOOL)hasSourceApplication;
-(BOOL)hasSourceUrl;
-(void)_readPlaceRequest;
-(void)_readPlaceResponse;
-(GEOPDPlaceRequest *)placeRequest;
-(GEOPDPlaceResponse *)placeResponse;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(void)setPlaceResponse:(GEOPDPlaceResponse *)arg1 ;
-(BOOL)hasPlaceRequest;
-(BOOL)hasPlaceResponse;
-(void)clearLocations;
-(void)clearSessionId;
-(void)_clearLocationsFromPlaceRequest;
-(void)_clearLocationsFromPlaceResponse;
@end

