/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_localityName : 1;
		unsigned wrote_locationName : 1;
		unsigned wrote_secondaryLocationName : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocationName; 
@property (nonatomic,retain) NSString * locationName; 
@property (nonatomic,readonly) BOOL hasSecondaryLocationName; 
@property (nonatomic,retain) NSString * secondaryLocationName; 
@property (nonatomic,readonly) BOOL hasLocalityName; 
@property (nonatomic,retain) NSString * localityName; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)locationName;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readLocationName;
-(void)_readSecondaryLocationName;
-(void)_readLocalityName;
-(NSString *)secondaryLocationName;
-(NSString *)localityName;
-(void)setLocationName:(NSString *)arg1 ;
-(void)setSecondaryLocationName:(NSString *)arg1 ;
-(void)setLocalityName:(NSString *)arg1 ;
-(BOOL)hasLocationName;
-(BOOL)hasSecondaryLocationName;
-(BOOL)hasLocalityName;
@end

