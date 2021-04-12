/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCKeyValueStore, NSHashTable, NSArray;

@interface FCOfflineIssueList : NSObject {

	FCKeyValueStore* _localStore;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) FCKeyValueStore * localStore;              //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                   //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSArray * issueIDs; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(FCKeyValueStore *)localStore;
-(NSArray *)issueIDs;
-(id)initWithStoreDirectoryFileURL:(id)arg1 ;
-(BOOL)containsIssueID:(id)arg1 ;
-(void)removeIssueIDs:(id)arg1 ;
-(void)addIssueID:(id)arg1 source:(long long)arg2 ;
-(BOOL)everContainedIssueID:(id)arg1 ;
-(long long)sourceForIssueID:(id)arg1 ;
-(id)dateAddedForIssueID:(id)arg1 ;
-(id)dateRemovedForIssueID:(id)arg1 ;
-(void)removeAllIssues;
@end

