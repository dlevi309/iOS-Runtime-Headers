/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NWPBCommandMessage : PBCodable <NSCopying> {

	int _command;
	NSData* _messageData;
	SCD_Struct_NW21 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                        //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageData; 
@property (nonatomic,retain) NSData * messageData;               //@synthesize messageData=_messageData - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasMessageData;
-(BOOL)hasCommand;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setMessageData:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)command;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCommand:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)messageData;
@end

