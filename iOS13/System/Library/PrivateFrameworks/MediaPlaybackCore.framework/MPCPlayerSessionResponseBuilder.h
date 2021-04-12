/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlayerSessionResponseBuilder <MPCResponseMediaRemoteControllerChaining>
@optional
-(long long)sessionNumberOfPlayerPaths:(long long)arg1 chain:(id)arg2;
-(long long)sessionNumberOfSessions:(long long)arg1 forPlayerPathAtIndex:(long long)arg2 chain:(id)arg3;
-(id)sessionPlayerPath:(id)arg1 atIndex:(long long)arg2 chain:(id)arg3;
-(id)sessionMetadataObject:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;

@end

