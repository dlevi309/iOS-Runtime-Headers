/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, NSDate;

@interface HAPCharacteristicEvent : HMFObject {

	NSString* _serverIdentifier;
	NSNumber* _accessoryInstanceID;
	NSNumber* _serviceInstanceID;
	NSNumber* _characteristicInstanceID;
	id _value;
	NSDate* _updateTime;
	NSNumber* _stateNumber;

}

@property (nonatomic,copy,readonly) NSString * serverIdentifier;                      //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * accessoryInstanceID;                   //@synthesize accessoryInstanceID=_accessoryInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * serviceInstanceID;                     //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * characteristicInstanceID;              //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (nonatomic,copy,readonly) id value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * updateTime;                                   //@synthesize updateTime=_updateTime - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                                //@synthesize stateNumber=_stateNumber - In the implementation block
+(id)eventWithCharacteristic:(id)arg1 ;
-(id)init;
-(id)value;
-(NSDate *)updateTime;
-(NSString *)serverIdentifier;
-(id)initWithCharacteristic:(id)arg1 ;
-(NSNumber *)stateNumber;
-(NSNumber *)serviceInstanceID;
-(NSNumber *)accessoryInstanceID;
-(NSNumber *)characteristicInstanceID;
@end

