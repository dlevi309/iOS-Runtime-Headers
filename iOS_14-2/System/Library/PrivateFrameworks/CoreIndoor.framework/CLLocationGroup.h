/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@class NSString, ECEFCoordinate, GeographicCoordinate;

@interface CLLocationGroup : NSObject {

	unique_ptr<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator>, std::__1::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator> > >* vertices;
	NSString* _groupId;
	ECEFCoordinate* _centerECEF;
	GeographicCoordinate* _centerLatLon;
	double _tolerance;
	long long _locationContext;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* _locationIds;
	set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >* _wifiOnlyDownloadLocIdxs;

}

@property (assign) set<unsigned long wifiOnlyDownloadLocIdxs;                      //@synthesize wifiOnlyDownloadLocIdxs=_wifiOnlyDownloadLocIdxs - In the implementation block
@property (readonly) NSString * groupId;                                           //@synthesize groupId=_groupId - In the implementation block
@property (readonly) vector<std::__1::basic_string<char> locationIds;              //@synthesize locationIds=_locationIds - In the implementation block
@property (readonly) ECEFCoordinate * centerECEF;                                  //@synthesize centerECEF=_centerECEF - In the implementation block
@property (readonly) GeographicCoordinate * centerLatLon;                          //@synthesize centerLatLon=_centerLatLon - In the implementation block
@property (readonly) double tolerance;                                             //@synthesize tolerance=_tolerance - In the implementation block
@property (readonly) long long locationContext;                                    //@synthesize locationContext=_locationContext - In the implementation block
+(void)storeAverage:(id)arg1 ofVertices:(id)arg2 ;
+(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)stringVectorFromNSArray:(id)arg1 ;
-(ECEFCoordinate *)centerECEF;
-(GeographicCoordinate *)centerLatLon;
-(double)tolerance;
-(id)init;
-(const unique_ptr<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator>, std::__1::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator> > >*)getVertices;
-(NSString *)groupId;
-(double)distance:(id)arg1 ;
-(id)initWithGroupId:(id)arg1 locationIds:(id)arg2 center:(id)arg3 wifiOnlyDownloadLocIdxs:(const set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >*)arg4 locationContext:(long long)arg5 andTolerance:(double)arg6 ;
-(const vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)getLocationIds;
-(vector<std::__1::basic_string<char>)locationIds;
-(long long)locationContext;
-(BOOL)allowCellularDownload:(unsigned long long)arg1 ;
-(void)setWifiOnlyDownloadLocIdxs:(set<unsigned long)arg1 ;
-(set<unsigned long)wifiOnlyDownloadLocIdxs;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)getGroupId;
@end

