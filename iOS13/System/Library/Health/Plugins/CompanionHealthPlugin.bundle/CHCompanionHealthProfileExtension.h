/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/CompanionHealthPlugin.bundle/CompanionHealthPlugin
*/

#import <libobjc.A.dylib/HDXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/CHCompanionHealthProfileExtending.h>

@class HDProfile, HDXPCListener, CHActivityApplicationInstallationManager, CHCompanionWorkoutCreditManager, CHFitnessAppBadgeManager, CHCoachingDiagnosticManager, CHTrendsNotificationManager, NSString;

@interface CHCompanionHealthProfileExtension : NSObject <HDXPCListenerDelegate, HDProfileExtension, CHCompanionHealthProfileExtending> {

	HDProfile* _profile;
	HDXPCListener* _listener;
	CHActivityApplicationInstallationManager* _activityApplicationInstallationManager;
	CHCompanionWorkoutCreditManager* _companionWorkoutCreditManager;
	CHFitnessAppBadgeManager* _fitnessAppBadgeManager;
	CHCoachingDiagnosticManager* _coachDiagnosticManager;
	CHTrendsNotificationManager* _trendsNotificationManager;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDXPCListener * listener;                                                                       //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) CHActivityApplicationInstallationManager * activityApplicationInstallationManager;              //@synthesize activityApplicationInstallationManager=_activityApplicationInstallationManager - In the implementation block
@property (nonatomic,retain) CHCompanionWorkoutCreditManager * companionWorkoutCreditManager;                                //@synthesize companionWorkoutCreditManager=_companionWorkoutCreditManager - In the implementation block
@property (nonatomic,retain) CHFitnessAppBadgeManager * fitnessAppBadgeManager;                                              //@synthesize fitnessAppBadgeManager=_fitnessAppBadgeManager - In the implementation block
@property (nonatomic,retain) CHCoachingDiagnosticManager * coachDiagnosticManager;                                           //@synthesize coachDiagnosticManager=_coachDiagnosticManager - In the implementation block
@property (nonatomic,retain) CHTrendsNotificationManager * trendsNotificationManager;                                        //@synthesize trendsNotificationManager=_trendsNotificationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDXPCListener *)listener;
-(void)setListener:(HDXPCListener *)arg1 ;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)registerFitnessAppBadgeCountProvider:(id)arg1 ;
-(void)unregisterFitnessAppBadgeCountProvider:(id)arg1 ;
-(void)requestFitnessAppBadgeCountUpdate;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)serverWithClient:(id)arg1 error:(id*)arg2 ;
-(CHActivityApplicationInstallationManager *)activityApplicationInstallationManager;
-(void)setActivityApplicationInstallationManager:(CHActivityApplicationInstallationManager *)arg1 ;
-(CHCompanionWorkoutCreditManager *)companionWorkoutCreditManager;
-(void)setCompanionWorkoutCreditManager:(CHCompanionWorkoutCreditManager *)arg1 ;
-(CHFitnessAppBadgeManager *)fitnessAppBadgeManager;
-(void)setFitnessAppBadgeManager:(CHFitnessAppBadgeManager *)arg1 ;
-(CHCoachingDiagnosticManager *)coachDiagnosticManager;
-(void)setCoachDiagnosticManager:(CHCoachingDiagnosticManager *)arg1 ;
-(CHTrendsNotificationManager *)trendsNotificationManager;
-(void)setTrendsNotificationManager:(CHTrendsNotificationManager *)arg1 ;
@end

