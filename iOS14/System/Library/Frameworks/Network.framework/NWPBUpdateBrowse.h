/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NWPBUpdateBrowse : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NSMutableArray* _discoveredEndpoints;

}

@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;                             //@synthesize clientUUID=_clientUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * discoveredEndpoints;              //@synthesize discoveredEndpoints=_discoveredEndpoints - In the implementation block
+(Class)discoveredEndpointsType;
-(id)dictionaryRepresentation;
-(NSString *)clientUUID;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)discoveredEndpoints;
-(id)description;
-(void)clearDiscoveredEndpoints;
-(void)addDiscoveredEndpoints:(id)arg1 ;
-(unsigned long long)discoveredEndpointsCount;
-(id)discoveredEndpointsAtIndex:(unsigned long long)arg1 ;
-(void)setDiscoveredEndpoints:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClientUUID:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasClientUUID;
@end

