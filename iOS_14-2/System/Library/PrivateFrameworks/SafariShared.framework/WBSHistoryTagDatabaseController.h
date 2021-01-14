/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSSQLiteDatabase;

@interface WBSHistoryTagDatabaseController : NSObject {

	WBSSQLiteDatabase* _database;

}
-(id)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id*)arg5 ;
-(BOOL)clearAllTagsWithError:(id*)arg1 ;
-(BOOL)clearTagsFromStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(BOOL)renameTagWithID:(long long)arg1 toTitle:(id)arg2 error:(id*)arg3 ;
-(BOOL)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 error:(id*)arg3 ;
-(id)initWithDatabase:(id)arg1 ;
@end

