/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPresentationContainerView.h>

@class AVPlayerViewControllerContentView;

@interface AVPlayerView : AVPresentationContainerView {

	BOOL _needsInitialLayout;
	AVPlayerViewControllerContentView* _contentView;

}

@property (assign,nonatomic) BOOL needsInitialLayout;                                        //@synthesize needsInitialLayout=_needsInitialLayout - In the implementation block
@property (nonatomic,readonly) AVPlayerViewControllerContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(AVPlayerViewControllerContentView *)contentView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 ;
-(void)beginManagingContentView;
-(BOOL)needsInitialLayout;
-(void)setNeedsInitialLayout:(BOOL)arg1 ;
@end

