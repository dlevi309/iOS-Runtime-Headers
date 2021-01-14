/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clearDeveloperInstallBrickAlerts;
-(void)_bindAndRegisterDefaults;
@end

