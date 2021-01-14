/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRealTimeEncryptionMissingPrekeys : PBCodable <NSCopying> {

	unsigned long long _activeParticipants;
	unsigned long long _missingPrekeys;
	unsigned long long _timestamp;
	NSString* _serviceName;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                             //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL hasActiveParticipants; 
@property (assign,nonatomic) unsigned long long activeParticipants;              //@synthesize activeParticipants=_activeParticipants - In the implementation block
@property (assign,nonatomic) BOOL hasMissingPrekeys; 
@property (assign,nonatomic) unsigned long long missingPrekeys;                  //@synthesize missingPrekeys=_missingPrekeys - In the implementation block
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
-(void)setActiveParticipants:(unsigned long long)arg1 ;
-(void)setHasActiveParticipants:(BOOL)arg1 ;
-(BOOL)hasActiveParticipants;
-(void)setMissingPrekeys:(unsigned long long)arg1 ;
-(void)setHasMissingPrekeys:(BOOL)arg1 ;
-(BOOL)hasMissingPrekeys;
-(unsigned long long)activeParticipants;
-(unsigned long long)missingPrekeys;
@end

