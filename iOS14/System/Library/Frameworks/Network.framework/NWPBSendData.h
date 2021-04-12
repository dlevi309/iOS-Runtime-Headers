/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NW21 _has;

}

@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;               //@synthesize clientUUID=_clientUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageData; 
@property (nonatomic,retain) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) BOOL hasReceiveWindow; 
@property (assign,nonatomic) unsigned receiveWindow;              //@synthesize receiveWindow=_receiveWindow - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)clientUUID;
-(BOOL)hasMessageData;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setReceiveWindow:(unsigned)arg1 ;
-(void)setHasReceiveWindow:(BOOL)arg1 ;
-(BOOL)hasReceiveWindow;
-(unsigned)receiveWindow;
-(unsigned long long)hash;
-(void)setMessageData:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClientUUID:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)messageData;
-(BOOL)hasClientUUID;
@end

