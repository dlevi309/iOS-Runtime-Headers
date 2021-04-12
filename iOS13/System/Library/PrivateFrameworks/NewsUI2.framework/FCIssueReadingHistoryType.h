/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

@class NSString, NSArray;


@protocol FCIssueReadingHistoryType
@property (nonatomic,readonly) NSString * mostRecentlyVisitedIssueID; 
@property (nonatomic,readonly) NSArray * recentlyVisitedIssueIDs; 
@property (nonatomic,readonly) NSArray * recentlyEngagedIssueIDs; 
@property (nonatomic,readonly) NSArray * allEngagedIssueIDs; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(id)bookmarkForLastVisitToIssueWithID:(id)arg1;
-(void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2;
-(void)markIssueAsBadgedWithID:(id)arg1;
-(void)markIssueAsEngagedWithID:(id)arg1;
-(void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1;
-(BOOL)hasIssueWithIDBeenVisited:(id)arg1;
-(BOOL)hasIssueWithIDBeenBadged:(id)arg1;
-(BOOL)hasIssueWithIDBeenEngaged:(id)arg1;
-(id)lastVisitedDateForIssueWithID:(id)arg1;
-(id)lastEngagedDateForIssueWithID:(id)arg1;
-(id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1;
-(NSString *)mostRecentlyVisitedIssueID;
-(NSArray *)recentlyVisitedIssueIDs;
-(NSArray *)recentlyEngagedIssueIDs;
-(NSArray *)allEngagedIssueIDs;

@end

