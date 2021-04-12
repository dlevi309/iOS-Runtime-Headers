/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlayerRateCommand <MPCPlayerCommand>
@property (nonatomic,readonly) float minimumValue; 
@property (nonatomic,readonly) float maximumValue; 
@required
-(float)maximumValue;
-(float)minimumValue;
-(id)changeValue:(float)arg1;

@end

