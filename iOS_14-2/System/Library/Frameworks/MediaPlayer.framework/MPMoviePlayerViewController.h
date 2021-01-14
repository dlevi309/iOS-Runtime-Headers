/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIViewController.h>

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController {

	MPMoviePlayerController* _moviePlayer;

}

@property (nonatomic,readonly) MPMoviePlayerController * moviePlayer;              //@synthesize moviePlayer=_moviePlayer - In the implementation block
-(MPMoviePlayerController *)moviePlayer;
-(id)initWithContentURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

