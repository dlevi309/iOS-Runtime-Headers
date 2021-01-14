/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKMapServiceTicket, MKMapServiceSpatialPlaceLookupTicket;
@class MKLocalSearchRequest, MKLocalPointsOfInterestRequest;

@interface MKLocalSearch : NSObject {

	MKLocalSearchRequest* _request;
	id<MKMapServiceTicket> _ticket;
	MKLocalPointsOfInterestRequest* _pointsOfInterestRequest;
	id<MKMapServiceSpatialPlaceLookupTicket> _spatialPlaceLookupTicket;

}

@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
-(BOOL)isSearching;
-(id)init;
-(void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_startPointsOfInterestFetchWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initWithPointsOfInterestRequest:(id)arg1 ;
-(void)_phoneOnlyStartWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cancel;
@end

