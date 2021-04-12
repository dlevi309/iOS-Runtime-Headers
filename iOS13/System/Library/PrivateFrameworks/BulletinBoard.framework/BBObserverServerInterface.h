/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBObserverServerInterface
@required
-(void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
-(void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)requestNoticesBulletinsForSectionID:(id)arg1;
-(void)requestNoticesBulletinsForAllSections;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)handleResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)clearSection:(id)arg1;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
-(void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4;
-(void)getPNGDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(BOOL)arg3 sizeConstraints:(id)arg4 withHandler:(/*^block*/id)arg5;
-(void)getAspectRatioForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4;
-(void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;

@end

