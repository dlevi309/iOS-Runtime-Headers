/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSUserDefaults, NSString, NSDictionary;

@interface SUSUISoftwareUpdateDefaults : BSAbstractDefaultDomain {

	NSUserDefaults* _sbLegacyDefaults;

}

@property (nonatomic,retain) NSString * lastOSVersion; 
@property (nonatomic,retain) NSDictionary * softwareUpdateState; 
@property (assign,nonatomic) BOOL needsAlertPresentationAfterOTAUpdate; 
-(void)setLastOSVersion:(NSString *)arg1 ;
-(NSString *)lastOSVersion;
-(void)setNeedsAlertPresentationAfterOTAUpdate:(BOOL)arg1 ;
-(BOOL)needsAlertPresentationAfterOTAUpdate;
-(void)setSoftwareUpdateState:(NSDictionary *)arg1 ;
-(NSDictionary *)softwareUpdateState;
-(id)init;
-(void)_bindAndRegisterDefaults;
-(void)clearDeveloperInstallBrickAlerts;
-(id)_initWithLegacyDefaults:(id)arg1 ;
-(void)_migrateLegacySpringBoardPreferences;
-(void)_clearLegacySpringBoardPreferences;
-(void)migrateAndClearLegacyPreferences;
@end

