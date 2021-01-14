/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSUUID;

@interface HMDExternalPersonManagerSettingsModel : HMBModel

@property (retain) NSNumber * importingFromPhotoLibraryEnabled; 
@property (retain) NSNumber * sharingFaceClassificationsEnabled; 
@property (retain) NSUUID * zoneUUID; 
+(id)hmbProperties;
-(id)createSettings;
@end

