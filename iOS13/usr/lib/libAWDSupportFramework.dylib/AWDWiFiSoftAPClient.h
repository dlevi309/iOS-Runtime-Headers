/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiSoftAPClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _failureReason;
	unsigned _rssi;
	BOOL _familyDevice;
	BOOL _joinedByAutoHS;
	BOOL _switchedToAnotherNetwork;
	SCD_Struct_AW11 _has;

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
-(unsigned)rssi;
-(void)setRssi:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)failureReason;
-(void)setFailureReason:(unsigned)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
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

