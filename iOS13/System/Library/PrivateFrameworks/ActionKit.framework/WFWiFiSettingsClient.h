/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class NSString;

@interface WFWiFiSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;

}

@property (nonatomic,readonly) WiFiManagerClientRef manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) WiFiDeviceClientRef device;                //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(WiFiManagerClientRef)manager;
-(WiFiDeviceClientRef)device;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithWiFiManager:(WiFiManagerClientRef)arg1 device:(WiFiDeviceClientRef)arg2 ;
@end

