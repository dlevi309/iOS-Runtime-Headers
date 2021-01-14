/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _hardwareIdentifier;
	NSString* _osBuild;
	NSString* _osVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_hardwareIdentifier : 1;
		unsigned read_osBuild : 1;
		unsigned read_osVersion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasHardwareIdentifier; 
@property (nonatomic,retain) NSString * hardwareIdentifier; 
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion; 
@property (nonatomic,readonly) BOOL hasOsBuild; 
@property (nonatomic,retain) NSString * osBuild; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasOsVersion;
-(NSString *)hardwareIdentifier;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)osBuild;
-(NSString *)osVersion;
-(BOOL)hasOsBuild;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasHardwareIdentifier;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setOsBuild:(NSString *)arg1 ;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

