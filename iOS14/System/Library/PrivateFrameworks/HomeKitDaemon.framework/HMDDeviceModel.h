/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

