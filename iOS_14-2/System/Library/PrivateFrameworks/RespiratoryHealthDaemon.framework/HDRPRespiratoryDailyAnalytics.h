/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding;
@class HDProfile, HDPeriodicActivity, NSObject, NSString;

@interface HDRPRespiratoryDailyAnalytics : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {

	HDProfile* _profile;
	double _calculationPeriod;
	double _retryPeriod;
	HDPeriodicActivity* _periodicActivity;
	NSObject*<OS_dispatch_queue> _queue;
	id<HKFeatureAvailabilityProviding> _featureAvailabilityProvider;

}

@property (nonatomic,readonly) HDProfile * profile;                                                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) double calculationPeriod;                                                    //@synthesize calculationPeriod=_calculationPeriod - In the implementation block
@property (nonatomic,readonly) double retryPeriod;                                                          //@synthesize retryPeriod=_retryPeriod - In the implementation block
@property (nonatomic,retain) HDPeriodicActivity * periodicActivity;                                         //@synthesize periodicActivity=_periodicActivity - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<HKFeatureAvailabilityProviding> featureAvailabilityProvider;              //@synthesize featureAvailabilityProvider=_featureAvailabilityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(double)calculationPeriod;
-(double)retryPeriod;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDProfile *)profile;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDPeriodicActivity *)periodicActivity;
-(void)setPeriodicActivity:(HDPeriodicActivity *)arg1 ;
-(id<HKFeatureAvailabilityProviding>)featureAvailabilityProvider;
-(id)initWithProfile:(id)arg1 featureAvailabilityProvider:(id)arg2 ;
-(long long)_gatherAndSendDailyAnalyticsAndReturnError:(id*)arg1 ;
-(BOOL)_hasAnalyticsBeenReportedForToday:(id)arg1 ;
@end

