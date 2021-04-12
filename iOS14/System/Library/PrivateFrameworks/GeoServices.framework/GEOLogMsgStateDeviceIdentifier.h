/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceHwIdentifier;
	NSString* _deviceOsVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _deviceDarkMode;
	BOOL _isInternalInstall;
	BOOL _isInternalTool;
	struct {
		unsigned has_deviceDarkMode : 1;
		unsigned has_isInternalInstall : 1;
		unsigned has_isInternalTool : 1;
		unsigned read_deviceHwIdentifier : 1;
		unsigned read_deviceOsVersion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDeviceOsVersion; 
@property (nonatomic,retain) NSString * deviceOsVersion; 
@property (nonatomic,readonly) BOOL hasDeviceHwIdentifier; 
@property (nonatomic,retain) NSString * deviceHwIdentifier; 
@property (assign,nonatomic) BOOL hasIsInternalTool; 
@property (assign,nonatomic) BOOL isInternalTool; 
@property (assign,nonatomic) BOOL hasIsInternalInstall; 
@property (assign,nonatomic) BOOL isInternalInstall; 
@property (assign,nonatomic) BOOL hasDeviceDarkMode; 
@property (assign,nonatomic) BOOL deviceDarkMode; 
+(BOOL)isValid:(id)arg1 ;
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasDeviceDarkMode;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setHasIsInternalTool:(BOOL)arg1 ;
-(BOOL)hasDeviceHwIdentifier;
-(NSString *)deviceOsVersion;
-(void)setIsInternalTool:(BOOL)arg1 ;
-(BOOL)hasDeviceOsVersion;
-(BOOL)hasIsInternalTool;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)deviceHwIdentifier;
-(id)initWithData:(id)arg1 ;
-(void)setDeviceOsVersion:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIsInternalInstall;
-(BOOL)deviceDarkMode;
-(id)description;
-(void)setHasDeviceDarkMode:(BOOL)arg1 ;
-(void)setDeviceDarkMode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)isInternalInstall;
-(void)setHasIsInternalInstall:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceHwIdentifier:(NSString *)arg1 ;
-(BOOL)isInternalTool;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

