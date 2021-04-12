/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BBObserverDelegate <NSObject>
@optional
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2;
-(void)observer:(id)arg1 updateGlobalSettings:(id)arg2;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
-(void)observer:(id)arg1 noteBulletinsLoadedForSectionID:(id)arg2;
-(void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5;
-(void)observer:(id)arg1 removeBulletin:(id)arg2;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
-(void)observer:(id)arg1 removeSection:(id)arg2;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;

@end

