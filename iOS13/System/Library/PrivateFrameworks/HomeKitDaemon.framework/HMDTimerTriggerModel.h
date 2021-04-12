/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTriggerModel.h>

@class NSDate, NSData, NSString;

@interface HMDTimerTriggerModel : HMDTriggerModel

@property (nonatomic,copy) NSDate * fireDate; 
@property (nonatomic,copy) NSData * fireDateTimeZone; 
@property (nonatomic,copy) NSString * significantEvent; 
@property (nonatomic,copy) NSData * significantEventOffset; 
@property (nonatomic,copy) NSData * fireRepeatInterval; 
@property (nonatomic,copy) NSData * recurrences; 
+(id)properties;
-(id)createPayload;
@end

