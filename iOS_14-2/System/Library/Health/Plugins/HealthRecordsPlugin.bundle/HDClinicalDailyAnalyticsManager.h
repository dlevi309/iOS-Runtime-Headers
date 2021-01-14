/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>
#import <libobjc.A.dylib/HDAnalyticsSubmissionCoordinatorDelegate.h>

@protocol OS_dispatch_queue;
@class HDPeriodicActivity, NSObject, HDHealthRecordsProfileExtension, HDProfile, NSString;

@interface HDClinicalDailyAnalyticsManager : NSObject <HDPeriodicActivityDelegate, HDAnalyticsSubmissionCoordinatorDelegate> {

	HDPeriodicActivity* _periodicActivity;
	NSObject*<OS_dispatch_queue> _queue;
	HDHealthRecordsProfileExtension* _profileExtension;
	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDProfile *)profile;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(id)initWithProfileExtension:(id)arg1 ;
-(void)_queue_didTriggerClinicalAnalyticsForReason:(long long)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_queue_triggerClinicalContentAnalyticsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_queue_collectAccountCreationDateAnalyticsWithError:(id*)arg1 ;
-(void)triggerDailyAnalyticsForReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end

