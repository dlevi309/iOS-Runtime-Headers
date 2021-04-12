/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)vendPriorityManagers;
+(id)sharedManager;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)setForegroundDataclasses:(long long)arg1 ;
-(int)_recalculatePriority;
-(id)init;
-(void)setCachedAppState:(NSMutableDictionary *)arg1 ;
-(void)_setForegroundDataclasses:(long long)arg1 ;
-(id)appIDsToDataclasses;
-(long long)foregroundDataclasses;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(id)stateString;
-(NSMutableDictionary *)cachedAppState;
-(void)bumpDataclassesToUIPriority:(long long)arg1 ;
-(void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3 ;
-(void)setClientsToPriorityRequests:(NSMapTable *)arg1 ;
-(int)currentPriority;
-(NSMapTable *)clientsToPriorityRequests;
-(void)_setNewPriority;
-(void)_updateForegroundDataclasses;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)dealloc;
@end

