/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSoftwareUpdateDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=hasDeveloperInstallBrickAlertShown7DayWarning,nonatomic) BOOL developerInstallBrickAlertShown7DayWarning; 
@property (assign,getter=hasDeveloperInstallBrickAlertShown3DayWarning,nonatomic) BOOL developerInstallBrickAlertShown3DayWarning; 
@property (assign,getter=hasDeveloperInstallBrickAlertShownTomorrowWarning,nonatomic) BOOL developerInstallBrickAlertShownTomorrowWarning; 
-(void)setDeveloperInstallBrickAlertShown3DayWarning:(BOOL)arg1 ;
-(BOOL)hasDeveloperInstallBrickAlertShown3DayWarning;
-(void)setDeveloperInstallBrickAlertShown7DayWarning:(BOOL)arg1 ;
-(BOOL)hasDeveloperInstallBrickAlertShown7DayWarning;
-(void)setDeveloperInstallBrickAlertShownTomorrowWarning:(BOOL)arg1 ;
-(BOOL)hasDeveloperInstallBrickAlertShownTomorrowWarning;
-(void)_bindAndRegisterDefaults;
-(void)clearDeveloperInstallBrickAlerts;
@end

