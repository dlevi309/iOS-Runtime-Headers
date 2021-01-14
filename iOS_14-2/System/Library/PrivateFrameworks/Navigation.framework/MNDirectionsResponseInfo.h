/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRequest:(GEODirectionsRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)routeInfos;
-(GEODirectionsRequest *)request;
-(NSError *)error;
-(void)setRouteInfos:(NSArray *)arg1 ;
-(GEODirectionsResponse *)response;
-(void)setResponse:(GEODirectionsResponse *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MNTraceRecordingData *)traceRecordingData;
-(void)setTraceRecordingData:(MNTraceRecordingData *)arg1 ;
-(GEODirectionsError *)directionsError;
-(void)setDirectionsError:(GEODirectionsError *)arg1 ;
@end

