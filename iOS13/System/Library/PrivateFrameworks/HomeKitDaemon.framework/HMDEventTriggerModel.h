/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

