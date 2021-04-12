/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDMediaPropertyRequest, NSError, NSNumber, NSDate;

@interface HMDMediaPropertyResponse : HMFObject {

	HMDMediaPropertyRequest* _request;
	id _value;
	NSError* _error;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;

}

@property (nonatomic,readonly) HMDMediaPropertyRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                         //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) NSDate * valueUpdatedTime;                      //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
+(id)responsesFromSerializedResponse:(id)arg1 requests:(id)arg2 home:(id)arg3 ;
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)propertyResponsesFromRequests:(id)arg1 error:(id)arg2 ;
+(id)serializeResponses:(id)arg1 ;
+(id)responseWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4 ;
+(id)groupedProfileResponses:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HMDMediaPropertyRequest *)request;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(NSDate *)valueUpdatedTime;
-(NSNumber *)stateNumber;
-(id)initWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4 ;
@end

