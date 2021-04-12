/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NWAWDLBEndpointsFetchReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _connectionCellularFallbackCount;
	int _endpointsFetchTaskBadReplyCount;
	int _endpointsFetchTaskCount;
	int _endpointsFetchTaskFailureCount;
	int _endpointsFetchTaskSuccessCount;
	SCD_Struct_NW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointsFetchTaskCount; 
@property (assign,nonatomic) int endpointsFetchTaskCount;                          //@synthesize endpointsFetchTaskCount=_endpointsFetchTaskCount - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointsFetchTaskSuccessCount; 
@property (assign,nonatomic) int endpointsFetchTaskSuccessCount;                   //@synthesize endpointsFetchTaskSuccessCount=_endpointsFetchTaskSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointsFetchTaskFailureCount; 
@property (assign,nonatomic) int endpointsFetchTaskFailureCount;                   //@synthesize endpointsFetchTaskFailureCount=_endpointsFetchTaskFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointsFetchTaskBadReplyCount; 
@property (assign,nonatomic) int endpointsFetchTaskBadReplyCount;                  //@synthesize endpointsFetchTaskBadReplyCount=_endpointsFetchTaskBadReplyCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionCellularFallbackCount; 
@property (assign,nonatomic) int connectionCellularFallbackCount;                  //@synthesize connectionCellularFallbackCount=_connectionCellularFallbackCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setEndpointsFetchTaskCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskCount:(BOOL)arg1 ;
-(BOOL)hasEndpointsFetchTaskCount;
-(void)setEndpointsFetchTaskSuccessCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskSuccessCount:(BOOL)arg1 ;
-(BOOL)hasEndpointsFetchTaskSuccessCount;
-(void)setEndpointsFetchTaskFailureCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskFailureCount:(BOOL)arg1 ;
-(BOOL)hasEndpointsFetchTaskFailureCount;
-(void)setEndpointsFetchTaskBadReplyCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskBadReplyCount:(BOOL)arg1 ;
-(BOOL)hasEndpointsFetchTaskBadReplyCount;
-(void)setConnectionCellularFallbackCount:(int)arg1 ;
-(void)setHasConnectionCellularFallbackCount:(BOOL)arg1 ;
-(BOOL)hasConnectionCellularFallbackCount;
-(int)endpointsFetchTaskCount;
-(int)endpointsFetchTaskSuccessCount;
-(int)endpointsFetchTaskFailureCount;
-(int)endpointsFetchTaskBadReplyCount;
-(int)connectionCellularFallbackCount;
@end

