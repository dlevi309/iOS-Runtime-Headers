/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSSnapshot.h>

@class NSData;

@interface NWSRouteSnapshot : NWSSnapshot {

	NSData* _destination;
	NSData* _mask;
	NSData* _gateway;
	nstat_route_descriptor _descriptor;

}

@property (readonly) unsigned long long routeID; 
@property (readonly) unsigned long long parentID; 
@property (readonly) unsigned long long gatewayID; 
@property (readonly) NSData * destination; 
@property (readonly) NSData * mask; 
@property (readonly) NSData * gateway; 
@property (readonly) unsigned interfaceIndex; 
@property (readonly) unsigned flags; 
@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
@property (readonly) unsigned rxDuplicateBytes; 
@property (readonly) unsigned rxOutOfOrderBytes; 
@property (readonly) unsigned txRetransmittedBytes; 
@property (readonly) unsigned connectAttempts; 
@property (readonly) unsigned connectSuccesses; 
-(id)description;
-(unsigned)flags;
-(NSData *)destination;
-(NSData *)mask;
-(unsigned long long)parentID;
-(unsigned)interfaceIndex;
-(unsigned long long)routeID;
-(unsigned)rxOutOfOrderBytes;
-(NSData *)gateway;
-(unsigned)connectAttempts;
-(unsigned)connectSuccesses;
-(unsigned)rxDuplicateBytes;
-(unsigned)txRetransmittedBytes;
-(double)rttMinimum;
-(double)rttAverage;
-(double)rttVariation;
-(id)traditionalDictionary;
-(void)_initWithDescriptor:(nstat_route_descriptor*)arg1 ;
-(unsigned long long)gatewayID;
-(id)initWithCounts:(const nstat_counts*)arg1 routeDescriptor:(nstat_route_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4 ;
@end

