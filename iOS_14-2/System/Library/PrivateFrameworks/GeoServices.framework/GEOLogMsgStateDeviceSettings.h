/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateDeviceSettings : PBCodable <NSCopying> {

	BOOL _deviceDarkMode;
	BOOL _isAltAccountPairedDevice;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasDeviceDarkMode; 
@property (assign,nonatomic) BOOL deviceDarkMode; 
@property (assign,nonatomic) BOOL hasIsAltAccountPairedDevice; 
@property (assign,nonatomic) BOOL isAltAccountPairedDevice; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasDeviceDarkMode;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setIsAltAccountPairedDevice:(BOOL)arg1 ;
-(BOOL)deviceDarkMode;
-(id)description;
-(void)setHasIsAltAccountPairedDevice:(BOOL)arg1 ;
-(void)setHasDeviceDarkMode:(BOOL)arg1 ;
-(void)setDeviceDarkMode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)isAltAccountPairedDevice;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasIsAltAccountPairedDevice;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

