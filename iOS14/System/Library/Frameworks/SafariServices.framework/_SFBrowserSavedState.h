/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class SFBrowserStateSQLiteStore, NSMutableArray, NSCountedSet, NSArray;

@interface _SFBrowserSavedState : NSObject {

	SFBrowserStateSQLiteStore* _browserStateSQLiteStore;
	NSMutableArray* _recentlyClosedTabs;
	BOOL _checkPointWriteAheadLogOnNextUpdate;
	NSCountedSet* _tabCountByWindowUUID;
	BOOL _haveLoadedRecentlyClosedTabs;
	BOOL _secureDeleteEnabled;
	NSArray* _browserWindows;

}

@property (nonatomic,copy) NSArray * browserWindows;                    //@synthesize browserWindows=_browserWindows - In the implementation block
@property (nonatomic,retain) NSArray * recentlyClosedTabs;              //@synthesize recentlyClosedTabs=_recentlyClosedTabs - In the implementation block
@property (assign,nonatomic) BOOL secureDeleteEnabled;                  //@synthesize secureDeleteEnabled=_secureDeleteEnabled - In the implementation block
+(id)sharedBrowserSavedState;
+(void)setShouldMergeAllWindowsIfNeeded:(BOOL)arg1 ;
+(void)setSharedBrowserSavedState:(id)arg1 ;
+(id)ephemeralSavedState;
+(BOOL)shouldMergeAllWindowsIfNeeded;
-(id)readSavedSessionStateDataForTabWithUUID:(id)arg1 ;
-(void)saveTabsState:(id)arg1 forBrowserControllerWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)regenerateTabUUIDsForDeviceRestoration;
-(void)removeRecentlyClosedTabWithStateData:(id)arg1 ;
-(id)initWithInMemoryDatabase;
-(NSArray *)browserWindows;
-(NSArray *)recentlyClosedTabs;
-(void)_checkPointWriteAheadLogIfNeeded;
-(void)_readBrowserControllersSavedState;
-(void)clearRecentlyClosedTabs;
-(BOOL)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg1 ;
-(void)removeTabsStateForBrowserControllerWithUUID:(id)arg1 andRemoveWindow:(BOOL)arg2 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)updateSceneID:(id)arg1 ;
-(void)_readRecentlyClosedTabsStateIfNecessary;
-(BOOL)secureDeleteEnabled;
-(void)updateBrowserWindowState:(id)arg1 tabs:(id)arg2 ;
-(void)setBrowserWindows:(NSArray *)arg1 ;
-(void)clearAllSavedStatesClosingDatabase:(BOOL)arg1 ;
-(void)_notifyThatRecentlyClosedTabsWereRemoved:(id)arg1 ;
-(id)tabStateDataForUUID:(id)arg1 ;
-(void)clearAllSavedStatesAndCloseDatabase;
-(void)addRecentlyClosedTabs:(id)arg1 ;
-(id)initWithDefaultBrowserStateDatabase;
-(void)removeTabStateWithTabData:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)loadSessionStateDataAndRemoveRecentlyClosedTab:(id)arg1 ;
-(void)_removeRecentlyClosedTabStateData:(id)arg1 ;
-(void)setSecureDeleteEnabled:(BOOL)arg1 ;
-(void)setActiveDocumentIsValid:(BOOL)arg1 forBrowserControllerWithUUID:(id)arg2 ;
-(void)saveTabStateData:(id)arg1 ;
-(void)setRecentlyClosedTabs:(NSArray *)arg1 ;
-(void)dealloc;
-(id)savedTabsStateForBrowserControllerWithUUID:(id)arg1 ;
@end

