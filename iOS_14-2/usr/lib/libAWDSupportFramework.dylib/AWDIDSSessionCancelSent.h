/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSSessionCancelSent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _numberOfRecipients;
	unsigned _remoteSessionEndReason;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfRecipients; 
@property (assign,nonatomic) unsigned numberOfRecipients;                  //@synthesize numberOfRecipients=_numberOfRecipients - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteSessionEndReason; 
@property (assign,nonatomic) unsigned remoteSessionEndReason;              //@synthesize remoteSessionEndReason=_remoteSessionEndReason - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)guid;
-(unsigned)numberOfRecipients;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)remoteSessionEndReason;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setNumberOfRecipients:(unsigned)arg1 ;
-(void)setHasNumberOfRecipients:(BOOL)arg1 ;
-(BOOL)hasNumberOfRecipients;
-(void)setRemoteSessionEndReason:(unsigned)arg1 ;
-(void)setHasRemoteSessionEndReason:(BOOL)arg1 ;
-(BOOL)hasRemoteSessionEndReason;
@end

