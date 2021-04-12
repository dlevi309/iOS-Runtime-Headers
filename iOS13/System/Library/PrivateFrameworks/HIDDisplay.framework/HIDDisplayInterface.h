/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(unsigned long long)registryID;
-(id)device;
-(NSString *)containerID;
-(NSArray *)capabilities;
-(id)initWithContainerID:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(void)setDevice:(id)arg1 ;
-(id)getHIDDevices;
-(BOOL)hasMatchingContainerID:(id)arg1 containerID:(id)arg2 ;
-(id)extractContainerIDFromService:(unsigned)arg1 ;
-(id)getHIDDevicesForMatching:(id)arg1 ;
-(id)initWithMatching:(id)arg1 ;
-(id)getDeviceElements:(id)arg1 ;
-(BOOL)commit:(id)arg1 error:(id*)arg2 ;
-(BOOL)extract:(id)arg1 error:(id*)arg2 ;
@end

