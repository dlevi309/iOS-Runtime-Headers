/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)arrivalDate;
-(id)departureDate;
-(id)startLocation;
-(id)destinationLocation;
-(long long)directionsType;
-(id)createResponse;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)_initWithStartLocation:(id)arg1 destinationLocation:(id)arg2 directionsType:(long long)arg3 arrivalDate:(id)arg4 departureDate:(id)arg5 extSessionGuid:(id)arg6 extSessionGuidCreatedTimestamp:(id)arg7 ;
@end

