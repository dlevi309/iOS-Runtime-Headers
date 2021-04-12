/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBSystemShellInitializationOptions.h>

@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions

@property (assign,setter=_setIsLegacyFBSystemApp:,nonatomic) BOOL _isLegacyFBSystemApp; 
@property (setter=_setRegisterPostCheckInPreServiceInitializationCallbackBlock:,nonatomic,copy) id _registerPostCheckInPreServiceInitializationCallbackBlock; 
@property (setter=_setRegisterLegacyPostInitCallbackBlock:,nonatomic,copy) id _registerLegacyPostInitCallbackBlock; 
@property (assign,nonatomic) BOOL initializeReadyForInteraction; 
@property (assign,nonatomic) BOOL resetDarkBootState; 
@property (assign,nonatomic) BOOL shouldWaitForMigrator; 
@property (assign,nonatomic) double systemSleepInterval; 
@property (nonatomic,copy) id registerAdditionalServicesBlock; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setIsLegacyFBSystemApp:(BOOL)arg1 ;
-(void)setResetDarkBootState:(BOOL)arg1 ;
-(void)setSystemSleepInterval:(double)arg1 ;
-(void)setShouldWaitForMigrator:(BOOL)arg1 ;
-(void)setRegisterAdditionalServicesBlock:(id)arg1 ;
-(void)_setRegisterPostCheckInPreServiceInitializationCallbackBlock:(/*^block*/id)arg1 ;
-(void)_setRegisterLegacyPostInitCallbackBlock:(/*^block*/id)arg1 ;
-(void)setInitializeReadyForInteraction:(BOOL)arg1 ;
@end

