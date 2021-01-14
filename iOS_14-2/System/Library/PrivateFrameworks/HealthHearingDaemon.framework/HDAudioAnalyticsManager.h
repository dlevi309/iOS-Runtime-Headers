/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDPeriodicActivity, NSObject, NSString;

@interface HDAudioAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {

	HDProfile* _profile;
	double _calculationPeriod;
	double _retryPeriod;
	HDPeriodicActivity* _periodicActivity;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) double calculationPeriod;                         //@synthesize calculationPeriod=_calculationPeriod - In the implementation block
@property (nonatomic,readonly) double retryPeriod;                               //@synthesize retryPeriod=_retryPeriod - In the implementation block
@property (nonatomic,retain) HDPeriodicActivity * periodicActivity;              //@synthesize periodicActivity=_periodicActivity - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(id)lastSuccessfulCalculation;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)_recordedDataForToday;
-(double)calculationPeriod;
-(BOOL)_dayComponents:(id)arg1 lessThan:(id)arg2 ;
-(double)retryPeriod;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDProfile *)profile;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)capturePhoneAnalytics;
-(HDPeriodicActivity *)periodicActivity;
-(id)_dayForDate:(id)arg1 ;
-(void)setPeriodicActivity:(HDPeriodicActivity *)arg1 ;
@end

