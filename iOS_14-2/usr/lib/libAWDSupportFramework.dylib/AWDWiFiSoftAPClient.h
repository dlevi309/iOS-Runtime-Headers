/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiSoftAPClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _enhancedSecurityType;
	unsigned _failureReason;
	unsigned _rssi;
	BOOL _familyDevice;
	BOOL _joinedByAutoHS;
	BOOL _switchedToAnotherNetwork;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFamilyDevice; 
@property (assign,nonatomic) BOOL familyDevice;                             //@synthesize familyDevice=_familyDevice - In the implementation block
@property (assign,nonatomic) BOOL hasJoinedByAutoHS; 
@property (assign,nonatomic) BOOL joinedByAutoHS;                           //@synthesize joinedByAutoHS=_joinedByAutoHS - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchedToAnotherNetwork; 
@property (assign,nonatomic) BOOL switchedToAnotherNetwork;                 //@synthesize switchedToAnotherNetwork=_switchedToAnotherNetwork - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) unsigned failureReason;                        //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) unsigned rssi;                                 //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasEnhancedSecurityType; 
@property (assign,nonatomic) unsigned enhancedSecurityType;                 //@synthesize enhancedSecurityType=_enhancedSecurityType - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)failureReason;
-(void)setRssi:(unsigned)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(unsigned long long)timestamp;
-(void)setEnhancedSecurityType:(unsigned)arg1 ;
-(unsigned)rssi;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)enhancedSecurityType;
-(BOOL)hasFailureReason;
-(id)description;
-(void)setHasEnhancedSecurityType:(BOOL)arg1 ;
-(void)setFailureReason:(unsigned)arg1 ;
-(BOOL)hasEnhancedSecurityType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFamilyDevice:(BOOL)arg1 ;
-(void)setHasFamilyDevice:(BOOL)arg1 ;
-(BOOL)hasFamilyDevice;
-(BOOL)familyDevice;
-(void)setJoinedByAutoHS:(BOOL)arg1 ;
-(void)setHasJoinedByAutoHS:(BOOL)arg1 ;
-(BOOL)hasJoinedByAutoHS;
-(void)setSwitchedToAnotherNetwork:(BOOL)arg1 ;
-(void)setHasSwitchedToAnotherNetwork:(BOOL)arg1 ;
-(BOOL)hasSwitchedToAnotherNetwork;
-(BOOL)joinedByAutoHS;
-(BOOL)switchedToAnotherNetwork;
@end

