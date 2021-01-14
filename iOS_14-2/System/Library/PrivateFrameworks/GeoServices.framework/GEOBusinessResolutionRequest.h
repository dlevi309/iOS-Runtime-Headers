/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLocation, NSString;

@interface GEOBusinessResolutionRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOLocation* _deviceLocation;
	NSString* _shortBusinessName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasShortBusinessName; 
@property (nonatomic,retain) NSString * shortBusinessName; 
@property (nonatomic,readonly) BOOL hasDeviceLocation; 
@property (nonatomic,retain) GEOLocation * deviceLocation; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(GEOLocation *)deviceLocation;
-(void)setDeviceLocation:(GEOLocation *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)shortBusinessName;
-(BOOL)hasDeviceLocation;
-(void)setShortBusinessName:(NSString *)arg1 ;
-(BOOL)hasShortBusinessName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

