/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;

}
-(id)initWithContainerID:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(BOOL)factoryReset:(int)arg1 securityToken:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)getSecurityToken:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)getHIDDevices;
-(BOOL)setupInterface;
@end

