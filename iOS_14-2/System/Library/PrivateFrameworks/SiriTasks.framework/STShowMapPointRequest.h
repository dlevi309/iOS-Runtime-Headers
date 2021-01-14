/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSData, NSString, NSDate;

@interface STShowMapPointRequest : AFSiriRequest {

	NSData* _placeData;
	NSString* _extSessionGuid;
	NSDate* _extSessionGuidCreatedTimestamp;
	BOOL _isCurrentLocation;

}

@property (assign,nonatomic) BOOL isCurrentLocation;              //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)isCurrentLocation;
-(id)initWithCoder:(id)arg1 ;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)_initWithPlaceData:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3 ;
-(id)mapPointData;
@end

