/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(BOOL)hasMessageId;
-(void)setStatusVersion:(unsigned)arg1 ;
-(unsigned)statusVersion;
-(void)setUpdatedStatus:(unsigned)arg1 ;
-(void)setHasUpdatedStatus:(BOOL)arg1 ;
-(BOOL)hasUpdatedStatus;
-(void)setHasStatusVersion:(BOOL)arg1 ;
-(BOOL)hasStatusVersion;
-(unsigned)updatedStatus;
@end

