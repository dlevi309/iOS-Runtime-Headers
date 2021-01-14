/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@protocol MDIndexer <CSSearchableIndexInterface>
@property (__weak) id<CSIndexExtensionDelegate> extensionDelegate; 
@optional
-(void)deleteAllUserActivities:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)queryPreheat:(id)arg1;
-(id)startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(id)startQuery:(id)arg1 withContext:(id)arg2 eventHandler:(/*^block*/id)arg3 handler:(/*^block*/id)arg4;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)startQuery:(id)arg1 withContext:(id)arg2 handler:(/*^block*/id)arg3;
-(void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id<CSIndexExtensionDelegate>)extensionDelegate;
-(void)setExtensionDelegate:(id)arg1;
-(void)deleteActionsBeforeTime:(double)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startQueryTask:(id)arg1;
-(id)taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5;

@required
-(id)delegateServiceName;
-(double)lastUpdateTime;
-(id)searchServiceName;
-(void)runMigration;
-(id)indexServiceName;
-(void)clientDidCheckin:(id)arg1 protectionClass:(id)arg2 service:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4;

@end

