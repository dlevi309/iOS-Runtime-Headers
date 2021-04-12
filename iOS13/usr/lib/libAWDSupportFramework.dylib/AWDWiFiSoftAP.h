/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiSoftAP : PBCodable <NSCopying> {

	unsigned long long _lowPowerModeDuration;
	unsigned long long _misToSoftAPActiveTimeInMilliseconds;
	unsigned long long _sessionDuration;
	unsigned long long _timestamp;
	unsigned _appleDeviceConnectCount;
	unsigned _appleDeviceDisconnectCount;
	unsigned _bringUpMethod;
	unsigned _channel;
	unsigned _otherDeviceConnectCount;
	unsigned _otherDeviceDisconnectCount;
	unsigned _reasonCode;
	unsigned _ssidChanged;
	unsigned _teardownReason;
	BOOL _familyDevice;
	SCD_Struct_AW22 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMisToSoftAPActiveTimeInMilliseconds; 
@property (assign,nonatomic) unsigned long long misToSoftAPActiveTimeInMilliseconds;              //@synthesize misToSoftAPActiveTimeInMilliseconds=_misToSoftAPActiveTimeInMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasBringUpMethod; 
@property (assign,nonatomic) unsigned bringUpMethod;                                              //@synthesize bringUpMethod=_bringUpMethod - In the implementation block
@property (assign,nonatomic) BOOL hasReasonCode; 
@property (assign,nonatomic) unsigned reasonCode;                                                 //@synthesize reasonCode=_reasonCode - In the implementation block
@property (assign,nonatomic) BOOL hasTeardownReason; 
@property (assign,nonatomic) unsigned teardownReason;                                             //@synthesize teardownReason=_teardownReason - In the implementation block
@property (assign,nonatomic) BOOL hasSessionDuration; 
@property (assign,nonatomic) unsigned long long sessionDuration;                                  //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) BOOL hasAppleDeviceConnectCount; 
@property (assign,nonatomic) unsigned appleDeviceConnectCount;                                    //@synthesize appleDeviceConnectCount=_appleDeviceConnectCount - In the implementation block
@property (assign,nonatomic) BOOL hasOtherDeviceConnectCount; 
@property (assign,nonatomic) unsigned otherDeviceConnectCount;                                    //@synthesize otherDeviceConnectCount=_otherDeviceConnectCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppleDeviceDisconnectCount; 
@property (assign,nonatomic) unsigned appleDeviceDisconnectCount;                                 //@synthesize appleDeviceDisconnectCount=_appleDeviceDisconnectCount - In the implementation block
@property (assign,nonatomic) BOOL hasOtherDeviceDisconnectCount; 
@property (assign,nonatomic) unsigned otherDeviceDisconnectCount;                                 //@synthesize otherDeviceDisconnectCount=_otherDeviceDisconnectCount - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                                                    //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasSsidChanged; 
@property (assign,nonatomic) unsigned ssidChanged;                                                //@synthesize ssidChanged=_ssidChanged - In the implementation block
@property (assign,nonatomic) BOOL hasFamilyDevice; 
@property (assign,nonatomic) BOOL familyDevice;                                                   //@synthesize familyDevice=_familyDevice - In the implementation block
@property (assign,nonatomic) BOOL hasLowPowerModeDuration; 
@property (assign,nonatomic) unsigned long long lowPowerModeDuration;                             //@synthesize lowPowerModeDuration=_lowPowerModeDuration - In the implementation block
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
-(unsigned)channel;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(unsigned)reasonCode;
-(void)setReasonCode:(unsigned)arg1 ;
-(unsigned long long)sessionDuration;
-(void)setSessionDuration:(unsigned long long)arg1 ;
-(void)setHasReasonCode:(BOOL)arg1 ;
-(BOOL)hasReasonCode;
-(void)setMisToSoftAPActiveTimeInMilliseconds:(unsigned long long)arg1 ;
-(void)setHasMisToSoftAPActiveTimeInMilliseconds:(BOOL)arg1 ;
-(BOOL)hasMisToSoftAPActiveTimeInMilliseconds;
-(void)setBringUpMethod:(unsigned)arg1 ;
-(void)setHasBringUpMethod:(BOOL)arg1 ;
-(BOOL)hasBringUpMethod;
-(void)setTeardownReason:(unsigned)arg1 ;
-(void)setHasTeardownReason:(BOOL)arg1 ;
-(BOOL)hasTeardownReason;
-(void)setHasSessionDuration:(BOOL)arg1 ;
-(BOOL)hasSessionDuration;
-(void)setAppleDeviceConnectCount:(unsigned)arg1 ;
-(void)setHasAppleDeviceConnectCount:(BOOL)arg1 ;
-(BOOL)hasAppleDeviceConnectCount;
-(void)setOtherDeviceConnectCount:(unsigned)arg1 ;
-(void)setHasOtherDeviceConnectCount:(BOOL)arg1 ;
-(BOOL)hasOtherDeviceConnectCount;
-(void)setAppleDeviceDisconnectCount:(unsigned)arg1 ;
-(void)setHasAppleDeviceDisconnectCount:(BOOL)arg1 ;
-(BOOL)hasAppleDeviceDisconnectCount;
-(void)setOtherDeviceDisconnectCount:(unsigned)arg1 ;
-(void)setHasOtherDeviceDisconnectCount:(BOOL)arg1 ;
-(BOOL)hasOtherDeviceDisconnectCount;
-(void)setSsidChanged:(unsigned)arg1 ;
-(void)setHasSsidChanged:(BOOL)arg1 ;
-(BOOL)hasSsidChanged;
-(void)setFamilyDevice:(BOOL)arg1 ;
-(void)setHasFamilyDevice:(BOOL)arg1 ;
-(BOOL)hasFamilyDevice;
-(void)setLowPowerModeDuration:(unsigned long long)arg1 ;
-(void)setHasLowPowerModeDuration:(BOOL)arg1 ;
-(BOOL)hasLowPowerModeDuration;
-(unsigned long long)misToSoftAPActiveTimeInMilliseconds;
-(unsigned)bringUpMethod;
-(unsigned)teardownReason;
-(unsigned)appleDeviceConnectCount;
-(unsigned)otherDeviceConnectCount;
-(unsigned)appleDeviceDisconnectCount;
-(unsigned)otherDeviceDisconnectCount;
-(unsigned)ssidChanged;
-(BOOL)familyDevice;
-(unsigned long long)lowPowerModeDuration;
@end

