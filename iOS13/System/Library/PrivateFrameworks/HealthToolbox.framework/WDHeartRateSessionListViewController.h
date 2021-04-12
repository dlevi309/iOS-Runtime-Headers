/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>

@class NSArray, NSMutableArray, NSDateInterval, WDProfile;

@interface WDHeartRateSessionListViewController : HKTableViewController {

	long long _sessionType;
	NSArray* _sessions;
	NSMutableArray* _activeDataQueries;
	NSDateInterval* _dateInterval;
	WDProfile* _profile;

}

@property (assign,nonatomic) long long sessionType;                           //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,retain) NSArray * sessions;                              //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeDataQueries;              //@synthesize activeDataQueries=_activeDataQueries - In the implementation block
@property (nonatomic,retain) NSDateInterval * dateInterval;                   //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) WDProfile * profile;                             //@synthesize profile=_profile - In the implementation block
-(void)dealloc;
-(NSDateInterval *)dateInterval;
-(WDProfile *)profile;
-(void)setProfile:(WDProfile *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSArray *)sessions;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(long long)sessionType;
-(void)setSessionType:(long long)arg1 ;
-(void)setSessions:(NSArray *)arg1 ;
-(id)_sampleType;
-(NSMutableArray *)activeDataQueries;
-(void)setActiveDataQueries:(NSMutableArray *)arg1 ;
-(void)_startSessionQuery;
-(id)_queryPredicateForDateInterval:(id)arg1 ;
-(void)_startHeartRateRangeQueries;
-(void)_startHeartRateRangeQueryForSession:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_pushControllerForSession:(id)arg1 ;
-(id)initWithSessionType:(long long)arg1 dateInterval:(id)arg2 profile:(id)arg3 ;
@end

