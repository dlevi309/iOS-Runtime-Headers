/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBObserverServerInterface
@required
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)clearSection:(id)arg1;
-(void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1;
-(void)requestNoticesBulletinsForSectionID:(id)arg1;
-(void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
-(void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)handleResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)requestNoticesBulletinsForAllSections;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
-(void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;

@end

