/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoControlsTimingConfiguration.h>

@protocol SVVideoControlsTimingConfiguration <NFCopying>
@property (nonatomic,readonly) double upNextAppearanceTimeInterval; 
@property (nonatomic,readonly) double nowPlayingVisibilityTimeInterval; 
@property (nonatomic,readonly) double moreFromVisibilityTimeInterval; 
@required
-(double)upNextAppearanceTimeInterval;
-(double)nowPlayingVisibilityTimeInterval;
-(double)moreFromVisibilityTimeInterval;

@end


@interface SVVideoControlsTimingConfiguration : NSObject <SVVideoControlsTimingConfiguration> {

	double _upNextAppearanceTimeInterval;
	double _nowPlayingVisibilityTimeInterval;
	double _moreFromVisibilityTimeInterval;

}

@property (nonatomic,readonly) double upNextAppearanceTimeInterval;                  //@synthesize upNextAppearanceTimeInterval=_upNextAppearanceTimeInterval - In the implementation block
@property (nonatomic,readonly) double nowPlayingVisibilityTimeInterval;              //@synthesize nowPlayingVisibilityTimeInterval=_nowPlayingVisibilityTimeInterval - In the implementation block
@property (nonatomic,readonly) double moreFromVisibilityTimeInterval;                //@synthesize moreFromVisibilityTimeInterval=_moreFromVisibilityTimeInterval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)upNextAppearanceTimeInterval;
-(double)nowPlayingVisibilityTimeInterval;
-(double)moreFromVisibilityTimeInterval;
-(id)initWithUpNextAppearanceTimeInterval:(double)arg1 nowPlayingVisibilityTimeInterval:(double)arg2 moreFromVisibilityTimeInterval:(double)arg3 ;
@end

