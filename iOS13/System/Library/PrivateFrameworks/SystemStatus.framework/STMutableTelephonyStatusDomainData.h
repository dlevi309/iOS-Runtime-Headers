/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STTelephonyStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class STTelephonyStatusDomainSIMInfo, NSString;

@interface STMutableTelephonyStatusDomainData : STTelephonyStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic,copy) STTelephonyStatusDomainSIMInfo * SIMOneInfo; 
@property (nonatomic,copy) STTelephonyStatusDomainSIMInfo * SIMTwoInfo; 
@property (assign,getter=isCellularRadioCapabilityEnabled,nonatomic) BOOL cellularRadioCapabilityEnabled; 
@property (assign,getter=isDualSIMEnabled,nonatomic) BOOL dualSIMEnabled; 
@property (assign,getter=isRadioModuleDead,nonatomic) BOOL radioModuleDead; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDualSIMEnabled:(BOOL)arg1 ;
-(void)updateSIMOneInfoWithBlock:(/*^block*/id)arg1 ;
-(void)updateSIMTwoInfoWithBlock:(/*^block*/id)arg1 ;
-(void)setCellularRadioCapabilityEnabled:(BOOL)arg1 ;
-(void)setRadioModuleDead:(BOOL)arg1 ;
-(BOOL)applyDiff:(id)arg1 ;
-(void)setSIMOneInfo:(STTelephonyStatusDomainSIMInfo *)arg1 ;
-(void)setSIMTwoInfo:(STTelephonyStatusDomainSIMInfo *)arg1 ;
@end

