/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBObserverClientInterface
@required
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
-(void)getObserverDebugInfo:(/*^block*/id)arg1;
-(void)updateSectionInfo:(id)arg1;
-(void)noteServerReceivedResponseForBulletin:(id)arg1;
-(void)updateGlobalSettings:(id)arg1;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)noteBulletinsLoadedForSectionID:(id)arg1;
-(void)removeSection:(id)arg1;

@end

