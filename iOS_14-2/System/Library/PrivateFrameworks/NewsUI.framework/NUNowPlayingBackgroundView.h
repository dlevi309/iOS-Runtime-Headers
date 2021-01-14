/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIVisualEffectView;

@interface NUNowPlayingBackgroundView : UIView {

	UIImageView* _imageView;
	UIVisualEffectView* _visualEffectsView;

}

@property (nonatomic,readonly) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * visualEffectsView;              //@synthesize visualEffectsView=_visualEffectsView - In the implementation block
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UIVisualEffectView *)visualEffectsView;
@end

