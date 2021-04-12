/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMFSoftwareVersion, NSNumber, HMSoftwareUpdateDocumentationMetadata;

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject

@property (nonatomic,copy) HMFSoftwareVersion * softwareVersion; 
@property (nonatomic,copy) NSNumber * state; 
@property (nonatomic,copy) NSNumber * downloadSize; 
@property (nonatomic,copy) HMSoftwareUpdateDocumentationMetadata * documentationMetadata; 
+(id)properties;
@end

