/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class STSiriLocation, NSDate, NSString;

@interface STStartNavigationRequest : AFSiriRequest {

	STSiriLocation* _startLocation;
	STSiriLocation* _destinationLocation;
	long long _directionsType;
	NSDate* _arrivalDate;
	NSDate* _departureDate;
	NSString* _extSessionGuid;
	NSDate* _extSessionGuidCreatedTimestamp;

}
+(BOOL)supportsSecureCoding;
-(long long)directionsType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)startLocation;
-(id)createResponse;
-(id)arrivalDate;
-(id)initWithCoder:(id)arg1 ;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)departureDate;
-(id)destinationLocation;
-(id)_initWithStartLocation:(id)arg1 destinationLocation:(id)arg2 directionsType:(long long)arg3 arrivalDate:(id)arg4 departureDate:(id)arg5 extSessionGuid:(id)arg6 extSessionGuidCreatedTimestamp:(id)arg7 ;
@end

