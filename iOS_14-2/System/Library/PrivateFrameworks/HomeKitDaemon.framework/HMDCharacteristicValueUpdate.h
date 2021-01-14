/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSError, HMDDevice, NSDate, NSNumber;

@interface HMDCharacteristicValueUpdate : HMFObject {

	id _value;
	NSString* _updateIdentifier;
	NSError* _error;
	HMDDevice* _remoteDevice;
	NSDate* _valueUpatedTime;
	NSNumber* _valueUpdatedStateNumber;

}

@property (nonatomic,readonly) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * updateIdentifier;                     //@synthesize updateIdentifier=_updateIdentifier - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) HMDDevice * remoteDevice;                        //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,readonly) NSDate * valueUpatedTime;                        //@synthesize valueUpatedTime=_valueUpatedTime - In the implementation block
@property (nonatomic,readonly) NSNumber * valueUpdatedStateNumber;              //@synthesize valueUpdatedStateNumber=_valueUpdatedStateNumber - In the implementation block
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(NSString *)updateIdentifier;
-(HMDDevice *)remoteDevice;
-(id)value;
-(NSDate *)valueUpatedTime;
-(NSNumber *)valueUpdatedStateNumber;
-(id)initWithValue:(id)arg1 updateIdentifier:(id)arg2 remoteDevice:(id)arg3 ;
-(void)setValueUpdatedTime:(id)arg1 stateNumber:(id)arg2 ;
@end

