/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(GEODirectionsResponse *)directionsResponse;
-(GEODirectionsRequest *)directionsRequest;
-(MNTraceRecordingData *)traceRecordingData;
-(id)initWithProxy:(id)arg1 request:(id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
@end

