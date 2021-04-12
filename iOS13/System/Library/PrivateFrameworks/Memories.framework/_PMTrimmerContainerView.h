/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _PMTrimmerContainerView : UIView {

	UIView* _movieScrubber;
	UIView* _debugOverlay;

}

@property (nonatomic,retain) UIView * movieScrubber;              //@synthesize movieScrubber=_movieScrubber - In the implementation block
@property (nonatomic,retain) UIView * debugOverlay;               //@synthesize debugOverlay=_debugOverlay - In the implementation block
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)movieScrubber;
-(void)setMovieScrubber:(UIView *)arg1 ;
-(UIView *)debugOverlay;
-(void)setDebugOverlay:(UIView *)arg1 ;
@end

