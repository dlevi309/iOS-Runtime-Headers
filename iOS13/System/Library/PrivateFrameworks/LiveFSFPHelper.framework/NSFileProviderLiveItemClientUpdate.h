/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/


@protocol NSFileProviderLiveItemClientUpdate
@required
-(void)LIUpdateUpdatedItem:(id)arg1 name:(id)arg2 interestedItem:(id)arg3;
-(void)LIUpdateUpdatedName:(id)arg1 interestedItem:(id)arg2;
-(void)LIUpdateDeletedItem:(id)arg1 name:(id)arg2 how:(int)arg3 interestedItem:(id)arg4;
-(void)LIUpdateDeletedName:(id)arg1 item:(id)arg2 how:(int)arg3 interestedItem:(id)arg4;
-(void)LIUpdateRenameFrom:(id)arg1 fromName:(id)arg2 fromID:(id)arg3 intoItem:(id)arg4 toName:(id)arg5 overID:(id)arg6;
-(void)LIUpdateVolumeWideUpdatedName:(id)arg1 interestedItem:(id)arg2;
-(void)LIUpdateVolumeWideDeletedName:(id)arg1 interestedItem:(id)arg2;
-(void)LIUpdateHistoryResetItem:(id)arg1 interestedItem:(id)arg2;
-(void)LIUpdateHistoryResetName:(id)arg1 interestedItem:(id)arg2;
-(void)LIUpdateDone:(id)arg1;

@end

