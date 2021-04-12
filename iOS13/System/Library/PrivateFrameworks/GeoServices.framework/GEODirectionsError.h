/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOTransitRoutingIncidentMessage;
@class GEOAlert, NSString;

@interface GEODirectionsError : NSObject <NSSecureCoding> {

	GEOAlert* _alert;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	id<GEOTransitRoutingIncidentMessage> _routingIncidentMessage;

}

@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> incidentMessage; 
@property (nonatomic,readonly) long long firstDirectionsErrorCode; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)_copyProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(long long)_errorCodeForProblemDetail:(GEOProblemDetail)arg1 ;
-(BOOL)_errorCode:(long long)arg1 toProblem:(out int*)arg2 ;
-(id)initWithResponse:(id)arg1 ;
-(id)initWithWaypointIndex:(unsigned long long)arg1 ;
-(id<GEOTransitRoutingIncidentMessage>)incidentMessage;
-(long long)firstDirectionsErrorCode;
-(BOOL)hasError:(long long)arg1 ;
@end

