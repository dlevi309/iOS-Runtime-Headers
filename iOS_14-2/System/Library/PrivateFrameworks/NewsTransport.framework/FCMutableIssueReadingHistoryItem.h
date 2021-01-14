/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

@class NSString, NSDate;


@protocol FCMutableIssueReadingHistoryItem <FCIssueReadingHistoryItem>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * issueID; 
@property (nonatomic,copy) NSDate * lastVisitedDate; 
@property (nonatomic,copy) NSDate * lastBadgedDate; 
@property (nonatomic,copy) NSDate * lastEngagedDate; 
@property (nonatomic,copy) NSDate * lastSeenDate; 
@property (nonatomic,copy) NSDate * lastRemovedFromMyMagazinesDate; 
@property (nonatomic,copy) NSString * lastVisitedArticleID; 
@property (nonatomic,copy) NSString * lastVisitedPageID; 
@required
-(void)setLastSeenDate:(id)arg1;
-(NSString *)issueID;
-(void)setLastVisitedDate:(id)arg1;
-(void)setLastVisitedArticleID:(id)arg1;
-(void)setLastVisitedPageID:(id)arg1;
-(void)setLastBadgedDate:(id)arg1;
-(NSDate *)lastBadgedDate;
-(void)setLastEngagedDate:(id)arg1;
-(NSDate *)lastEngagedDate;
-(void)setLastRemovedFromMyMagazinesDate:(id)arg1;
-(NSString *)lastVisitedArticleID;
-(NSString *)lastVisitedPageID;
-(NSDate *)lastRemovedFromMyMagazinesDate;
-(void)setIssueID:(id)arg1;
-(NSDate *)lastSeenDate;
-(NSDate *)lastVisitedDate;
-(void)setIdentifier:(id)arg1;
-(NSString *)identifier;

@end

