/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

@class NSString, NSDate;


@protocol FCMutableIssueReadingHistoryItem <FCIssueReadingHistoryItem>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * issueID; 
@property (nonatomic,copy) NSDate * lastVisitedDate; 
@property (nonatomic,copy) NSDate * lastBadgedDate; 
@property (nonatomic,copy) NSDate * lastEngagedDate; 
@property (nonatomic,copy) NSDate * lastRemovedFromMyMagazinesDate; 
@property (nonatomic,copy) NSString * lastVisitedArticleID; 
@property (nonatomic,copy) NSString * lastVisitedPageID; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
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
-(NSDate *)lastVisitedDate;
-(NSDate *)lastRemovedFromMyMagazinesDate;
-(NSString *)issueID;
-(void)setIssueID:(id)arg1;

@end

