/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPort:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)port;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasPort;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
-(BOOL)hasHostname;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

