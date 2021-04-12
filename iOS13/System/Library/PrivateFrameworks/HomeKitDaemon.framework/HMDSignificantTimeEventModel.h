/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDEventModel.h>

@class NSString, NSData;

@interface HMDSignificantTimeEventModel : HMDEventModel

@property (nonatomic,retain) NSString * significantEvent; 
@property (nonatomic,retain) NSData * offset; 
+(id)properties;
+(id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 ;
@end

