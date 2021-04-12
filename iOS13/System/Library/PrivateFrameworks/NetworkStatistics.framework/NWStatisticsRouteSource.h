/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@class NSData;

@interface NWStatisticsRouteSource : NWStatisticsSource {

	nstat_route_descriptor _descriptor;
	NSData* _destination;

}

@property (retain) NSData * destination;              //@synthesize destination=_destination - In the implementation block
-(id)description;
-(NSData *)destination;
-(void)setDestination:(NSData *)arg1 ;
-(id)_currentSnapshot;
-(id)initWithManager:(id)arg1 destination:(const sockaddr*)arg2 mask:(const sockaddr*)arg3 interface:(unsigned)arg4 ;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
@end

