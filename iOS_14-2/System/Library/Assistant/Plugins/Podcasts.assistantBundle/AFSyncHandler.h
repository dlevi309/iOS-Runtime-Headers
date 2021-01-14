/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/


@protocol AFSyncHandler <NSObject>
@optional
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 configuration:(id)arg6;
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2;
-(void)syncDidEnd;
-(id)syncSnapshotForKey:(id)arg1;
-(id)currentSyncSnapshot;
-(id)syncVerificationKeyForKey:(id)arg1;

@end

