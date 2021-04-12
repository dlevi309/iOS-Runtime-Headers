/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSUUID, MNNavigationClientProxy, MNDirectionsRequestDetails, GEODirectionsRequest, GEODirectionsResponse, MNTraceRecordingData;

@interface MNNavigationServiceDirectionsRequestTicket : NSObject {

	NSUUID* _requestIdentifier;
	MNNavigationClientProxy* _proxy;
	MNDirectionsRequestDetails* _request;
	GEODirectionsRequest* _directionsRequest;
	GEODirectionsResponse* _directionsResponse;
	MNTraceRecordingData* _traceRecordingData;

}

@property (nonatomic,readonly) GEODirectionsRequest * directionsRequest;                //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,readonly) GEODirectionsResponse * directionsResponse;              //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,readonly) MNTraceRecordingData * traceRecordingData;               //@synthesize traceRecordingData=_traceRecordingData - In the implementation block
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(GEODirectionsResponse *)directionsResponse;
-(GEODirectionsRequest *)directionsRequest;
-(void)cancel;
-(MNTraceRecordingData *)traceRecordingData;
-(id)initWithProxy:(id)arg1 request:(id)arg2 ;
@end

