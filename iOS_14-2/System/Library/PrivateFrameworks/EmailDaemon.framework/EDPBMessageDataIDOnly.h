/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDPBMessageDataIDOnly : PBCodable <NSCopying> {

	long long _messageId;
	SCD_Struct_ED12 _has;

}

@property (assign,nonatomic) BOOL hasMessageId; 
@property (assign,nonatomic) long long messageId;              //@synthesize messageId=_messageId - In the implementation block
-(id)dictionaryRepresentation;
-(void)setMessageId:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasMessageId:(BOOL)arg1 ;
@end

