/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTriggerModel.h>

@class NSData, NSNumber;

@interface HMDEventTriggerModel : HMDTriggerModel

@property (nonatomic,retain) NSData * evaluationCondition; 
@property (nonatomic,retain) NSData * recurrences; 
@property (nonatomic,retain) NSNumber * executeOnce; 
+(id)properties;
-(id)createPayload;
@end

