/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)wifi;
-(void)setWifi:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setUsb:(unsigned)arg1 ;
-(unsigned)usb;
-(BOOL)hasWifi;
-(void)setHasWifi:(BOOL)arg1 ;
-(void)setBt:(unsigned)arg1 ;
-(void)setHasBt:(BOOL)arg1 ;
-(BOOL)hasBt;
-(void)setHasUsb:(BOOL)arg1 ;
-(BOOL)hasUsb;
-(unsigned)bt;
@end

