/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSURL, NSMutableSet, NSArray;

@interface ANAnnouncementManager : NSObject {

	NSObject*<OS_dispatch_queue> _timerQueue;
	BOOL _timersSuspended;
	NSMutableDictionary* _timers;
	NSMutableDictionary* _homeAnnouncements;
	NSURL* _announcementDataDirectory;
	NSMutableSet* _delegates;

}

@property (nonatomic,retain) NSMutableDictionary * timers;                                    //@synthesize timers=_timers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homeAnnouncements;                         //@synthesize homeAnnouncements=_homeAnnouncements - In the implementation block
@property (nonatomic,readonly) NSURL * announcementDataDirectory;                             //@synthesize announcementDataDirectory=_announcementDataDirectory - In the implementation block
@property (nonatomic,retain) NSMutableSet * delegates;                                        //@synthesize delegates=_delegates - In the implementation block
@property (assign,nonatomic) BOOL timersSuspended;                                            //@synthesize timersSuspended=_timersSuspended - In the implementation block
@property (nonatomic,readonly) NSArray * allAnnouncementIDs; 
@property (nonatomic,readonly) NSArray * allAnnouncementsSortedByReceipt; 
@property (nonatomic,readonly) NSArray * allAnnouncementContextsSortedByReceipt; 
@property (nonatomic,readonly) unsigned long long allAnnouncementCount; 
+(id)sharedManager;
-(NSMutableSet *)delegates;
-(void)setDelegates:(NSMutableSet *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)init;
-(void)setTimers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)timers;
-(void)resetAllTimers;
-(void)_startTimer:(id)arg1 ;
-(NSArray *)allAnnouncementIDs;
-(id)announcementForID:(id)arg1 ;
-(NSArray *)allAnnouncementContextsSortedByReceipt;
-(NSArray *)allAnnouncementsSortedByReceipt;
-(void)addAnnouncement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cleanDirectory;
-(BOOL)_shouldAccept:(id)arg1 accept:(/*^block*/id)arg2 ;
-(id)announcementsForGroupID:(id)arg1 ;
-(void)_notifyDelegatesAnnouncementsChangedForGroupID:(id)arg1 ;
-(void)_addAnnouncement:(id)arg1 home:(id)arg2 groupID:(id)arg3 ;
-(BOOL)timersSuspended;
-(void)_removeAnnouncementsForGroupID:(id)arg1 ;
-(void)_removeAnnouncementsHittingStorageAgeLimit;
-(void)_saveAnnouncement:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)_wipeFileDataForAnnouncement:(id)arg1 ;
-(void)_startTimerWithID:(id)arg1 ;
-(NSMutableDictionary *)homeAnnouncements;
-(void)_suspendTimer:(id)arg1 ;
-(void)setTimersSuspended:(BOOL)arg1 ;
-(void)_resetTimer:(id)arg1 ;
-(void)_removeDataForAnnouncementID:(id)arg1 ;
-(void)_removeAnnouncementFromQueueWithID:(id)arg1 ;
-(id)announcementDataDirectoryForType:(unsigned long long)arg1 ;
-(id)_pathComponentForAnnouncementType:(unsigned long long)arg1 ;
-(void)_handleExpiredTimer:(id)arg1 withID:(id)arg2 ;
-(void)_removeAnnouncementWithID:(id)arg1 ;
-(void)updateAnnouncement_sync:(id)arg1 statusFlags:(unsigned long long)arg2 ;
-(id)announcementContextsForGroupID:(id)arg1 ;
-(id)announcementsForIDs:(id)arg1 ;
-(void)removeOldAnnouncements;
-(unsigned long long)allAnnouncementCount;
-(void)pauseAllTimers;
-(void)resumeAllTimers;
-(void)setHomeAnnouncements:(NSMutableDictionary *)arg1 ;
-(NSURL *)announcementDataDirectory;
@end

