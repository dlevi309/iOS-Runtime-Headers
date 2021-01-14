/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOPDLocationInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _localityName;
	NSString* _locationName;
	NSString* _secondaryLocationName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_localityName : 1;
		unsigned read_locationName : 1;
		unsigned read_secondaryLocationName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocationName; 
@property (nonatomic,retain) NSString * locationName; 
@property (nonatomic,readonly) BOOL hasSecondaryLocationName; 
@property (nonatomic,retain) NSString * secondaryLocationName; 
@property (nonatomic,readonly) BOOL hasLocalityName; 
@property (nonatomic,retain) NSString * localityName; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setSecondaryLocationName:(NSString *)arg1 ;
-(id)jsonRepresentation;
-(void)setLocationName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)localityName;
-(id)initWithData:(id)arg1 ;
-(NSString *)secondaryLocationName;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasLocationName;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSecondaryLocationName;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLocalityName:(NSString *)arg1 ;
-(BOOL)hasLocalityName;
-(NSString *)locationName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

