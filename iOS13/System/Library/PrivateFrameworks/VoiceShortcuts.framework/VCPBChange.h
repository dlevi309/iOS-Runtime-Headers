/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)changeType;
-(id)dictionaryRepresentation;
-(NSString *)uniqueID;
-(void)writeTo:(id)arg1 ;
-(NSData *)message;
-(void)setMessage:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
@end

