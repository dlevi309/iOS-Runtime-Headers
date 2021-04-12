/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOResource;

@interface GEOStaleResource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOResource* _desiredResource;
	GEOResource* _fallbackResource;
	double _originalTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_originalTimestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_desiredResource : 1;
		unsigned read_fallbackResource : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_desiredResource : 1;
		unsigned wrote_fallbackResource : 1;
		unsigned wrote_originalTimestamp : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDesiredResource; 
@property (nonatomic,retain) GEOResource * desiredResource; 
@property (nonatomic,readonly) BOOL hasFallbackResource; 
@property (nonatomic,retain) GEOResource * fallbackResource; 
@property (assign,nonatomic) BOOL hasOriginalTimestamp; 
@property (assign,nonatomic) double originalTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(double)originalTimestamp;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOResource *)desiredResource;
-(BOOL)hasFallbackResource;
-(GEOResource *)fallbackResource;
-(void)setDesiredResource:(GEOResource *)arg1 ;
-(void)setFallbackResource:(GEOResource *)arg1 ;
-(void)setOriginalTimestamp:(double)arg1 ;
-(BOOL)hasOriginalTimestamp;
-(void)_readDesiredResource;
-(void)_readFallbackResource;
-(BOOL)hasDesiredResource;
-(void)setHasOriginalTimestamp:(BOOL)arg1 ;
@end

