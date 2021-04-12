/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDPBMessageDataIDOnly : PBCodable <NSCopying> {

	long long _messageId;
	SCD_Struct_ED10 _has;

}

@property (assign,nonatomic) BOOL hasMessageId; 
@property (assign,nonatomic) long long messageId;              //@synthesize messageId=_messageId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)messageId;
-(void)setMessageId:(long long)arg1 ;
-(BOOL)hasMessageId;
-(void)setHasMessageId:(BOOL)arg1 ;
@end

