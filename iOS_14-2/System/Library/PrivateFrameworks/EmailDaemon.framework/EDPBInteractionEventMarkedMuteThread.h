/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPBDataSetters.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDPBInteractionEventMarkedMuteThread : PBCodable <EDPBDataSetters, NSCopying> {

	long long _conversationId;
	BOOL _value;
	SCD_Struct_ED10 _has;

}

@property (assign,nonatomic) BOOL hasConversationId; 
@property (assign,nonatomic) long long conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) BOOL value;                            //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(BOOL)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(long long)conversationId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)withHasher:(id)arg1 setConversationID:(long long)arg2 data:(id)arg3 ;
-(void)setConversationId:(long long)arg1 ;
-(void)setHasConversationId:(BOOL)arg1 ;
-(BOOL)hasConversationId;
@end

