/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNanoPhoneEmergencyCallEnded : PBCodable <NSCopying> {

	unsigned long long _callDuration;
	unsigned long long _timestamp;
	BOOL _callConnected;
	BOOL _callFailed;
	BOOL _remoteEnded;
	BOOL _userEnded;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCallDuration; 
@property (assign,nonatomic) unsigned long long callDuration;              //@synthesize callDuration=_callDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCallConnected; 
@property (assign,nonatomic) BOOL callConnected;                           //@synthesize callConnected=_callConnected - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteEnded; 
@property (assign,nonatomic) BOOL remoteEnded;                             //@synthesize remoteEnded=_remoteEnded - In the implementation block
@property (assign,nonatomic) BOOL hasCallFailed; 
@property (assign,nonatomic) BOOL callFailed;                              //@synthesize callFailed=_callFailed - In the implementation block
@property (assign,nonatomic) BOOL hasUserEnded; 
@property (assign,nonatomic) BOOL userEnded;                               //@synthesize userEnded=_userEnded - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setCallConnected:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCallDuration:(unsigned long long)arg1 ;
-(BOOL)hasCallDuration;
-(void)setHasCallDuration:(BOOL)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)callDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCallConnected:(BOOL)arg1 ;
-(BOOL)hasCallConnected;
-(void)setRemoteEnded:(BOOL)arg1 ;
-(void)setHasRemoteEnded:(BOOL)arg1 ;
-(BOOL)hasRemoteEnded;
-(void)setCallFailed:(BOOL)arg1 ;
-(void)setHasCallFailed:(BOOL)arg1 ;
-(BOOL)hasCallFailed;
-(void)setUserEnded:(BOOL)arg1 ;
-(void)setHasUserEnded:(BOOL)arg1 ;
-(BOOL)hasUserEnded;
-(BOOL)callConnected;
-(BOOL)remoteEnded;
-(BOOL)callFailed;
-(BOOL)userEnded;
@end

