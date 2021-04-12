/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFBluetoothWirelessSplitterSessionInfoMutating.h>

@class AFBluetoothWirelessSplitterSessionInfo, NSArray, NSString;

@interface _AFBluetoothWirelessSplitterSessionInfoMutation : NSObject <AFBluetoothWirelessSplitterSessionInfoMutating> {

	AFBluetoothWirelessSplitterSessionInfo* _baseModel;
	long long _state;
	NSArray* _deviceAddresses;
	struct {
		unsigned isDirty : 1;
		unsigned hasState : 1;
		unsigned hasDeviceAddresses : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setState:(long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setDeviceAddresses:(id)arg1 ;
@end

