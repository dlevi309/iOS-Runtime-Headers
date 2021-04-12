/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIView.h>

@protocol MPMovieViewDelegate;
@interface MPMovieView : UIView {

	id<MPMovieViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPMovieViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MPMovieViewDelegate>)delegate;
-(void)setDelegate:(id<MPMovieViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
@end

