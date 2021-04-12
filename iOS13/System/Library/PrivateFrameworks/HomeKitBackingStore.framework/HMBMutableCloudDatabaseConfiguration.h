/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBCloudDatabaseConfiguration.h>

@class NSString, CKOperationConfiguration, HMFScheduler;

@interface HMBMutableCloudDatabaseConfiguration : HMBCloudDatabaseConfiguration

@property (copy) NSString * sourceApplicationBundleIdentifier; 
@property (getter=isManateeContainer) BOOL manateeContainer; 
@property (copy) CKOperationConfiguration * defaultOperationConfiguration; 
@property (nonatomic,retain) HMFScheduler * apsRegistrationScheduler; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

