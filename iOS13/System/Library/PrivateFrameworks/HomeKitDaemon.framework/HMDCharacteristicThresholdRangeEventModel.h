/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCharacteristicEventBaseModel.h>

@class NSNumber;

@interface HMDCharacteristicThresholdRangeEventModel : HMDCharacteristicEventBaseModel

@property (nonatomic,retain) NSNumber * min; 
@property (nonatomic,retain) NSNumber * max; 
+(id)properties;
+(id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 checkForSupport:(BOOL)arg5 ;
@end

