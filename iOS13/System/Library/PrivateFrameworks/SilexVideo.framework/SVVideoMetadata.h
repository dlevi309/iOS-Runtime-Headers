/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoMetadata <NSObject>
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) double framerate; 
@property (nonatomic,readonly) double timePlayed; 
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) double volume; 
@required
-(double)duration;
-(double)time;
-(double)volume;
-(BOOL)muted;
-(double)timePlayed;
-(double)framerate;

@end

