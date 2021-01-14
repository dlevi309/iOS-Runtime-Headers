/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWPBCloseConnection : PBCodable <NSCopying> {

	NSString* _clientUUID;

}

@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;              //@synthesize clientUUID=_clientUUID - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)clientUUID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClientUUID:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasClientUUID;
@end

