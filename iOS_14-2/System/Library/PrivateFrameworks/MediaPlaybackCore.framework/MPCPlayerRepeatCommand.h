/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

