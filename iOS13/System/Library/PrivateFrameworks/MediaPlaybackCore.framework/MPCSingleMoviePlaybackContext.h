/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPPlaybackContext.h>

@class MPMovie;

@interface MPCSingleMoviePlaybackContext : MPPlaybackContext {

	MPMovie* _movie;

}

@property (nonatomic,readonly) MPMovie * movie;              //@synthesize movie=_movie - In the implementation block
+(Class)queueFeederClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPMovie *)movie;
-(id)initWithMovie:(id)arg1 ;
@end

