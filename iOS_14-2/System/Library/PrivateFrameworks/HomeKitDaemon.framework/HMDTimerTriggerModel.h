/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

