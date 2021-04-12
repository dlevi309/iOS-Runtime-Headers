/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSMapTable, BKSApplicationStateMonitor, NSMutableDictionary;

@interface DAPriorityManager : NSObject {

	int _currentPriority;
	NSMapTable* _clientsToPriorityRequests;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSMutableDictionary* _cachedAppState;
	long long _foregroundDataclasses;

}

@property (nonatomic,retain) NSMapTable * clientsToPriorityRequests;                    //@synthesize clientsToPriorityRequests=_clientsToPriorityRequests - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * appStateMonitor;              //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedAppState;                      //@synthesize cachedAppState=_cachedAppState - In the implementation block
@property (assign,nonatomic) long long foregroundDataclasses;                           //@synthesize foregroundDataclasses=_foregroundDataclasses - In the implementation block
@property (nonatomic,readonly) int currentPriority;                                     //@synthesize currentPriority=_currentPriority - In the implementation block
+(id)sharedManager;
+(void)vendPriorityManagers;
-(id)init;
-(void)dealloc;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)_applicationStateChanged:(id)arg1 ;
-(id)stateString;
-(void)bumpDataclassesToUIPriority:(long long)arg1 ;
-(void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3 ;
-(void)_updateForegroundDataclasses;
-(id)appIDsToDataclasses;
-(void)_setNewPriority;
-(NSMapTable *)clientsToPriorityRequests;
-(int)_recalculatePriority;
-(void)_setForegroundDataclasses:(long long)arg1 ;
-(void)setClientsToPriorityRequests:(NSMapTable *)arg1 ;
-(int)currentPriority;
-(NSMutableDictionary *)cachedAppState;
-(void)setCachedAppState:(NSMutableDictionary *)arg1 ;
-(long long)foregroundDataclasses;
-(void)setForegroundDataclasses:(long long)arg1 ;
@end

