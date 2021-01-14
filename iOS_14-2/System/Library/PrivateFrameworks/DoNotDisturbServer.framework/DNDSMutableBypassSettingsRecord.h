/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSBypassSettingsRecord.h>

@class NSNumber, NSString;

@interface DNDSMutableBypassSettingsRecord : DNDSBypassSettingsRecord

@property (nonatomic,copy) NSNumber * immediateBypassEventSourceType; 
@property (nonatomic,copy) NSString * immediateBypassCNGroupIdentifier; 
@property (nonatomic,copy) NSNumber * repeatEventSourceBehaviorEnabledSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImmediateBypassEventSourceType:(NSNumber *)arg1 ;
-(void)setImmediateBypassCNGroupIdentifier:(NSString *)arg1 ;
-(void)setRepeatEventSourceBehaviorEnabledSetting:(NSNumber *)arg1 ;
@end

