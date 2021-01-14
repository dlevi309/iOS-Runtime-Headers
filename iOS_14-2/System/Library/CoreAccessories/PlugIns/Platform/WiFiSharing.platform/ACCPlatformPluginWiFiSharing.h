/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(BOOL)hasWAPICapability;
-(BOOL)handleAccessoryWiFiInformation:(id)arg1 ;
-(BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)arg1 ;
-(BOOL)isRunning;
-(void)stopPlugin;
-(void)initPlugin;
-(BOOL)isDeviceConnectedToWiFi;
-(id)copyDeviceWiFiNetworkInformation;
-(void)startPlugin;
@end

