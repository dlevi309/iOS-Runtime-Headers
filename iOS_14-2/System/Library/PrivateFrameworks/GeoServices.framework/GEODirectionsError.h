/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)localizedTitle;
-(id<GEOTransitRoutingIncidentMessage>)incidentMessage;
-(void)_copyProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithResponse:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(BOOL)_errorCode:(long long)arg1 toProblem:(out int*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithWaypointIndex:(unsigned long long)arg1 ;
-(long long)firstDirectionsErrorCode;
-(long long)_errorCodeForProblemDetail:(GEOProblemDetail)arg1 ;
-(BOOL)hasError:(long long)arg1 ;
-(void)dealloc;
@end

