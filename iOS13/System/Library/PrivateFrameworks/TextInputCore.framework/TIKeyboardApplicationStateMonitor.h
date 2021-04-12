/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIKeyboardApplicationStateResponses;
@class NSObject, BKSApplicationStateMonitor, NSString, NSMutableSet, NSDate, NSDictionary, NSLock, NSCalendar, NSMutableArray;

@interface TIKeyboardApplicationStateMonitor : NSObject {

	double _appActivityTimeDurationThreshold;
	double _appActivityKeyboardUsageFractionThreshold;
	NSObject*<TIKeyboardApplicationStateResponses> _delegate;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSString* _activeAppBundleID;
	double _activeAppStartTime;
	NSMutableSet* _foregroundApps;
	NSDate* _activeAppStartDate;
	NSDictionary* _applicationStateDatabase;
	NSMutableSet* _imSuppressingBundleIDs;
	NSLock* _activeStateDataLock;
	NSLock* _databaseInUseLock;
	NSDate* _timeOfLastFlushToDisk;
	NSCalendar* _utcCalendar;
	NSMutableArray* _keyboardUsageTimes;
	double _activeKeyboardStartTime;

}

@property (nonatomic,retain) BKSApplicationStateMonitor * applicationStateMonitor;                        //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,retain) NSString * activeAppBundleID;                                                //@synthesize activeAppBundleID=_activeAppBundleID - In the implementation block
@property (assign,nonatomic) double activeAppStartTime;                                                   //@synthesize activeAppStartTime=_activeAppStartTime - In the implementation block
@property (nonatomic,retain) NSMutableSet * foregroundApps;                                               //@synthesize foregroundApps=_foregroundApps - In the implementation block
@property (nonatomic,retain) NSDate * activeAppStartDate;                                                 //@synthesize activeAppStartDate=_activeAppStartDate - In the implementation block
@property (nonatomic,retain) NSDictionary * applicationStateDatabase;                                     //@synthesize applicationStateDatabase=_applicationStateDatabase - In the implementation block
@property (nonatomic,retain) NSMutableSet * imSuppressingBundleIDs;                                       //@synthesize imSuppressingBundleIDs=_imSuppressingBundleIDs - In the implementation block
@property (nonatomic,retain) NSLock * activeStateDataLock;                                                //@synthesize activeStateDataLock=_activeStateDataLock - In the implementation block
@property (nonatomic,retain) NSLock * databaseInUseLock;                                                  //@synthesize databaseInUseLock=_databaseInUseLock - In the implementation block
@property (nonatomic,retain) NSDate * timeOfLastFlushToDisk;                                              //@synthesize timeOfLastFlushToDisk=_timeOfLastFlushToDisk - In the implementation block
@property (nonatomic,retain) NSCalendar * utcCalendar;                                                    //@synthesize utcCalendar=_utcCalendar - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyboardUsageTimes;                                         //@synthesize keyboardUsageTimes=_keyboardUsageTimes - In the implementation block
@property (assign,nonatomic) double activeKeyboardStartTime;                                              //@synthesize activeKeyboardStartTime=_activeKeyboardStartTime - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<TIKeyboardApplicationStateResponses> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<TIKeyboardApplicationStateResponses>)delegate;
-(void)setDelegate:(NSObject*<TIKeyboardApplicationStateResponses>)arg1 ;
-(id)databaseLocation;
-(BKSApplicationStateMonitor *)applicationStateMonitor;
-(NSMutableSet *)foregroundApps;
-(BOOL)ignoreAppExtension:(id)arg1 ;
-(id)initWithAppActivityTimeDurationThreshold:(double)arg1 keyboardUsageFractionThreshold:(double)arg2 ;
-(void)applicationUninstalled:(id)arg1 ;
-(void)handleApplicationStateChange:(id)arg1 ;
-(void)startANewKeyboardActivity:(id)arg1 ;
-(void)logOutKeyboardActivity:(double)arg1 ;
-(void)keyboardInUse;
-(void)keyboardNoLongerInUse;
-(BOOL)threadUnsafeFlushChangesToDiskWithImmediacy:(BOOL)arg1 ;
-(BOOL)flushPendingChangesToDisk;
-(void)setApplicationStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(NSString *)activeAppBundleID;
-(void)setActiveAppBundleID:(NSString *)arg1 ;
-(double)activeAppStartTime;
-(void)setActiveAppStartTime:(double)arg1 ;
-(void)setForegroundApps:(NSMutableSet *)arg1 ;
-(NSDate *)activeAppStartDate;
-(void)setActiveAppStartDate:(NSDate *)arg1 ;
-(NSDictionary *)applicationStateDatabase;
-(void)setApplicationStateDatabase:(NSDictionary *)arg1 ;
-(NSMutableSet *)imSuppressingBundleIDs;
-(void)setImSuppressingBundleIDs:(NSMutableSet *)arg1 ;
-(NSLock *)activeStateDataLock;
-(void)setActiveStateDataLock:(NSLock *)arg1 ;
-(NSLock *)databaseInUseLock;
-(void)setDatabaseInUseLock:(NSLock *)arg1 ;
-(NSDate *)timeOfLastFlushToDisk;
-(void)setTimeOfLastFlushToDisk:(NSDate *)arg1 ;
-(NSCalendar *)utcCalendar;
-(void)setUtcCalendar:(NSCalendar *)arg1 ;
-(NSMutableArray *)keyboardUsageTimes;
-(void)setKeyboardUsageTimes:(NSMutableArray *)arg1 ;
-(double)activeKeyboardStartTime;
-(void)setActiveKeyboardStartTime:(double)arg1 ;
@end

