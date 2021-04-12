/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)beginManagingContentView;
-(BOOL)needsInitialLayout;
-(void)setNeedsInitialLayout:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 ;
-(void)layoutSubviews;
-(AVPlayerViewControllerContentView *)contentView;
@end

