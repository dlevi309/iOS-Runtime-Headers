/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMDCharacteristicRequest *)request;
-(NSError *)error;
-(void)setValue:(id)arg1 ;
-(id)attributeDescriptions;
-(NSDate *)valueUpdatedTime;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(id)value;
-(NSNumber *)stateNumber;
-(void)setValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 ;
@end

