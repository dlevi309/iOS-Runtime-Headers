/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;

}
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(BOOL)factoryReset:(unsigned char)arg1 securityToken:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)getSecurityToken:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)getHIDDevices;
-(BOOL)setupInterface;
@end

