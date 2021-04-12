/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FCKeyValueStore *)localStore;
-(void)addObserver:(id)arg1 ;
-(BOOL)everContainedIssueID:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(NSArray *)issueIDs;
-(void)removeAllIssues;
-(id)dateAddedForIssueID:(id)arg1 ;
-(void)addIssueID:(id)arg1 source:(long long)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithStoreDirectoryFileURL:(id)arg1 ;
-(BOOL)containsIssueID:(id)arg1 ;
-(void)removeIssueIDs:(id)arg1 ;
-(long long)sourceForIssueID:(id)arg1 ;
-(id)dateRemovedForIssueID:(id)arg1 ;
@end

