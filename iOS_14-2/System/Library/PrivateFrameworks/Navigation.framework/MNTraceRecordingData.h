/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MNLocation, NSArray, GEODirectionsRequest, GEODirectionsResponse, NSError;

@interface MNTraceRecordingData : NSObject <NSSecureCoding> {

	MNLocation* _initialUserLocation;
	NSArray* _waypoints;
	GEODirectionsRequest* _initialDirectionsRequest;
	GEODirectionsResponse* _initialDirectionsResponse;
	NSError* _initialDirectionsRequestError;
	double _initialDirectionsRequestTimestamp;
	double _initialDirectionsResponseTimestamp;

}

@property (nonatomic,retain) MNLocation * initialUserLocation;                               //@synthesize initialUserLocation=_initialUserLocation - In the implementation block
@property (nonatomic,retain) NSArray * waypoints;                                            //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * initialDirectionsRequest;                //@synthesize initialDirectionsRequest=_initialDirectionsRequest - In the implementation block
@property (nonatomic,retain) GEODirectionsResponse * initialDirectionsResponse;              //@synthesize initialDirectionsResponse=_initialDirectionsResponse - In the implementation block
@property (nonatomic,retain) NSError * initialDirectionsRequestError;                        //@synthesize initialDirectionsRequestError=_initialDirectionsRequestError - In the implementation block
@property (assign,nonatomic) double initialDirectionsRequestTimestamp;                       //@synthesize initialDirectionsRequestTimestamp=_initialDirectionsRequestTimestamp - In the implementation block
@property (assign,nonatomic) double initialDirectionsResponseTimestamp;                      //@synthesize initialDirectionsResponseTimestamp=_initialDirectionsResponseTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)waypoints;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWaypoints:(NSArray *)arg1 ;
-(MNLocation *)initialUserLocation;
-(GEODirectionsRequest *)initialDirectionsRequest;
-(GEODirectionsResponse *)initialDirectionsResponse;
-(NSError *)initialDirectionsRequestError;
-(double)initialDirectionsRequestTimestamp;
-(double)initialDirectionsResponseTimestamp;
-(void)setInitialDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(void)setInitialDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(void)setInitialDirectionsRequestError:(NSError *)arg1 ;
-(void)setInitialDirectionsRequestTimestamp:(double)arg1 ;
-(void)setInitialDirectionsResponseTimestamp:(double)arg1 ;
-(void)setInitialUserLocation:(MNLocation *)arg1 ;
@end

