/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRealTimeEncryptionMembershipChangeEventFirstMKMTimeDelta : PBCodable <NSCopying> {

	long long _timeDelta;
	unsigned long long _timestamp;
	unsigned _activeParticipantBucket;
	NSString* _serviceName;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL hasActiveParticipantBucket; 
@property (assign,nonatomic) unsigned activeParticipantBucket;              //@synthesize activeParticipantBucket=_activeParticipantBucket - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDelta; 
@property (assign,nonatomic) long long timeDelta;                           //@synthesize timeDelta=_timeDelta - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasServiceName;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)serviceName;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)timeDelta;
-(void)setTimeDelta:(long long)arg1 ;
-(void)setHasTimeDelta:(BOOL)arg1 ;
-(BOOL)hasTimeDelta;
-(void)setActiveParticipantBucket:(unsigned)arg1 ;
-(void)setHasActiveParticipantBucket:(BOOL)arg1 ;
-(BOOL)hasActiveParticipantBucket;
-(unsigned)activeParticipantBucket;
@end

