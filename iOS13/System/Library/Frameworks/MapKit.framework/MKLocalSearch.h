/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKMapServiceTicket;
@class MKLocalSearchRequest;

@interface MKLocalSearch : NSObject {

	MKLocalSearchRequest* _request;
	id<MKMapServiceTicket> _ticket;

}

@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
-(id)init;
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isSearching;
-(void)_phoneOnlyStartWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

