/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLatLng;

@interface GEOLogMsgEventTransitAppLaunch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _bundleIdentifier;
	GEOLatLng* _destination;
	GEOLatLng* _source;
	double _timestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_timestamp : 1;
		unsigned read_bundleIdentifier : 1;
		unsigned read_destination : 1;
		unsigned read_source : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) GEOLatLng * source; 
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOLatLng * destination; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSource;
-(void)setDestination:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(double)timestamp;
-(NSString *)bundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSource:(GEOLatLng *)arg1 ;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasDestination;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(GEOLatLng *)destination;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEOLatLng *)source;
@end

