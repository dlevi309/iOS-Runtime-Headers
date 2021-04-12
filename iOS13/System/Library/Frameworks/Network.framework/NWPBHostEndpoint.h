/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWPBHostEndpoint : PBCodable <NSCopying> {

	NSString* _hostname;
	NSString* _port;

}

@property (nonatomic,readonly) BOOL hasHostname; 
@property (nonatomic,retain) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) BOOL hasPort; 
@property (nonatomic,retain) NSString * port;                  //@synthesize port=_port - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)port;
-(void)setPort:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)hostname;
-(void)setHostname:(NSString *)arg1 ;
-(BOOL)hasHostname;
-(BOOL)hasPort;
@end

