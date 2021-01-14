/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSSessionStarted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _clientType;
	NSString* _guid;
	NSString* _serviceName;
	unsigned _sessionProtocolVersionNumber;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                    //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasSessionProtocolVersionNumber; 
@property (assign,nonatomic) unsigned sessionProtocolVersionNumber;              //@synthesize sessionProtocolVersionNumber=_sessionProtocolVersionNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                             //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL hasClientType; 
@property (assign,nonatomic) int clientType;                                     //@synthesize clientType=_clientType - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)guid;
-(unsigned long long)timestamp;
-(BOOL)hasServiceName;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)serviceName;
-(void)setClientType:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)clientType;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasClientType:(BOOL)arg1 ;
-(BOOL)hasClientType;
-(void)setSessionProtocolVersionNumber:(unsigned)arg1 ;
-(void)setHasSessionProtocolVersionNumber:(BOOL)arg1 ;
-(BOOL)hasSessionProtocolVersionNumber;
-(unsigned)sessionProtocolVersionNumber;
@end

