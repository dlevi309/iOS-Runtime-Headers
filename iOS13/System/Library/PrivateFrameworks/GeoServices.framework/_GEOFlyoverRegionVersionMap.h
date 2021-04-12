/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOFlyoverRegionVersions;

@interface _GEOFlyoverRegionVersionMap : NSObject {

	GEOFlyoverRegionVersions* _versions;
	unordered_map<unsigned int, unsigned long, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > >* _regionToIndex;

}
-(id)init;
-(id)initWithData:(id)arg1 ;
-(GEOFlyoverRegion*)regionForID:(unsigned)arg1 ;
-(void)enumerateFlyoverRegions:(/*^block*/id)arg1 ;
-(id)initWithFlyoverRegions:(id)arg1 ;
@end

