/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clearDeveloperInstallBrickAlerts;
-(void)_bindAndRegisterDefaults;
-(id)_initWithLegacyDefaults:(id)arg1 ;
-(void)_migrateLegacySpringBoardPreferences;
-(void)_clearLegacySpringBoardPreferences;
-(void)migrateAndClearLegacyPreferences;
@end

