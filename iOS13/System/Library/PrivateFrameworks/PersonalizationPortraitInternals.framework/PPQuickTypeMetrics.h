/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class NSObject, PETScalarEventTracker, PETDistributionEventTracker;

@interface PPQuickTypeMetrics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PETScalarEventTracker* _frameworkErrors;
	PETDistributionEventTracker* _contactsMatches;
	PETDistributionEventTracker* _foundInAppsMatches;
	PETDistributionEventTracker* _eventsMatches;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * frameworkErrors;                       //@synthesize frameworkErrors=_frameworkErrors - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * contactsMatches;                 //@synthesize contactsMatches=_contactsMatches - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * foundInAppsMatches;              //@synthesize foundInAppsMatches=_foundInAppsMatches - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * eventsMatches;                   //@synthesize eventsMatches=_eventsMatches - In the implementation block
+(id)instance;
+(id)trackerForDistribution:(id)arg1 withProperties:(id)arg2 ;
+(id)counter:(id)arg1 withProperties:(id)arg2 ;
+(id)trackerForGoal:(id)arg1 withProperties:(id)arg2 ;
+(void)frameworkError:(id)arg1 errorCode:(long long)arg2 ;
+(void)contactMatchesWithContactsCount:(unsigned long long)arg1 foundInAppsCount:(unsigned long long)arg2 ;
+(void)eventsMatches:(unsigned long long)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(PETScalarEventTracker *)frameworkErrors;
-(void)setFrameworkErrors:(PETScalarEventTracker *)arg1 ;
-(PETDistributionEventTracker *)contactsMatches;
-(void)setContactsMatches:(PETDistributionEventTracker *)arg1 ;
-(PETDistributionEventTracker *)foundInAppsMatches;
-(void)setFoundInAppsMatches:(PETDistributionEventTracker *)arg1 ;
-(PETDistributionEventTracker *)eventsMatches;
-(void)setEventsMatches:(PETDistributionEventTracker *)arg1 ;
@end

