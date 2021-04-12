/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPRouteInformationSource.h>

@class GEOComposedWaypoint, NSString;

@interface MSPRidesharingInformationSource : NSObject <MSPRouteInformationSource> {

	GEOComposedWaypoint* _startWaypoint;
	GEOComposedWaypoint* _endWaypoint;

}

@property (getter=_startWaypoint,nonatomic,readonly) GEOComposedWaypoint * startWaypoint;              //@synthesize startWaypoint=_startWaypoint - In the implementation block
@property (getter=_endWaypoint,nonatomic,readonly) GEOComposedWaypoint * endWaypoint;                  //@synthesize endWaypoint=_endWaypoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_endWaypoint;
-(id)_startWaypoint;
-(id)ifRidesharingInformationSource;
-(id)ifGEOStorageRouteRequestStorage;
-(id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2 ;
@end

