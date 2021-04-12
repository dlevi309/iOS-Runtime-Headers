/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDEventModel.h>

@class NSString, NSNumber, NSArray;

@interface HMDPresenceEventModel : HMDEventModel

@property (nonatomic,retain) NSString * presenceType; 
@property (nonatomic,retain) NSNumber * activation; 
@property (nonatomic,retain) NSArray * users; 
+(id)properties;
+(id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 ;
@end

