/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFMediaValueSource <NSObject>
@required
-(BOOL)hasPendingWritesForRouteID:(id)arg1;
-(long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
-(id)mediaProfileContainerForRouteID:(id)arg1;
-(id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
-(id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;

@end

