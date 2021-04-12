/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSDataCache <NSObject>
@property (getter=isTerminating,nonatomic,readonly) BOOL terminating; 
@property (assign,nonatomic,__weak) id<WBSDataCacheDelegate> dataCacheDelegate; 
@required
-(void)setUp;
-(BOOL)isTerminating;
-(id)settingForKey:(id)arg1;
-(void)setDataCacheDelegate:(id)arg1;
-(void)savePendingChangesBeforeTearDown;
-(id)requestEntryForKeyString:(id)arg1;
-(long long)entryStateForKeyString:(id)arg1;
-(void)getEntryURLForKeyString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id<WBSDataCacheDelegate>)dataCacheDelegate;
-(void)removeEntriesForKeyStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setSetting:(id)arg1 forKey:(id)arg2;
-(void)removeEntriesForKeyStringsNotIncludedIn:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)reset;
-(void)setEntry:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

