/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

