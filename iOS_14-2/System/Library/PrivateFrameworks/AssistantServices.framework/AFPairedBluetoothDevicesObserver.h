/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class NSArray;

@interface AFPairedBluetoothDevicesObserver : NSObject {

	NSArray* _pairedDevices;
	os_unfair_lock_s _pairedDevicesLock;

}
+(id)sharedObserver;
-(id)init;
-(void)updatePairedDevices:(id)arg1 ;
-(id)pairedBluetoothDevices;
@end

