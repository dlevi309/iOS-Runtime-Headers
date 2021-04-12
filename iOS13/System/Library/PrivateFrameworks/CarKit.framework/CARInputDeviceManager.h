/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/CARInputDeviceTouchpadDelegate.h>

@class NSArray, CARSession, NSString;

@interface CARInputDeviceManager : NSObject <CARInputDeviceTouchpadDelegate> {

	NSArray* _inputDevices;
	CARSession* _session;

}

@property (nonatomic,__weak,readonly) CARSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSArray * inputDevices;                   //@synthesize inputDevices=_inputDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(CARSession *)session;
-(id)touchpadWithSenderID:(unsigned long long)arg1 ;
-(NSArray *)inputDevices;
-(id)initWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3 session:(id)arg4 ;
-(void)vehicleInformationChanged:(id)arg1 ;
-(void)performHapticType:(unsigned long long)arg1 deviceUUID:(id)arg2 ;
-(id)_generateInputDevicesWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3 ;
-(id)_touchpadSettingsFromVehicleInformation:(id)arg1 ;
-(void)_updateTouchpadSettings:(id)arg1 ;
-(void)_enumerateTouchpadsUsingBlock:(/*^block*/id)arg1 ;
-(id)_inputDeviceWithSenderID:(unsigned long long)arg1 ;
-(BOOL)touchpadCharacterRecognitionSupported;
-(id)_initWithInputDevices:(id)arg1 session:(id)arg2 ;
@end

