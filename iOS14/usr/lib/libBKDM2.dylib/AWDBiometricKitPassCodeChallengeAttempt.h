/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <libBKDM2.dylib/libBKDM2.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBiometricKitPassCodeChallengeAttempt : PBCodable <NSCopying> {

	unsigned long long _overallTime;
	unsigned long long _timestamp;
	int _ambientLux;
	unsigned _attentionScore;
	unsigned _deviceOrientation;
	unsigned _faceDistance;
	unsigned _matchIdentityCount;
	unsigned _ppmAllocatedBudget;
	unsigned _ppmRequestedBudget;
	int _sensorTemperature;
	BOOL _hasOcclusion;
	BOOL _passcodeChallengeResult;
	BOOL _passcodeChallengeTemplateUpdated;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOverallTime; 
@property (assign,nonatomic) unsigned long long overallTime;                        //@synthesize overallTime=_overallTime - In the implementation block
@property (assign,nonatomic) BOOL hasPasscodeChallengeResult; 
@property (assign,nonatomic) BOOL passcodeChallengeResult;                          //@synthesize passcodeChallengeResult=_passcodeChallengeResult - In the implementation block
@property (assign,nonatomic) BOOL hasPasscodeChallengeTemplateUpdated; 
@property (assign,nonatomic) BOOL passcodeChallengeTemplateUpdated;                 //@synthesize passcodeChallengeTemplateUpdated=_passcodeChallengeTemplateUpdated - In the implementation block
@property (assign,nonatomic) BOOL hasAmbientLux; 
@property (assign,nonatomic) int ambientLux;                                        //@synthesize ambientLux=_ambientLux - In the implementation block
@property (assign,nonatomic) BOOL hasSensorTemperature; 
@property (assign,nonatomic) int sensorTemperature;                                 //@synthesize sensorTemperature=_sensorTemperature - In the implementation block
@property (assign,nonatomic) BOOL hasFaceDistance; 
@property (assign,nonatomic) unsigned faceDistance;                                 //@synthesize faceDistance=_faceDistance - In the implementation block
@property (assign,nonatomic) BOOL hasAttentionScore; 
@property (assign,nonatomic) unsigned attentionScore;                               //@synthesize attentionScore=_attentionScore - In the implementation block
@property (assign,nonatomic) BOOL hasHasOcclusion; 
@property (assign,nonatomic) BOOL hasOcclusion;                                     //@synthesize hasOcclusion=_hasOcclusion - In the implementation block
@property (assign,nonatomic) BOOL hasPpmRequestedBudget; 
@property (assign,nonatomic) unsigned ppmRequestedBudget;                           //@synthesize ppmRequestedBudget=_ppmRequestedBudget - In the implementation block
@property (assign,nonatomic) BOOL hasPpmAllocatedBudget; 
@property (assign,nonatomic) unsigned ppmAllocatedBudget;                           //@synthesize ppmAllocatedBudget=_ppmAllocatedBudget - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceOrientation; 
@property (assign,nonatomic) unsigned deviceOrientation;                            //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasMatchIdentityCount; 
@property (assign,nonatomic) unsigned matchIdentityCount;                           //@synthesize matchIdentityCount=_matchIdentityCount - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceOrientation:(unsigned)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned)deviceOrientation;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSensorTemperature:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasDeviceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceOrientation;
-(int)sensorTemperature;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOverallTime:(unsigned long long)arg1 ;
-(unsigned long long)overallTime;
-(void)setHasOverallTime:(BOOL)arg1 ;
-(BOOL)hasOverallTime;
-(void)setAmbientLux:(int)arg1 ;
-(void)setHasAmbientLux:(BOOL)arg1 ;
-(BOOL)hasAmbientLux;
-(void)setHasSensorTemperature:(BOOL)arg1 ;
-(BOOL)hasSensorTemperature;
-(void)setFaceDistance:(unsigned)arg1 ;
-(void)setHasFaceDistance:(BOOL)arg1 ;
-(BOOL)hasFaceDistance;
-(void)setHasOcclusion:(BOOL)arg1 ;
-(void)setHasHasOcclusion:(BOOL)arg1 ;
-(BOOL)hasHasOcclusion;
-(void)setPpmRequestedBudget:(unsigned)arg1 ;
-(void)setHasPpmRequestedBudget:(BOOL)arg1 ;
-(BOOL)hasPpmRequestedBudget;
-(void)setPpmAllocatedBudget:(unsigned)arg1 ;
-(void)setHasPpmAllocatedBudget:(BOOL)arg1 ;
-(BOOL)hasPpmAllocatedBudget;
-(int)ambientLux;
-(unsigned)faceDistance;
-(BOOL)hasOcclusion;
-(unsigned)ppmRequestedBudget;
-(unsigned)ppmAllocatedBudget;
-(void)setMatchIdentityCount:(unsigned)arg1 ;
-(void)setPasscodeChallengeResult:(BOOL)arg1 ;
-(void)setPasscodeChallengeTemplateUpdated:(BOOL)arg1 ;
-(void)setAttentionScore:(unsigned)arg1 ;
-(void)setHasPasscodeChallengeResult:(BOOL)arg1 ;
-(BOOL)hasPasscodeChallengeResult;
-(void)setHasPasscodeChallengeTemplateUpdated:(BOOL)arg1 ;
-(BOOL)hasPasscodeChallengeTemplateUpdated;
-(void)setHasAttentionScore:(BOOL)arg1 ;
-(BOOL)hasAttentionScore;
-(void)setHasMatchIdentityCount:(BOOL)arg1 ;
-(BOOL)hasMatchIdentityCount;
-(BOOL)passcodeChallengeResult;
-(BOOL)passcodeChallengeTemplateUpdated;
-(unsigned)attentionScore;
-(unsigned)matchIdentityCount;
@end

