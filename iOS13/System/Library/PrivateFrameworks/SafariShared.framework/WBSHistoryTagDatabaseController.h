/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSSQLiteDatabase;

@interface WBSHistoryTagDatabaseController : NSObject {

	WBSSQLiteDatabase* _database;

}
-(id)initWithDatabase:(id)arg1 ;
-(id)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id*)arg5 ;
-(BOOL)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 error:(id*)arg3 ;
-(BOOL)renameTagWithID:(long long)arg1 toTitle:(id)arg2 error:(id*)arg3 ;
-(BOOL)clearAllTagsWithError:(id*)arg1 ;
-(BOOL)clearTagsFromStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
@end

