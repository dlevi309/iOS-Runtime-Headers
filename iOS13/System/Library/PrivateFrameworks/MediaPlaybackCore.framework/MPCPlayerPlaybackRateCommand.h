/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSArray;


@protocol MPCPlayerPlaybackRateCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSArray * supportedPlaybackRates; 
@property (nonatomic,readonly) float preferredPlaybackRate; 
@required
-(id)setPlaybackRate:(float)arg1;
-(NSArray *)supportedPlaybackRates;
-(float)preferredPlaybackRate;

@end

