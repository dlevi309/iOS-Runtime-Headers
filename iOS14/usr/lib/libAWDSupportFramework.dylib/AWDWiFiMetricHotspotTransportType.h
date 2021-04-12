/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricHotspotTransportType : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _bt;
	unsigned _usb;
	unsigned _wifi;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasWifi; 
@property (assign,nonatomic) unsigned wifi;                             //@synthesize wifi=_wifi - In the implementation block
@property (assign,nonatomic) BOOL hasBt; 
@property (assign,nonatomic) unsigned bt;                               //@synthesize bt=_bt - In the implementation block
@property (assign,nonatomic) BOOL hasUsb; 
@property (assign,nonatomic) unsigned usb;                              //@synthesize usb=_usb - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)bt;
-(unsigned)usb;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)wifi;
-(BOOL)hasBt;
-(id)description;
-(void)setBt:(unsigned)arg1 ;
-(BOOL)hasUsb;
-(void)setWifi:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setUsb:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasWifi;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasWifi:(BOOL)arg1 ;
-(void)setHasBt:(BOOL)arg1 ;
-(void)setHasUsb:(BOOL)arg1 ;
@end

