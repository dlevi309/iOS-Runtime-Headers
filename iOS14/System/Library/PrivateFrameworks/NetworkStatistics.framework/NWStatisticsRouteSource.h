/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_currentSnapshot;
-(void)setDestination:(NSData *)arg1 ;
-(id)initWithManager:(id)arg1 destination:(const sockaddr*)arg2 mask:(const sockaddr*)arg3 interface:(unsigned)arg4 ;
-(id)description;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(NSData *)destination;
@end

