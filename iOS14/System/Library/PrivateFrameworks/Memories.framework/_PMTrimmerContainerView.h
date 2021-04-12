/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)movieScrubber;
-(void)setMovieScrubber:(UIView *)arg1 ;
-(UIView *)debugOverlay;
-(void)setDebugOverlay:(UIView *)arg1 ;
@end

