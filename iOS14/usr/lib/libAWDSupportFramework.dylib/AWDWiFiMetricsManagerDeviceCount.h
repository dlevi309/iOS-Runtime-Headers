/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying> {

	double _timeSinceBoot;
	unsigned long long _timestamp;
	unsigned _deviceCount;
	unsigned _deviceIdentifierMap;
	unsigned _deviceInitFailureReason;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceCount; 
@property (assign,nonatomic) unsigned deviceCount;                          //@synthesize deviceCount=_deviceCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceBoot; 
@property (assign,nonatomic) double timeSinceBoot;                          //@synthesize timeSinceBoot=_timeSinceBoot - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceIdentifierMap; 
@property (assign,nonatomic) unsigned deviceIdentifierMap;                  //@synthesize deviceIdentifierMap=_deviceIdentifierMap - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceInitFailureReason; 
@property (assign,nonatomic) unsigned deviceInitFailureReason;              //@synthesize deviceInitFailureReason=_deviceInitFailureReason - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)deviceCount;
-(void)setDeviceCount:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDeviceCount:(BOOL)arg1 ;
-(BOOL)hasDeviceCount;
-(void)setTimeSinceBoot:(double)arg1 ;
-(void)setHasTimeSinceBoot:(BOOL)arg1 ;
-(BOOL)hasTimeSinceBoot;
-(void)setDeviceIdentifierMap:(unsigned)arg1 ;
-(void)setHasDeviceIdentifierMap:(BOOL)arg1 ;
-(BOOL)hasDeviceIdentifierMap;
-(void)setDeviceInitFailureReason:(unsigned)arg1 ;
-(void)setHasDeviceInitFailureReason:(BOOL)arg1 ;
-(BOOL)hasDeviceInitFailureReason;
-(double)timeSinceBoot;
-(unsigned)deviceIdentifierMap;
-(unsigned)deviceInitFailureReason;
@end

