/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

