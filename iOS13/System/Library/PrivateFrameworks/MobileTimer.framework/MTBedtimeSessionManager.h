/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTBedtimeSessionTrackerDelegate.h>

@protocol NAScheduler, MTBedtimeSessionTracker, MTBedtimeSessionTrackerDelegate;
@class MTAlarmStorage, HKHealthStore, NSString;

@interface MTBedtimeSessionManager : NSObject <MTBedtimeSessionTrackerDelegate> {

	id<NAScheduler> _serializer;
	MTAlarmStorage* _alarmStorage;
	HKHealthStore* _healthStore;
	NSString* _archivedSessionDataPath;
	NSString* _archivedSessionDataFile;
	id<MTBedtimeSessionTracker> _bedtimeSessionTracker;
	id<MTBedtimeSessionTrackerDelegate> _bedtimeSessionTrackerDelegate;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                                                            //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTAlarmStorage * alarmStorage;                                                         //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                                           //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,copy) NSString * archivedSessionDataPath;                                                      //@synthesize archivedSessionDataPath=_archivedSessionDataPath - In the implementation block
@property (nonatomic,copy) NSString * archivedSessionDataFile;                                                      //@synthesize archivedSessionDataFile=_archivedSessionDataFile - In the implementation block
@property (nonatomic,retain) id<MTBedtimeSessionTracker> bedtimeSessionTracker;                                     //@synthesize bedtimeSessionTracker=_bedtimeSessionTracker - In the implementation block
@property (assign,nonatomic,__weak) id<MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate;              //@synthesize bedtimeSessionTrackerDelegate=_bedtimeSessionTrackerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)platformSpecificSourceBundleIdentifier;
+(id)sleepSampleWithInterval:(id)arg1 sampleType:(long long)arg2 metadata:(id)arg3 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(MTAlarmStorage *)alarmStorage;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(id<MTBedtimeSessionTrackerDelegate>)bedtimeSessionTrackerDelegate;
-(void)setBedtimeSessionTrackerDelegate:(id<MTBedtimeSessionTrackerDelegate>)arg1 ;
-(void)bedtimeSessionTracker:(id)arg1 sessionDidComplete:(id)arg2 ;
-(id)writeSession:(id)arg1 ;
-(id<MTBedtimeSessionTracker>)bedtimeSessionTracker;
-(void)archiveSession:(id)arg1 ;
-(void)waitForUnlock;
-(id)_unprocessedSessions;
-(NSString *)archivedSessionDataPath;
-(NSString *)archivedSessionDataFile;
-(id)_writeSessions:(id)arg1 ;
-(BOOL)_hasUnprocessedSessions;
-(id)_writeSessionData;
-(void)deviceFirstUnlocked;
-(void)_removeSessionDataFile;
-(id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 bedtimeSessionTracker:(id)arg3 ;
-(void)saveSessionData;
-(void)setArchivedSessionDataPath:(NSString *)arg1 ;
-(void)setArchivedSessionDataFile:(NSString *)arg1 ;
-(void)setBedtimeSessionTracker:(id<MTBedtimeSessionTracker>)arg1 ;
@end

