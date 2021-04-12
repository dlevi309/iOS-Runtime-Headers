/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSArray;


@protocol MPCPlayerResetTracklistCommand <MPCPlayerCommand>
@property (nonatomic,readonly) NSArray * specializedIntents; 
@required
-(id)clear;
-(NSArray *)specializedIntents;
-(id)replaceWithPlaybackIntent:(id)arg1;
-(id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;
-(id)clearUpNextItems;

@end

