/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isMedusaEnabled,nonatomic,readonly) BOOL medusaEnabled; 
@property (nonatomic,readonly) long long medusaDeviceSimulation; 
@property (getter=isBreadcrumbDisabled,nonatomic,readonly) BOOL breadcrumbDisabled; 
-(void)setMedusaEnabled:(BOOL)arg1 ;
-(BOOL)isMedusaEnabled;
-(void)setBreadcrumbDisabled:(BOOL)arg1 ;
-(BOOL)isBreadcrumbDisabled;
-(void)setMedusaDeviceSimulation:(long long)arg1 ;
-(long long)medusaDeviceSimulation;
-(void)_bindAndRegisterDefaults;
@end

