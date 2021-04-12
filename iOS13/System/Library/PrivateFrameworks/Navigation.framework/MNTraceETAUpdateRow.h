/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSError, NSString;

@interface MNTraceETAUpdateRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _requestTimestamp;
	double _responseTimestamp;
	GEOETATrafficUpdateRequest* _request;
	GEOETATrafficUpdateResponse* _response;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double requestTimestamp;                             //@synthesize requestTimestamp=_requestTimestamp - In the implementation block
@property (assign,nonatomic) double responseTimestamp;                            //@synthesize responseTimestamp=_responseTimestamp - In the implementation block
@property (nonatomic,retain) GEOETATrafficUpdateRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GEOETATrafficUpdateResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)position;
-(void)setRequest:(GEOETATrafficUpdateRequest *)arg1 ;
-(GEOETATrafficUpdateRequest *)request;
-(GEOETATrafficUpdateResponse *)response;
-(void)setResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(double)responseTimestamp;
-(double)requestTimestamp;
-(void)setRequestTimestamp:(double)arg1 ;
-(void)setResponseTimestamp:(double)arg1 ;
@end

