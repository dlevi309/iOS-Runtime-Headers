/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWAWDNWProtocolEstablishmentReport : PBCodable <NSCopying> {

	unsigned long long _handshakeMilliseconds;
	unsigned long long _handshakeRTTMilliseconds;
	int _protocolIndex;
	NSString* _protocolName;
	SCD_Struct_NW12 _has;

}

@property (assign,nonatomic) BOOL hasProtocolIndex; 
@property (assign,nonatomic) int protocolIndex;                                        //@synthesize protocolIndex=_protocolIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasProtocolName; 
@property (nonatomic,retain) NSString * protocolName;                                  //@synthesize protocolName=_protocolName - In the implementation block
@property (assign,nonatomic) BOOL hasHandshakeMilliseconds; 
@property (assign,nonatomic) unsigned long long handshakeMilliseconds;                 //@synthesize handshakeMilliseconds=_handshakeMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasHandshakeRTTMilliseconds; 
@property (assign,nonatomic) unsigned long long handshakeRTTMilliseconds;              //@synthesize handshakeRTTMilliseconds=_handshakeRTTMilliseconds - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)protocolName;
-(void)setProtocolIndex:(int)arg1 ;
-(void)setHasProtocolIndex:(BOOL)arg1 ;
-(BOOL)hasProtocolIndex;
-(void)setHandshakeMilliseconds:(unsigned long long)arg1 ;
-(void)setHasHandshakeMilliseconds:(BOOL)arg1 ;
-(BOOL)hasHandshakeMilliseconds;
-(void)setHandshakeRTTMilliseconds:(unsigned long long)arg1 ;
-(void)setHasHandshakeRTTMilliseconds:(BOOL)arg1 ;
-(BOOL)hasHandshakeRTTMilliseconds;
-(int)protocolIndex;
-(unsigned long long)handshakeMilliseconds;
-(unsigned long long)handshakeRTTMilliseconds;
-(BOOL)hasProtocolName;
-(unsigned long long)hash;
-(void)setProtocolName:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

