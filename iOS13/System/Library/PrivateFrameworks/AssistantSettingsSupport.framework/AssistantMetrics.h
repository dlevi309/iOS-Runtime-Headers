/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/


@class PETEventProperty, PETScalarEventTracker;

@interface AssistantMetrics : NSObject {

	PETEventProperty* _toggleTrackerNameProperty;
	PETEventProperty* _detailToggleTrackerNameProperty;
	PETEventProperty* _onOffProperty;
	PETEventProperty* _confirmedTrueFalseProperty;
	PETEventProperty* _siriSourceProperty;
	PETEventProperty* _foundInAppsProperty;
	PETScalarEventTracker* _visitTracker;
	PETScalarEventTracker* _enableSiriTracker;
	PETScalarEventTracker* _disableSiriTracker;
	PETScalarEventTracker* _startEnrollmentTracker;
	PETScalarEventTracker* _toggleTracker;
	PETScalarEventTracker* _detailVisitTracker;
	PETScalarEventTracker* _detailVisitFoundInAppsTracker;
	PETScalarEventTracker* _detailToggleFoundInAppsTracker;
	PETScalarEventTracker* _detailToggleSiriKitTracker;
	PETScalarEventTracker* _detailToggleSearchTracker;

}
+(id)sharedMetrics;
+(void)didDetailToggle:(id)arg1 bundleId:(id)arg2 on:(BOOL)arg3 ;
+(void)didVisit;
+(void)didToggle:(id)arg1 on:(BOOL)arg2 ;
+(void)didEnableSiriConfirmed:(BOOL)arg1 source:(id)arg2 ;
+(void)didDisableSiriConfirmed:(BOOL)arg1 source:(id)arg2 ;
+(void)didStartEnrollment:(BOOL)arg1 ;
+(void)didDetailVisit:(id)arg1 ;
-(void)logVisit;
-(void)logEnableSiriConfirmed:(BOOL)arg1 source:(id)arg2 ;
-(void)logDisableSiriConfirmed:(BOOL)arg1 source:(id)arg2 ;
-(void)logStartEnrollment:(BOOL)arg1 ;
-(void)logToggle:(id)arg1 on:(BOOL)arg2 ;
-(void)logDetailVisit:(id)arg1 ;
-(void)logDetailToggle:(id)arg1 bundleId:(id)arg2 on:(BOOL)arg3 ;
-(id)__siriSourceProperty;
-(id)__confirmedTrueFalseProperty;
-(id)__toggleTrackerNameProperty;
-(id)__onOffProperty;
-(id)__foundInAppsProperty;
-(id)__detailToggleTrackerNameProperty;
-(id)__visitTracker;
-(id)__enableSiriTracker;
-(id)__disableSiriTracker;
-(id)__startEnrollmentTracker;
-(id)__toggleTracker;
-(id)__detailVisitFoundInAppsTracker;
-(id)__detailVisitTracker;
-(id)__detailToggleFoundInAppsTracker;
-(id)__detailToggleSiriKitTracker;
-(id)__detailToggleSearchTracker;
@end

