/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaAccessoryModel.h>

@class NSString, HMDDevice, HMFPairingIdentity, NSData, HMFSoftwareVersion, HMFWiFiNetworkInfo;

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel

@property (nonatomic,retain) NSString * deviceUUID; 
@property (nonatomic,retain) HMDDevice * device; 
@property (nonatomic,retain) HMFPairingIdentity * pairingIdentity; 
@property (nonatomic,retain) NSData * loggedInAccount; 
@property (nonatomic,retain) NSData * symptoms; 
@property (nonatomic,retain) HMFSoftwareVersion * softwareVersion; 
@property (nonatomic,retain) HMFWiFiNetworkInfo * wifiNetworkInfo; 
@property (nonatomic,retain) NSString * appleMediaAccessoryChangeTag; 
+(id)properties;
@end

