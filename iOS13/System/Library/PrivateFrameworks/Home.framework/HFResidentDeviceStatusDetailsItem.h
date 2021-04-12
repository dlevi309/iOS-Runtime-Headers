/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMHome, HMResidentDevice, NSString;

@interface HFResidentDeviceStatusDetailsItem : HFItem <HFHomeKitItemProtocol> {

	HMHome* _home;
	HMResidentDevice* _residentDevice;

}

@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMResidentDevice * residentDevice;              //@synthesize residentDevice=_residentDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(HMHome *)home;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 residentDevice:(id)arg2 ;
-(HMResidentDevice *)residentDevice;
@end

