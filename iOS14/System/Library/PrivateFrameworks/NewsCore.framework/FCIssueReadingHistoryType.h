/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString, NSArray;


@protocol FCIssueReadingHistoryType
@property (nonatomic,readonly) NSString * mostRecentlyVisitedIssueID; 
@property (nonatomic,readonly) NSArray * recentlyVisitedIssueIDs; 
@property (nonatomic,readonly) NSArray * recentlyEngagedIssueIDs; 
@property (nonatomic,readonly) NSArray * allEngagedIssueIDs; 
@required
-(id)lastVisitedDateForIssueWithID:(id)arg1;
-(void)addObserver:(id)arg1;
-(NSArray *)allEngagedIssueIDs;
-(id)lastSeenDateForIssueWithID:(id)arg1;
-(void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1;
-(NSString *)mostRecentlyVisitedIssueID;
-(BOOL)hasIssueWithIDBeenEngaged:(id)arg1;
-(NSArray *)recentlyVisitedIssueIDs;
-(void)removeObserver:(id)arg1;
-(void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2;
-(void)markIssueAsEngagedWithID:(id)arg1;
-(BOOL)hasIssueWithIDBeenVisited:(id)arg1;
-(BOOL)hasIssueWithIDBeenSeen:(id)arg1;
-(id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1;
-(BOOL)hasIssueWithIDBeenBadged:(id)arg1;
-(void)markIssueAsSeenWithID:(id)arg1;
-(NSArray *)recentlyEngagedIssueIDs;
-(void)markIssueAsBadgedWithID:(id)arg1;
-(id)lastEngagedDateForIssueWithID:(id)arg1;
-(id)bookmarkForLastVisitToIssueWithID:(id)arg1;

@end

