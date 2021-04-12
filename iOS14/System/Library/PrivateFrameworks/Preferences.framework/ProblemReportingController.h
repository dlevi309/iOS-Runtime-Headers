/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/VTUISiriDataSharingOptInPresentationDelegate.h>

@class PrefsUILinkLabel, PSSpecifier, NSArray, HKHealthStore, AFSettingsConnection;

@interface ProblemReportingController : PSListController <VTUISiriDataSharingOptInPresentationDelegate> {

	PrefsUILinkLabel* _aboutDiagnosticsLinkLabel;
	PSSpecifier* _filesystemMetadataSnapshotSpecifier;
	NSArray* _appActivitySpecifiers;
	NSArray* _iCloudSpecifiers;
	PSSpecifier* _spinnerSpecifier;
	BOOL _shouldShareHealthRecordsData;
	HKHealthStore* _healthStore;
	NSArray* _healthDataSpecifiers;
	NSArray* _healthRecordsDataSpecifiers;
	NSArray* _wheelchairDataSpecifiers;
	NSArray* _handwashingDataSpecifiers;
	NSArray* _automatedFeedbackSpecifiers;
	AFSettingsConnection* _assistantSettingsConnection;
	NSArray* _improveSiriSpecifiers;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) AFSettingsConnection * assistantSettingsConnection;              //@synthesize assistantSettingsConnection=_assistantSettingsConnection - In the implementation block
@property (nonatomic,retain) NSArray * improveSiriSpecifiers;                                 //@synthesize improveSiriSpecifiers=_improveSiriSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * automatedFeedbackSpecifiers;                           //@synthesize automatedFeedbackSpecifiers=_automatedFeedbackSpecifiers - In the implementation block
@property (assign,nonatomic) BOOL shouldShareHealthRecordsData;                               //@synthesize shouldShareHealthRecordsData=_shouldShareHealthRecordsData - In the implementation block
@property (readonly) PSSpecifier * spinnerSpecifier; 
@property (readonly) PSSpecifier * filesystemMetadataSnapshotSpecifier; 
@property (readonly) NSArray * appActivitySpecifiers; 
@property (readonly) NSArray * healthDataSpecifiers;                                          //@synthesize healthDataSpecifiers=_healthDataSpecifiers - In the implementation block
@property (readonly) NSArray * healthRecordsDataSpecifiers;                                   //@synthesize healthRecordsDataSpecifiers=_healthRecordsDataSpecifiers - In the implementation block
@property (readonly) NSArray * wheelchairDataSpecifiers;                                      //@synthesize wheelchairDataSpecifiers=_wheelchairDataSpecifiers - In the implementation block
@property (readonly) NSArray * handwashingDataSpecifiers;                                     //@synthesize handwashingDataSpecifiers=_handwashingDataSpecifiers - In the implementation block
+(BOOL)isProblemReportingEnabled;
-(HKHealthStore *)healthStore;
-(id)specifiers;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)snapshot:(id)arg1 ;
-(void)dismissAboutSheet:(id)arg1 ;
-(void)setProblemReportingEnabled:(BOOL)arg1 ;
-(NSArray *)appActivitySpecifiers;
-(NSArray *)improveSiriSpecifiers;
-(id)iCloudSpecifiers;
-(NSArray *)healthDataSpecifiers;
-(NSArray *)healthRecordsDataSpecifiers;
-(NSArray *)handwashingDataSpecifiers;
-(NSArray *)wheelchairDataSpecifiers;
-(NSArray *)automatedFeedbackSpecifiers;
-(PSSpecifier *)spinnerSpecifier;
-(PSSpecifier *)filesystemMetadataSnapshotSpecifier;
-(AFSettingsConnection *)assistantSettingsConnection;
-(void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2 ;
-(id)problemReportingEnabled:(id)arg1 ;
-(id)shouldShareAppActivityWithAppDevelopers;
-(void)setShouldShareiCloudAnalytics:(id)arg1 specifier:(id)arg2 ;
-(void)showAboutImproveSiriAnalyticsSheet;
-(void)setShouldShareHealthData:(id)arg1 specifier:(id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forIdMSConfigKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)shouldShareHealthDataForSpecifier:(id)arg1 ;
-(void)setImproveSiriAndDictationValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)shouldShowiCloudSpecifiersForAccount:(id)arg1 ;
-(id)getCurrentImproveSiriAndDictationValueForSpecifier:(id)arg1 ;
-(id)shouldShareiCloudAnalytics:(id)arg1 ;
-(void)setShouldShareHealthRecordsData:(id)arg1 specifier:(id)arg2 ;
-(void)setShouldShareHealthRecordsData:(BOOL)arg1 ;
-(id)shouldShareHealthRecordsDataForSpecifier:(id)arg1 ;
-(BOOL)shouldShareHealthRecordsData;
-(void)_handleUpdateForSpecifierID:(id)arg1 value:(id)arg2 error:(id)arg3 ;
-(void)setShouldShareWheelchairData:(id)arg1 specifier:(id)arg2 ;
-(id)shouldShareWheelchairDataForSpecifier:(id)arg1 ;
-(void)setShouldShareHandwashingData:(id)arg1 specifier:(id)arg2 ;
-(id)shouldShareHandwashingDataForSpecifier:(id)arg1 ;
-(void)setProblemReportingEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)checkDiagnosticsSessionAvailability;
-(void)updateiCloudAnalyticsForSpecifierID:(id)arg1 ;
-(void)updateHealthRecordsPreferenceForSpecifierID:(id)arg1 ;
-(void)launchDiagnosticsSession:(id)arg1 ;
-(void)showAboutAnalyticsSheet;
-(void)showAboutSheetWithTitle:(id)arg1 content:(id)arg2 ;
-(void)showAboutiCloudAnalyticsSheet;
-(void)showAboutAppAnalyticsSheet;
-(void)showAboutHealthDataSheet;
-(void)showAboutWheelchairDataSheet;
-(void)showAboutHealthRecordsDataSheet;
-(void)showAboutHandwashingDataSheet;
-(void)automatedFeedbackLinkTapped;
-(id)automatedFeedbackEnabled:(id)arg1 ;
-(void)setImproveSiriSpecifiers:(NSArray *)arg1 ;
-(void)setAutomatedFeedbackEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setAutomatedFeedbackSpecifiers:(NSArray *)arg1 ;
-(void)setAssistantSettingsConnection:(AFSettingsConnection *)arg1 ;
@end

