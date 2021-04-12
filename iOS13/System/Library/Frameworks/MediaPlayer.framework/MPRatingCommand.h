/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPRatingCommand : MPRemoteCommand {

	float _minimumRating;
	float _maximumRating;

}

@property (assign,nonatomic) float minimumRating;              //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) float maximumRating;              //@synthesize maximumRating=_maximumRating - In the implementation block
-(float)maximumRating;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setMinimumRating:(float)arg1 ;
-(void)setMaximumRating:(float)arg1 ;
-(id)newCommandEventWithRating:(float)arg1 ;
-(float)minimumRating;
@end

