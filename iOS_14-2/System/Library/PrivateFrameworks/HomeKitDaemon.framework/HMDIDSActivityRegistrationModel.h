/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSUUID, NSArray;

@interface HMDIDSActivityRegistrationModel : HMBModel

@property (nonatomic,retain) NSUUID * subjectDeviceIdentifier; 
@property (nonatomic,retain) NSArray * subActivities; 
+(id)hmbProperties;
+(id)hmbQueries;
+(id)registeredDevicesQuery;
@end

