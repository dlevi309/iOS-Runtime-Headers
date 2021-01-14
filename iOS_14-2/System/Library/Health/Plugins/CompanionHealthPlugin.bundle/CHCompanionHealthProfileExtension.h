/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/CompanionHealthPlugin.bundle/CompanionHealthPlugin
*/

#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/CHCompanionHealthProfileExtending.h>

@class HDProfile, CHActivityApplicationInstallationManager, CHCompanionWorkoutCreditManager, CHFitnessAppBadgeManager, CHCoachingDiagnosticManager, CHTrendsNotificationManager, CHCompanionWidgetSchedulingManager, NSString;

@interface CHCompanionHealthProfileExtension : NSObject <HDProfileExtension, CHCompanionHealthProfileExtending> {

	HDProfile* _profile;
	CHActivityApplicationInstallationManager* _activityApplicationInstallationManager;
	CHCompanionWorkoutCreditManager* _companionWorkoutCreditManager;
	CHFitnessAppBadgeManager* _fitnessAppBadgeManager;
	CHCoachingDiagnosticManager* _coachDiagnosticManager;
	CHTrendsNotificationManager* _trendsNotificationManager;
	CHCompanionWidgetSchedulingManager* _widgetSchedulingManager;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) CHActivityApplicationInstallationManager * activityApplicationInstallationManager;              //@synthesize activityApplicationInstallationManager=_activityApplicationInstallationManager - In the implementation block
@property (nonatomic,retain) CHCompanionWorkoutCreditManager * companionWorkoutCreditManager;                                //@synthesize companionWorkoutCreditManager=_companionWorkoutCreditManager - In the implementation block
@property (nonatomic,retain) CHFitnessAppBadgeManager * fitnessAppBadgeManager;                                              //@synthesize fitnessAppBadgeManager=_fitnessAppBadgeManager - In the implementation block
@property (nonatomic,retain) CHCoachingDiagnosticManager * coachDiagnosticManager;                                           //@synthesize coachDiagnosticManager=_coachDiagnosticManager - In the implementation block
@property (nonatomic,retain) CHTrendsNotificationManager * trendsNotificationManager;                                        //@synthesize trendsNotificationManager=_trendsNotificationManager - In the implementation block
@property (nonatomic,retain) CHCompanionWidgetSchedulingManager * widgetSchedulingManager;                                   //@synthesize widgetSchedulingManager=_widgetSchedulingManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HDProfile *)arg1 ;
-(CHFitnessAppBadgeManager *)fitnessAppBadgeManager;
-(id)initWithProfile:(id)arg1 ;
-(void)setWidgetSchedulingManager:(CHCompanionWidgetSchedulingManager *)arg1 ;
-(void)registerFitnessAppBadgeCountProvider:(id)arg1 ;
-(CHCompanionWorkoutCreditManager *)companionWorkoutCreditManager;
-(CHCompanionWidgetSchedulingManager *)widgetSchedulingManager;
-(HDProfile *)profile;
-(void)unregisterFitnessAppBadgeCountProvider:(id)arg1 ;
-(CHActivityApplicationInstallationManager *)activityApplicationInstallationManager;
-(void)setActivityApplicationInstallationManager:(CHActivityApplicationInstallationManager *)arg1 ;
-(void)setCoachDiagnosticManager:(CHCoachingDiagnosticManager *)arg1 ;
-(void)setTrendsNotificationManager:(CHTrendsNotificationManager *)arg1 ;
-(void)setFitnessAppBadgeManager:(CHFitnessAppBadgeManager *)arg1 ;
-(void)setCompanionWorkoutCreditManager:(CHCompanionWorkoutCreditManager *)arg1 ;
-(CHTrendsNotificationManager *)trendsNotificationManager;
-(CHCoachingDiagnosticManager *)coachDiagnosticManager;
-(void)requestFitnessAppBadgeCountUpdate;
@end

