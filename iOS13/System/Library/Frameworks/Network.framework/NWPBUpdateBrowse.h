/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)clearDiscoveredEndpoints;
-(void)addDiscoveredEndpoints:(id)arg1 ;
-(unsigned long long)discoveredEndpointsCount;
-(id)discoveredEndpointsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)discoveredEndpoints;
-(void)setDiscoveredEndpoints:(NSMutableArray *)arg1 ;
@end

