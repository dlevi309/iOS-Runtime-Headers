/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setKeyboardUsageTimes:(NSMutableArray *)arg1 ;
-(BOOL)ignoreAppExtension:(id)arg1 ;
-(id)init;
-(void)setTimeOfLastFlushToDisk:(NSDate *)arg1 ;
-(NSObject*<TIKeyboardApplicationStateResponses>)delegate;
-(BKSApplicationStateMonitor *)applicationStateMonitor;
-(NSDate *)timeOfLastFlushToDisk;
-(BOOL)flushPendingChangesToDisk;
-(NSDate *)activeAppStartDate;
-(void)handleApplicationStateChange:(id)arg1 ;
-(NSString *)activeAppBundleID;
-(void)logOutKeyboardActivity:(double)arg1 ;
-(void)setApplicationStateDatabase:(NSDictionary *)arg1 ;
-(void)applicationUninstalled:(id)arg1 ;
-(void)setDelegate:(NSObject*<TIKeyboardApplicationStateResponses>)arg1 ;
-(NSLock *)activeStateDataLock;
-(void)keyboardInUse;
-(NSMutableArray *)keyboardUsageTimes;
-(void)setActiveAppStartDate:(NSDate *)arg1 ;
-(NSDictionary *)applicationStateDatabase;
-(void)startANewKeyboardActivity:(id)arg1 ;
-(void)keyboardNoLongerInUse;
-(id)initWithAppActivityTimeDurationThreshold:(double)arg1 keyboardUsageFractionThreshold:(double)arg2 ;
-(void)setActiveKeyboardStartTime:(double)arg1 ;
-(NSMutableSet *)imSuppressingBundleIDs;
-(void)setActiveStateDataLock:(NSLock *)arg1 ;
-(void)setUtcCalendar:(NSCalendar *)arg1 ;
-(double)activeKeyboardStartTime;
-(NSLock *)databaseInUseLock;
-(void)setApplicationStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)setDatabaseInUseLock:(NSLock *)arg1 ;
-(void)setImSuppressingBundleIDs:(NSMutableSet *)arg1 ;
-(void)setActiveAppStartTime:(double)arg1 ;
-(void)setActiveAppBundleID:(NSString *)arg1 ;
-(NSMutableSet *)foregroundApps;
-(NSCalendar *)utcCalendar;
-(BOOL)threadUnsafeFlushChangesToDiskWithImmediacy:(BOOL)arg1 ;
-(double)activeAppStartTime;
-(id)databaseLocation;
-(void)dealloc;
-(void)setForegroundApps:(NSMutableSet *)arg1 ;
@end

