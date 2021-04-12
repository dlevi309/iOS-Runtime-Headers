/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, HAPPairingIdentity, HMFPairingIdentity, NSDate, NSArray;

@interface HMDUserManagementOperationModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSNumber * operationType; 
@property (nonatomic,retain) HAPPairingIdentity * userPairingIdentity; 
@property (nonatomic,retain) HMFPairingIdentity * accessoryPairingIdentity; 
@property (nonatomic,retain) HAPPairingIdentity * ownerPairingIdentity; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSArray * dependencies; 
+(id)properties;
-(id)dependentUUIDs;
@end

