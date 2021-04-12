/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDEventModel.h>

@class NSString, NSNumber;

@interface HMDCharacteristicEventBaseModel : HMDEventModel

@property (nonatomic,retain) NSString * accessory; 
@property (nonatomic,retain) NSNumber * serviceID; 
@property (nonatomic,retain) NSNumber * characteristicID; 
+(id)properties;
+(id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 className:(Class)arg4 message:(id)arg5 checkForSupport:(BOOL)arg6 outCharateristic:(id*)arg7 ;
-(id)dependentUUIDs;
@end

