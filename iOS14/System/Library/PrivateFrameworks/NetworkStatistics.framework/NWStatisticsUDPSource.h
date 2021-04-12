/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@interface NWStatisticsUDPSource : NWStatisticsSource {

	nstat_udp_descriptor _descriptor;
	unsigned long long _eventFlags;

}
-(id)_currentSnapshot;
-(id)initWithManager:(id)arg1 local:(const sockaddr*)arg2 remote:(const sockaddr*)arg3 ;
-(id)description;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
@end

