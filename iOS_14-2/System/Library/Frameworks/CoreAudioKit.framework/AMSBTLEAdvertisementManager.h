/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@class CBPeripheralManager, NSString;

@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate> {

	CBPeripheralManager* peripheralManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(id)init;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)dealloc;
-(BOOL)isAdvertising;
-(BOOL)isLECapableHardware;
-(void)advertiseMIDIService;
-(void)stopAdvertisingMIDIService;
@end

