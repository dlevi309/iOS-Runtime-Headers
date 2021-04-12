/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSArray;


@protocol MPCPlayerShuffleCommand <MPCPlayerCommand>
@property (nonatomic,readonly) NSArray * supportedShuffleTypes; 
@required
-(id)advance;
-(id)setShuffleType:(long long)arg1;
-(NSArray *)supportedShuffleTypes;

@end

