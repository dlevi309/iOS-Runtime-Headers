/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerBBNonDataMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _aPWakeCacheFlushCnt;
	unsigned _idlePowerMicroWatt;
	unsigned _oOSPowerMicroWatt;
	unsigned _registrationPowerMicroWatt;
	unsigned _scanPowerMicroWatt;
	unsigned _voicePowerMicroWatt;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasScanPowerMicroWatt; 
@property (assign,nonatomic) unsigned scanPowerMicroWatt;                      //@synthesize scanPowerMicroWatt=_scanPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasOOSPowerMicroWatt; 
@property (assign,nonatomic) unsigned oOSPowerMicroWatt;                       //@synthesize oOSPowerMicroWatt=_oOSPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationPowerMicroWatt; 
@property (assign,nonatomic) unsigned registrationPowerMicroWatt;              //@synthesize registrationPowerMicroWatt=_registrationPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasIdlePowerMicroWatt; 
@property (assign,nonatomic) unsigned idlePowerMicroWatt;                      //@synthesize idlePowerMicroWatt=_idlePowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasVoicePowerMicroWatt; 
@property (assign,nonatomic) unsigned voicePowerMicroWatt;                     //@synthesize voicePowerMicroWatt=_voicePowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasAPWakeCacheFlushCnt; 
@property (assign,nonatomic) unsigned aPWakeCacheFlushCnt;                     //@synthesize aPWakeCacheFlushCnt=_aPWakeCacheFlushCnt - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setScanPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasScanPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasScanPowerMicroWatt;
-(void)setOOSPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasOOSPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasOOSPowerMicroWatt;
-(void)setRegistrationPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasRegistrationPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasRegistrationPowerMicroWatt;
-(void)setIdlePowerMicroWatt:(unsigned)arg1 ;
-(void)setHasIdlePowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasIdlePowerMicroWatt;
-(void)setVoicePowerMicroWatt:(unsigned)arg1 ;
-(void)setHasVoicePowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasVoicePowerMicroWatt;
-(void)setAPWakeCacheFlushCnt:(unsigned)arg1 ;
-(void)setHasAPWakeCacheFlushCnt:(BOOL)arg1 ;
-(BOOL)hasAPWakeCacheFlushCnt;
-(unsigned)scanPowerMicroWatt;
-(unsigned)oOSPowerMicroWatt;
-(unsigned)registrationPowerMicroWatt;
-(unsigned)idlePowerMicroWatt;
-(unsigned)voicePowerMicroWatt;
-(unsigned)aPWakeCacheFlushCnt;
@end

