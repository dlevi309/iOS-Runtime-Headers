/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSDataCache <NSObject>
@property (getter=isTerminating,nonatomic,readonly) BOOL terminating; 
@property (assign,nonatomic,__weak) id<WBSDataCacheDelegate> dataCacheDelegate; 
@required
-(void)reset;
-(void)setUp;
-(BOOL)isTerminating;
-(id)settingForKey:(id)arg1;
-(void)setSetting:(id)arg1 forKey:(id)arg2;
-(void)setDataCacheDelegate:(id)arg1;
-(void)savePendingChangesBeforeTearDown;
-(void)removeEntriesForKeyStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setEntry:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeEntriesForKeyStringsNotIncludedIn:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getEntryURLForKeyString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)requestEntryForKeyString:(id)arg1;
-(long long)entryStateForKeyString:(id)arg1;
-(id<WBSDataCacheDelegate>)dataCacheDelegate;

@end

