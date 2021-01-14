/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSURLCompletionDataSource.h>
#import <libobjc.A.dylib/WBSURLCompletionSessionProtocol.h>

@protocol OS_dispatch_queue;
@class WBSHistoryService, NSObject, WBSHistoryServiceDatabase, WBSURLCompletionDatabase, NSString;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionDataSource, WBSURLCompletionSessionProtocol> {

	WBSHistoryService* _historyService;
	NSObject*<OS_dispatch_queue> _internalQueue;
	WBSHistoryServiceDatabase* _database;
	WBSURLCompletionDatabase* _urlCompletionDatabase;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHistoryService:(id)arg1 ;
-(id)_matchSnapshotForCompletionMatch:(id)arg1 ;
-(void)_ensureDatabaseIsWarmed;
-(id)_databaseConnectionOptions;
-(void)_getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(BOOL)arg3 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

