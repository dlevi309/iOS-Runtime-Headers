/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NWPBSendData : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NSData* _messageData;
	unsigned _receiveWindow;
	SCD_Struct_NW23 _has;

}

@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;               //@synthesize clientUUID=_clientUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageData; 
@property (nonatomic,retain) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) BOOL hasReceiveWindow; 
@property (assign,nonatomic) unsigned receiveWindow;              //@synthesize receiveWindow=_receiveWindow - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasClientUUID;
-(NSString *)clientUUID;
-(void)setClientUUID:(NSString *)arg1 ;
-(BOOL)hasMessageData;
-(NSData *)messageData;
-(void)setMessageData:(NSData *)arg1 ;
-(void)setReceiveWindow:(unsigned)arg1 ;
-(void)setHasReceiveWindow:(BOOL)arg1 ;
-(BOOL)hasReceiveWindow;
-(unsigned)receiveWindow;
@end

