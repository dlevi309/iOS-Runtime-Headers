/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_deviceInputLocale : 1;
		unsigned wrote_deviceOutputLocale : 1;
		unsigned wrote_deviceSettingsLocale : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDeviceSettingsLocale; 
@property (nonatomic,retain) NSString * deviceSettingsLocale; 
@property (nonatomic,readonly) BOOL hasDeviceInputLocale; 
@property (nonatomic,retain) NSString * deviceInputLocale; 
@property (nonatomic,readonly) BOOL hasDeviceOutputLocale; 
@property (nonatomic,retain) NSString * deviceOutputLocale; 
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
-(void)readAll:(BOOL)arg1 ;
-(void)_readDeviceSettingsLocale;
-(void)_readDeviceInputLocale;
-(void)_readDeviceOutputLocale;
-(NSString *)deviceSettingsLocale;
-(NSString *)deviceInputLocale;
-(NSString *)deviceOutputLocale;
-(void)setDeviceSettingsLocale:(NSString *)arg1 ;
-(void)setDeviceInputLocale:(NSString *)arg1 ;
-(void)setDeviceOutputLocale:(NSString *)arg1 ;
-(BOOL)hasDeviceSettingsLocale;
-(BOOL)hasDeviceInputLocale;
-(BOOL)hasDeviceOutputLocale;
@end

