/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(UIView *)separatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSeparatorView:(UIView *)arg1 ;
@end

