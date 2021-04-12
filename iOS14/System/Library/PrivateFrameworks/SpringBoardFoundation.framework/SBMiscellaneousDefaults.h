/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBMiscellaneousDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) long long dataPlanActivationPromptCount; 
@property (nonatomic,readonly) BOOL suppressNoSimAlert; 
@property (nonatomic,readonly) BOOL walletPreArmForceLockButton; 
@property (assign,nonatomic) BOOL suppressAlertsForKeynote; 
@property (nonatomic,readonly) BOOL disableAsyncRenderingSurfaceRetention; 
@property (assign,nonatomic) BOOL launchWithMallocStackLogging; 
@property (nonatomic,readonly) BOOL disableAutomaticMallocStackLogging; 
@property (nonatomic,readonly) BOOL enableDynamicJetsamLimits; 
@property (assign,nonatomic) float backlightLevel; 
-(void)setEnableDynamicJetsamLimits:(BOOL)arg1 ;
-(BOOL)enableDynamicJetsamLimits;
-(void)setDataPlanActivationPromptCount:(long long)arg1 ;
-(long long)dataPlanActivationPromptCount;
-(void)setLaunchWithMallocStackLogging:(BOOL)arg1 ;
-(BOOL)launchWithMallocStackLogging;
-(void)setSuppressAlertsForKeynote:(BOOL)arg1 ;
-(BOOL)suppressAlertsForKeynote;
-(void)setDisableAutomaticMallocStackLogging:(BOOL)arg1 ;
-(BOOL)disableAutomaticMallocStackLogging;
-(void)setWalletPreArmForceLockButton:(BOOL)arg1 ;
-(BOOL)walletPreArmForceLockButton;
-(void)setSuppressNoSimAlert:(BOOL)arg1 ;
-(BOOL)suppressNoSimAlert;
-(void)setDisableAsyncRenderingSurfaceRetention:(BOOL)arg1 ;
-(BOOL)disableAsyncRenderingSurfaceRetention;
-(void)setBacklightLevel:(float)arg1 ;
-(float)backlightLevel;
-(void)_bindAndRegisterDefaults;
@end

