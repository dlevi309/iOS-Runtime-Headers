/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBObserverClientInterface
@required
-(void)updateSectionInfo:(id)arg1;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
-(void)removeSection:(id)arg1;
-(void)updateGlobalSettings:(id)arg1;
-(void)noteServerReceivedResponseForBulletin:(id)arg1;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getObserverDebugInfo:(/*^block*/id)arg1;

@end

