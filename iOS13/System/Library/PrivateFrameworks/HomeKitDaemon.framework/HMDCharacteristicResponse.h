/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicRequest, NSError, NSNumber, NSDate;

@interface HMDCharacteristicResponse : HMFObject {

	HMDCharacteristicRequest* _request;
	id _value;
	NSError* _error;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;

}

@property (nonatomic,readonly) HMDCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id value;                                          //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                          //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) NSDate * valueUpdatedTime;                       //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)responsesWithRequests:(id)arg1 error:(id)arg2 ;
-(id)description;
-(NSError *)error;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HMDCharacteristicRequest *)request;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(NSDate *)valueUpdatedTime;
-(NSNumber *)stateNumber;
-(void)setValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 ;
@end

