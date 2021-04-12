/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, VUILabel;

@interface VUIVisualEffectLabel : UIView {

	UIVisualEffectView* _visualEffectView;
	VUILabel* _label;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) VUILabel * label;                                     //@synthesize label=_label - In the implementation block
+(id)vibrantLabelWithLabel:(id)arg1 ;
-(void)setLabel:(VUILabel *)arg1 ;
-(VUILabel *)label;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(void)layoutSubviews;
-(UIVisualEffectView *)visualEffectView;
-(void)_updateContentWithNewLabel:(id)arg1 oldLabel:(id)arg2 ;
@end

