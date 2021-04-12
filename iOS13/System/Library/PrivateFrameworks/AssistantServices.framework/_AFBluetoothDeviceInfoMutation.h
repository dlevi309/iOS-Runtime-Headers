/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFBluetoothDeviceInfoMutating.h>

@class AFBluetoothDeviceInfo, NSString, NSUUID;

@interface _AFBluetoothDeviceInfoMutation : NSObject <AFBluetoothDeviceInfoMutating> {

	AFBluetoothDeviceInfo* _baseModel;
	NSString* _address;
	NSUUID* _deviceUID;
	unsigned _vendorID;
	unsigned _productID;
	BOOL _isAdvancedAppleAudioDevice;
	BOOL _supportsInEarDetection;
	BOOL _supportsVoiceTrigger;
	BOOL _supportsSpokenNotification;
	BOOL _supportsListeningModeANC;
	BOOL _supportsListeningModeTransparency;
	struct {
		unsigned isDirty : 1;
		unsigned hasAddress : 1;
		unsigned hasDeviceUID : 1;
		unsigned hasVendorID : 1;
		unsigned hasProductID : 1;
		unsigned hasIsAdvancedAppleAudioDevice : 1;
		unsigned hasSupportsInEarDetection : 1;
		unsigned hasSupportsVoiceTrigger : 1;
		unsigned hasSupportsSpokenNotification : 1;
		unsigned hasSupportsListeningModeANC : 1;
		unsigned hasSupportsListeningModeTransparency : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setAddress:(id)arg1 ;
-(void)setProductID:(unsigned)arg1 ;
-(void)setVendorID:(unsigned)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setDeviceUID:(id)arg1 ;
-(void)setIsAdvancedAppleAudioDevice:(BOOL)arg1 ;
-(void)setSupportsInEarDetection:(BOOL)arg1 ;
-(void)setSupportsVoiceTrigger:(BOOL)arg1 ;
-(void)setSupportsSpokenNotification:(BOOL)arg1 ;
-(void)setSupportsListeningModeANC:(BOOL)arg1 ;
-(void)setSupportsListeningModeTransparency:(BOOL)arg1 ;
@end

