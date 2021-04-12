/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlayerRateCommand <MPCPlayerCommand>
@property (nonatomic,readonly) float minimumValue; 
@property (nonatomic,readonly) float maximumValue; 
@required
-(float)minimumValue;
-(float)maximumValue;
-(id)changeValue:(float)arg1;

@end

