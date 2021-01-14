/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBSystemShellInitializationOptions.h>

@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions

@property (assign,nonatomic) BOOL initializeReadyForInteraction; 
@property (assign,nonatomic) BOOL resetDarkBootState; 
@property (assign,nonatomic) BOOL shouldWaitForMigrator; 
@property (assign,nonatomic) double systemSleepInterval; 
@property (nonatomic,copy) id registerAdditionalServicesBlock; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInitializeReadyForInteraction:(BOOL)arg1 ;
-(void)setResetDarkBootState:(BOOL)arg1 ;
-(void)setShouldWaitForMigrator:(BOOL)arg1 ;
-(void)setSystemSleepInterval:(double)arg1 ;
-(void)setRegisterAdditionalServicesBlock:(id)arg1 ;
@end

