/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/WiFiSharing.platform/WiFiSharing
*/

#import <libobjc.A.dylib/ACCPlatformWiFiSharingProtocol.h>
#import <libobjc.A.dylib/ACCPlatformPluginProtocol.h>

@class NSString;

@interface ACCPlatformPluginWiFiSharing : NSObject <ACCPlatformWiFiSharingProtocol, ACCPlatformPluginProtocol> {

	BOOL _hasWAPICapability;
	BOOL _isRunning;

}

@property (assign,nonatomic) BOOL isRunning;                        //@synthesize isRunning=_isRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(BOOL)hasWAPICapability;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(BOOL)isDeviceConnectedToWiFi;
-(id)copyDeviceWiFiNetworkInformation;
-(BOOL)handleAccessoryWiFiInformation:(id)arg1 ;
-(BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)arg1 ;
@end

