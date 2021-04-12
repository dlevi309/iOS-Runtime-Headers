/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, GEODirectionsRequest, GEODirectionsResponse, NSError, GEODirectionsError, MNTraceRecordingData;

@interface MNDirectionsResponseInfo : NSObject <NSSecureCoding> {

	NSArray* _routeInfos;
	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	NSError* _error;
	GEODirectionsError* _directionsError;
	MNTraceRecordingData* _traceRecordingData;

}

@property (nonatomic,retain) NSArray * routeInfos;                                   //@synthesize routeInfos=_routeInfos - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * request;                         //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GEODirectionsResponse * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) GEODirectionsError * directionsError;                   //@synthesize directionsError=_directionsError - In the implementation block
@property (nonatomic,retain) MNTraceRecordingData * traceRecordingData;              //@synthesize traceRecordingData=_traceRecordingData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setRequest:(GEODirectionsRequest *)arg1 ;
-(GEODirectionsRequest *)request;
-(GEODirectionsResponse *)response;
-(void)setResponse:(GEODirectionsResponse *)arg1 ;
-(NSArray *)routeInfos;
-(void)setRouteInfos:(NSArray *)arg1 ;
-(MNTraceRecordingData *)traceRecordingData;
-(void)setTraceRecordingData:(MNTraceRecordingData *)arg1 ;
-(GEODirectionsError *)directionsError;
-(void)setDirectionsError:(GEODirectionsError *)arg1 ;
@end

