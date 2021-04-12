/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) float backlightLevel; 
-(void)setBacklightLevel:(float)arg1 ;
-(float)backlightLevel;
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
-(void)_bindAndRegisterDefaults;
@end

