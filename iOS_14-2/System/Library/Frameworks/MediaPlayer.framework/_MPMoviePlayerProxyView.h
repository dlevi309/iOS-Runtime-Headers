/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class MPMoviePlayerController;

@interface _MPMoviePlayerProxyView : UIView {

	MPMoviePlayerController* _controller;

}

@property (nonatomic,__weak,readonly) MPMoviePlayerController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithMoviePlayerController:(id)arg1 ;
-(void)_updateContainmentInWindow:(id)arg1 superview:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(MPMoviePlayerController *)controller;
@end

