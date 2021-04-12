/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

