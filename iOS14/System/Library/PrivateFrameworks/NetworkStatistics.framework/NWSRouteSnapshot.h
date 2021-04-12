/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)rttAverage;
-(NSData *)mask;
-(double)rttVariation;
-(unsigned)txRetransmittedBytes;
-(unsigned)interfaceIndex;
-(unsigned)rxDuplicateBytes;
-(id)initWithCounts:(const nstat_counts*)arg1 routeDescriptor:(nstat_route_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4 ;
-(unsigned)rxOutOfOrderBytes;
-(unsigned)connectAttempts;
-(NSData *)gateway;
-(double)rttMinimum;
-(unsigned)flags;
-(id)traditionalDictionary;
-(unsigned)connectSuccesses;
-(void)_initWithDescriptor:(nstat_route_descriptor*)arg1 ;
-(unsigned long long)routeID;
-(id)description;
-(unsigned long long)parentID;
-(unsigned long long)gatewayID;
-(NSData *)destination;
@end

