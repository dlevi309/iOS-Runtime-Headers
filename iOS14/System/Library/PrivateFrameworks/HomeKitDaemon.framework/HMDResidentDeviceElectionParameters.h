/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMFProductInfo, HMDHomeKitVersion, NSSet, HMDResidentDevice, HMFBoolean, NSArray;

@interface HMDResidentDeviceElectionParameters : HMFObject {

	HMFProductInfo* _productInfo;
	HMDHomeKitVersion* _version;
	NSSet* _accessories;
	HMDResidentDevice* _resident;
	HMFBoolean* _enabled;
	long long _location;

}

@property (readonly) HMDResidentDevice * resident;                            //@synthesize resident=_resident - In the implementation block
@property (getter=isEnabled,copy,readonly) HMFBoolean * enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) long long location;                                      //@synthesize location=_location - In the implementation block
@property (copy,readonly) NSArray * accessories; 
-(long long)compare:(id)arg1 ;
-(id)init;
-(long long)location;
-(NSArray *)accessories;
-(unsigned long long)hash;
-(id)isEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(HMDResidentDevice *)resident;
-(id)initWithResident:(id)arg1 serializedPayload:(id)arg2 ;
-(id)initWithResident:(id)arg1 enabled:(id)arg2 location:(long long)arg3 accessories:(id)arg4 ;
-(id)serializedPayload;
@end

