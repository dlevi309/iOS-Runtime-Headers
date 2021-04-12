/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSArray;


@protocol MPCPlayerResetTracklistCommand <MPCPlayerCommand>
@property (nonatomic,readonly) NSArray * specializedIntents; 
@required
-(id)clear;
-(id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;
-(id)replaceWithPlaybackIntent:(id)arg1;
-(NSArray *)specializedIntents;

@end

