/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoMessageStatusUpdate : PBCodable <NSCopying> {

	NSString* _messageId;
	unsigned _statusVersion;
	unsigned _updatedStatus;
	SCD_Struct_NN2 _has;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedStatus; 
@property (assign,nonatomic) unsigned updatedStatus;              //@synthesize updatedStatus=_updatedStatus - In the implementation block
@property (assign,nonatomic) BOOL hasStatusVersion; 
@property (assign,nonatomic) unsigned statusVersion;              //@synthesize statusVersion=_statusVersion - In the implementation block
-(id)dictionaryRepresentation;
-(void)setMessageId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStatusVersion:(unsigned)arg1 ;
-(unsigned)statusVersion;
-(void)setUpdatedStatus:(unsigned)arg1 ;
-(void)setHasUpdatedStatus:(BOOL)arg1 ;
-(BOOL)hasUpdatedStatus;
-(void)setHasStatusVersion:(BOOL)arg1 ;
-(BOOL)hasStatusVersion;
-(unsigned)updatedStatus;
@end

