/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceInputLocale;
	NSString* _deviceOutputLocale;
	NSString* _deviceSettingsLocale;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_deviceInputLocale : 1;
		unsigned read_deviceOutputLocale : 1;
		unsigned read_deviceSettingsLocale : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDeviceSettingsLocale; 
@property (nonatomic,retain) NSString * deviceSettingsLocale; 
@property (nonatomic,readonly) BOOL hasDeviceInputLocale; 
@property (nonatomic,retain) NSString * deviceInputLocale; 
@property (nonatomic,readonly) BOOL hasDeviceOutputLocale; 
@property (nonatomic,retain) NSString * deviceOutputLocale; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasDeviceSettingsLocale;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasDeviceOutputLocale;
-(void)setDeviceInputLocale:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)deviceInputLocale;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDeviceSettingsLocale:(NSString *)arg1 ;
-(id)description;
-(NSString *)deviceSettingsLocale;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDeviceInputLocale;
-(NSString *)deviceOutputLocale;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDeviceOutputLocale:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

