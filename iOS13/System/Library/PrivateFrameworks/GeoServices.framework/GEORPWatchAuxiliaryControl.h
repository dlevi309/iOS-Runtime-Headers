/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_hardwareIdentifier : 1;
		unsigned wrote_osBuild : 1;
		unsigned wrote_osVersion : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasHardwareIdentifier; 
@property (nonatomic,retain) NSString * hardwareIdentifier; 
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion; 
@property (nonatomic,readonly) BOOL hasOsBuild; 
@property (nonatomic,retain) NSString * osBuild; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)osBuild;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)hardwareIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(void)_readHardwareIdentifier;
-(void)_readOsVersion;
-(void)_readOsBuild;
-(NSString *)osVersion;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(BOOL)hasHardwareIdentifier;
-(BOOL)hasOsVersion;
-(BOOL)hasOsBuild;
@end

