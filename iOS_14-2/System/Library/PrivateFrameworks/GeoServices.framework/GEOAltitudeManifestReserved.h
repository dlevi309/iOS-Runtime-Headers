/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class geo_isolater;

@interface GEOAltitudeManifestReserved : NSObject {

	map<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, _GEOAltitudeTriggerData> > >* _reservedTriggerData;
	unsigned _reservedCurrentRegion;
	unsigned char _reservedTourServerType;
	geo_isolater* _reservedIsolater;

}
@end

