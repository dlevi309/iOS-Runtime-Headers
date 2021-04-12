/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPRatingCommand : MPRemoteCommand {

	float _minimumRating;
	float _maximumRating;

}

@property (assign,nonatomic) float minimumRating;              //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) float maximumRating;              //@synthesize maximumRating=_maximumRating - In the implementation block
-(void)setMinimumRating:(float)arg1 ;
-(id)newCommandEventWithRating:(float)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(float)minimumRating;
-(float)maximumRating;
-(void)setMaximumRating:(float)arg1 ;
@end

