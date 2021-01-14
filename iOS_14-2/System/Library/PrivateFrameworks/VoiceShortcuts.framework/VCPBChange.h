/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface VCPBChange : PBCodable <NSCopying> {

	int _changeType;
	NSData* _message;
	int _messageType;
	NSString* _uniqueID;

}

@property (assign,nonatomic) int messageType;                  //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) int changeType;                   //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSData * message;                 //@synthesize message=_message - In the implementation block
-(void)setMessage:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(int)messageType;
-(void)setChangeType:(int)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSData *)message;
-(void)setMessageType:(int)arg1 ;
-(int)changeType;
-(NSString *)uniqueID;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(id)description;
-(int)StringAsChangeType:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

