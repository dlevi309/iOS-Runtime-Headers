/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPPoiWifiAccessPoint : PBCodable <NSCopying> {

	double _age;
	double _scanTimestamp;
	int _channel;
	NSString* _mac;
	int _rssi;
	SCD_Struct_CL9 _has;

}

@property (nonatomic,retain) NSString * mac;                     //@synthesize mac=_mac - In the implementation block
@property (assign,nonatomic) int rssi;                           //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) int channel;                        //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) double age;                         //@synthesize age=_age - In the implementation block
@property (assign,nonatomic) BOOL hasScanTimestamp; 
@property (assign,nonatomic) double scanTimestamp;               //@synthesize scanTimestamp=_scanTimestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)channel;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)setChannel:(int)arg1 ;
-(double)scanTimestamp;
-(void)setScanTimestamp:(double)arg1 ;
-(void)setHasScanTimestamp:(BOOL)arg1 ;
-(BOOL)hasScanTimestamp;
-(double)age;
-(void)setAge:(double)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
-(NSString *)mac;
-(void)setMac:(NSString *)arg1 ;
@end

