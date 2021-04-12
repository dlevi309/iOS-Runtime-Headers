/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSUUID, NSArray, NSString, HMDHomeKitVersion, HMFProductInfo, HMDRPIdentity;

@interface HMDDeviceModel : HMDBackingStoreModelObject

@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSArray * handles; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) HMDHomeKitVersion * version; 
@property (nonatomic,copy) HMFProductInfo * productInfo; 
@property (nonatomic,copy) HMDRPIdentity * rpIdentity; 
@property (nonatomic,readonly) NSArray * deviceHandles; 
+(id)properties;
+(id)schemaHashRoot;
-(BOOL)diff:(id)arg1 differingFields:(id*)arg2 ;
-(NSArray *)deviceHandles;
@end

