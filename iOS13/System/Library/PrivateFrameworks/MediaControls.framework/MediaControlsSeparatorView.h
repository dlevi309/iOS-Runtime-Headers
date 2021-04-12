/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MTVisualStylingProvider, UIView;

@interface MediaControlsSeparatorView : UIView {

	MTVisualStylingProvider* _visualStylingProvider;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * separatorView;                                       //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
@end

