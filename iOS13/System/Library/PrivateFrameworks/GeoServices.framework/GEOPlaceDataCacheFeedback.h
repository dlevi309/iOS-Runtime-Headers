/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOPDPlaceRequest;

@interface GEOPlaceDataCacheFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _bundleIdentifier;
	GEOPDPlaceRequest* _request;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_bundleIdentifier : 1;
		unsigned read_request : 1;
		unsigned wrote_bundleIdentifier : 1;
		unsigned wrote_request : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * request; 
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(GEOPDPlaceRequest *)arg1 ;
-(GEOPDPlaceRequest *)request;
-(void)readAll:(BOOL)arg1 ;
-(void)_readRequest;
-(BOOL)hasRequest;
-(void)_readBundleIdentifier;
-(BOOL)hasBundleIdentifier;
@end

