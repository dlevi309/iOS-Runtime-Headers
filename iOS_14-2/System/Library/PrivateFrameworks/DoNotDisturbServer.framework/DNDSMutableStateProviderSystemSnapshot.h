/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSStateProviderSystemSnapshot.h>

@class NSArray, NSDictionary;

@interface DNDSMutableStateProviderSystemSnapshot : DNDSStateProviderSystemSnapshot

@property (nonatomic,copy) NSArray * assertions; 
@property (nonatomic,copy) NSArray * activeAssertionUUIDs; 
@property (nonatomic,copy) NSDictionary * activeDateIntervalByAssertionUUID; 
@property (assign,nonatomic) unsigned long long interruptionBehaviorSetting; 
@property (assign,nonatomic) unsigned long long lostModeState; 
-(void)setLostModeState:(unsigned long long)arg1 ;
-(void)setAssertions:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInterruptionBehaviorSetting:(unsigned long long)arg1 ;
-(void)setActiveAssertionUUIDs:(NSArray *)arg1 ;
-(void)setActiveDateIntervalByAssertionUUID:(NSDictionary *)arg1 ;
@end

