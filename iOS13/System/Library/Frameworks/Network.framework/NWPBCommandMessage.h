/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NWPBCommandMessage : PBCodable <NSCopying> {

	int _command;
	NSData* _messageData;
	SCD_Struct_NW23 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                        //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageData; 
@property (nonatomic,retain) NSData * messageData;               //@synthesize messageData=_messageData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCommand:(int)arg1 ;
-(int)command;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(BOOL)hasMessageData;
-(NSData *)messageData;
-(void)setMessageData:(NSData *)arg1 ;
@end

