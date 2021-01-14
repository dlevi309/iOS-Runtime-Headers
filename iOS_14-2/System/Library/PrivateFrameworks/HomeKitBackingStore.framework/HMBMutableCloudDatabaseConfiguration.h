/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

