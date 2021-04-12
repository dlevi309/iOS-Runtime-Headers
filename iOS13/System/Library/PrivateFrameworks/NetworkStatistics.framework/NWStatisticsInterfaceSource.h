/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@interface NWStatisticsInterfaceSource : NWStatisticsSource {

	nstat_ifnet_descriptor _descriptor;

}
-(id)description;
-(id)_currentSnapshot;
-(id)initWithManager:(id)arg1 interface:(long long)arg2 threshold:(long long)arg3 ;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
@end

