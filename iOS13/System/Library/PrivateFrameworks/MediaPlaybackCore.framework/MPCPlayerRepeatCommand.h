/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSArray;


@protocol MPCPlayerRepeatCommand <MPCPlayerCommand>
@property (nonatomic,readonly) NSArray * supportedRepeatTypes; 
@required
-(id)advance;
-(id)setRepeatType:(long long)arg1;
-(NSArray *)supportedRepeatTypes;

@end

