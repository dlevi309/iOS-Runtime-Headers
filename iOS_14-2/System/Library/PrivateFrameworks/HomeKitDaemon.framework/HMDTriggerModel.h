/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSArray, NSNumber, NSDate, HMDUser, HMDDevice;

@interface HMDTriggerModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSArray * currentActionSets; 
@property (nonatomic,copy) NSNumber * active; 
@property (nonatomic,copy) NSDate * mostRecentFireDate; 
@property (nonatomic,retain) HMDUser * owner; 
@property (nonatomic,retain) HMDDevice * owningDevice; 
+(id)properties;
-(id)createPayload;
-(id)dependentUUIDs;
@end

