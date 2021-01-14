/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSUUID, NSNumber;

@interface HMDUserActionPredictionModel : HMBModel

@property (copy) NSUUID * predictionTargetUUID; 
@property (copy) NSUUID * targetServiceUUID; 
@property (copy) NSUUID * targetServiceGroupUUID; 
@property (copy) NSUUID * targetGroupUUID; 
@property (copy) NSNumber * type; 
@property (copy) NSNumber * groupType; 
@property (copy) NSNumber * predictionScore; 
+(BOOL)hmbExcludeFromCloudStorage;
+(id)hmbProperties;
-(id)userActionPrediction;
-(id)initWithUserActionPrediction:(id)arg1 ;
@end

