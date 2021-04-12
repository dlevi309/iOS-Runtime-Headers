/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STBatteryStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class NSString;

@interface STMutableBatteryStatusDomainData : STBatteryStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (assign,nonatomic) unsigned long long chargingState; 
@property (assign,nonatomic) unsigned long long percentCharge; 
@property (assign,getter=isBatterySaverModeActive,nonatomic) BOOL batterySaverModeActive; 
@property (nonatomic,copy) NSString * chargingDescription; 
@property (assign,nonatomic) unsigned long long chargingDescriptionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setChargingState:(unsigned long long)arg1 ;
-(BOOL)applyDiff:(id)arg1 ;
-(void)setPercentCharge:(unsigned long long)arg1 ;
-(void)setBatterySaverModeActive:(BOOL)arg1 ;
-(void)setChargingDescription:(NSString *)arg1 ;
-(void)setChargingDescriptionType:(unsigned long long)arg1 ;
@end

