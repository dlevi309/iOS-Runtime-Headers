/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEOLocationInfo;

@interface MKMuninGroundViewInfo : NSObject {

	double _startHeading;
	double _endHeading;
	GEOLocationInfo* _locationInfo;

}

@property (nonatomic,readonly) double startHeading;                         //@synthesize startHeading=_startHeading - In the implementation block
@property (nonatomic,readonly) double endHeading;                           //@synthesize endHeading=_endHeading - In the implementation block
@property (nonatomic,readonly) GEOLocationInfo * locationInfo;              //@synthesize locationInfo=_locationInfo - In the implementation block
-(double)startHeading;
-(GEOLocationInfo *)locationInfo;
-(double)endHeading;
-(BOOL)isHeadingInRange:(double)arg1 ;
-(id)initWithStartHeading:(double)arg1 endHeading:(double)arg2 localityName:(id)arg3 locationName:(id)arg4 secondaryLocationName:(id)arg5 ;
@end

