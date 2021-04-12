/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@protocol MDIndexer <CSSearchableIndexInterface>
@property (__weak) id<CSIndexExtensionDelegate> extensionDelegate; 
@optional
-(void)deleteAllUserActivities:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)startQuery:(id)arg1 withContext:(id)arg2 handler:(/*^block*/id)arg3;
-(id<CSIndexExtensionDelegate>)extensionDelegate;
-(void)deleteActionsBeforeTime:(double)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setExtensionDelegate:(id)arg1;
-(void)startQueryTask:(id)arg1;
-(id)taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(id)startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)startQuery:(id)arg1 withContext:(id)arg2 eventHandler:(/*^block*/id)arg3 handler:(/*^block*/id)arg4;

@required
-(double)lastUpdateTime;
-(void)clientDidCheckin:(id)arg1 protectionClass:(id)arg2 service:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4;
-(void)runMigration;

@end

