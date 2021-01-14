/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitRemoteSession : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	unsigned _closeReason;
	unsigned _deviceType;
	int _errorCode;
	unsigned _role;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceType; 
@property (assign,nonatomic) unsigned deviceType;                       //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) unsigned role;                             //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasCloseReason; 
@property (assign,nonatomic) unsigned closeReason;                      //@synthesize closeReason=_closeReason - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)hasRole;
-(BOOL)hasDeviceType;
-(void)setHasRole:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)deviceType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setDeviceType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(void)setRole:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)errorCode;
-(BOOL)hasErrorCode;
-(unsigned)closeReason;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)role;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCloseReason:(unsigned)arg1 ;
-(void)setHasCloseReason:(BOOL)arg1 ;
-(BOOL)hasCloseReason;
@end

