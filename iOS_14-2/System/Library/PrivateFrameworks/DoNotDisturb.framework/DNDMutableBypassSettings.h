/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDBypassSettings.h>

@class NSString;

@interface DNDMutableBypassSettings : DNDBypassSettings

@property (assign,nonatomic) unsigned long long immediateBypassEventSourceType; 
@property (nonatomic,copy) NSString * immediateBypassCNGroupIdentifier; 
@property (assign,nonatomic) unsigned long long repeatEventSourceBehaviorEnabledSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImmediateBypassEventSourceType:(unsigned long long)arg1 ;
-(void)setImmediateBypassCNGroupIdentifier:(NSString *)arg1 ;
-(void)setRepeatEventSourceBehaviorEnabledSetting:(unsigned long long)arg1 ;
@end

