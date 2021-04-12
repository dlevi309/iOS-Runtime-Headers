/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NWPBAddressEndpoint : PBCodable <NSCopying> {

	NSData* _address;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NSData * address;               //@synthesize address=_address - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasAddress;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)address;
-(void)setAddress:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

