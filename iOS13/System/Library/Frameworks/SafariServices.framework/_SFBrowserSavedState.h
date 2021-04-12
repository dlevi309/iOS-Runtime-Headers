/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)shouldMergeAllWindowsIfNeeded;
+(id)sharedBrowserSavedState;
+(void)setSharedBrowserSavedState:(id)arg1 ;
+(id)ephemeralSavedState;
+(void)setShouldMergeAllWindowsIfNeeded:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithInMemoryDatabase;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)updateSceneID:(id)arg1 ;
-(NSArray *)browserWindows;
-(id)tabStateDataForUUID:(id)arg1 ;
-(void)setSecureDeleteEnabled:(BOOL)arg1 ;
-(void)regenerateTabUUIDsForDeviceRestoration;
-(id)initWithDefaultBrowserStateDatabase;
-(void)_readBrowserControllersSavedState;
-(void)_checkPointWriteAheadLogIfNeeded;
-(void)clearAllSavedStatesClosingDatabase:(BOOL)arg1 ;
-(void)updateBrowserWindowState:(id)arg1 tabs:(id)arg2 ;
-(void)_removeRecentlyClosedTabStateData:(id)arg1 ;
-(void)_notifyThatRecentlyClosedTabsWereRemoved:(id)arg1 ;
-(void)_readRecentlyClosedTabsStateIfNecessary;
-(void)removeTabsStateForBrowserControllerWithUUID:(id)arg1 andRemoveWindow:(BOOL)arg2 ;
-(void)removeTabStateWithTabData:(id)arg1 ;
-(void)setBrowserWindows:(NSArray *)arg1 ;
-(id)savedTabsStateForBrowserControllerWithUUID:(id)arg1 ;
-(void)saveTabsState:(id)arg1 forBrowserControllerWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setActiveDocumentIsValid:(BOOL)arg1 forBrowserControllerWithUUID:(id)arg2 ;
-(BOOL)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg1 ;
-(void)saveTabStateData:(id)arg1 ;
-(void)clearAllSavedStatesAndCloseDatabase;
-(id)readSavedSessionStateDataForTabWithUUID:(id)arg1 ;
-(void)addRecentlyClosedTabs:(id)arg1 ;
-(void)loadSessionStateDataAndRemoveRecentlyClosedTab:(id)arg1 ;
-(void)clearRecentlyClosedTabs;
-(NSArray *)recentlyClosedTabs;
-(void)removeRecentlyClosedTabWithStateData:(id)arg1 ;
-(void)setRecentlyClosedTabs:(NSArray *)arg1 ;
-(BOOL)secureDeleteEnabled;
@end

