/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)serviceName;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasServiceName;
-(void)setActiveParticipants:(unsigned long long)arg1 ;
-(void)setHasActiveParticipants:(BOOL)arg1 ;
-(BOOL)hasActiveParticipants;
-(void)setMissingPrekeys:(unsigned long long)arg1 ;
-(void)setHasMissingPrekeys:(BOOL)arg1 ;
-(BOOL)hasMissingPrekeys;
-(unsigned long long)activeParticipants;
-(unsigned long long)missingPrekeys;
@end

