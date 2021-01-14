/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
*/


@class HIDManager, HIDDevice, NSString, NSArray;

@interface HIDDisplayInterface : NSObject {

	HIDManager* _manager;
	HIDDevice* _deviceRef;
	NSString* _containerID;
	unsigned long long _registryID;

}

@property (readonly) NSString * containerID;                     //@synthesize containerID=_containerID - In the implementation block
@property (readonly) unsigned long long registryID;              //@synthesize registryID=_registryID - In the implementation block
@property (readonly) NSArray * capabilities; 
-(NSString *)containerID;
-(NSArray *)capabilities;
-(id)initWithService:(unsigned)arg1 ;
-(id)device;
-(id)description;
-(void)setDevice:(id)arg1 ;
-(unsigned long long)registryID;
-(id)initWithContainerID:(id)arg1 ;
-(void)dealloc;
-(id)getHIDDevices;
-(BOOL)hasMatchingContainerID:(id)arg1 containerID:(id)arg2 ;
-(id)extractContainerIDFromService:(unsigned)arg1 ;
-(id)getHIDDevicesForMatching:(id)arg1 ;
-(id)initWithMatching:(id)arg1 ;
-(id)getDeviceElements:(id)arg1 ;
-(BOOL)commit:(id)arg1 error:(id*)arg2 ;
-(BOOL)extract:(id)arg1 error:(id*)arg2 ;
@end

