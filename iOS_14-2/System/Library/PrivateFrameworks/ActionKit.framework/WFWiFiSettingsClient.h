/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WiFiDeviceClientRef)device;
-(WiFiManagerClientRef)manager;
-(void)dealloc;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithWiFiManager:(WiFiManagerClientRef)arg1 device:(WiFiDeviceClientRef)arg2 ;
@end

