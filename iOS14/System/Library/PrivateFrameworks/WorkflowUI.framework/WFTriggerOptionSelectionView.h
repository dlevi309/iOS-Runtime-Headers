/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, WFCircularGlyphView;

@interface WFTriggerOptionSelectionView : UIView {

	BOOL _highlighted;
	UIImageView* _imageView;
	UILabel* _label;
	WFCircularGlyphView* _selectedView;
	WFCircularGlyphView* _unselectedView;

}

@property (nonatomic,readonly) WFCircularGlyphView * selectedView;                //@synthesize selectedView=_selectedView - In the implementation block
@property (nonatomic,readonly) WFCircularGlyphView * unselectedView;              //@synthesize unselectedView=_unselectedView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL highlighted;                                    //@synthesize highlighted=_highlighted - In the implementation block
+(double)scaledValueForValue:(double)arg1 ;
-(id)init;
-(UIImageView *)imageView;
-(BOOL)highlighted;
-(void)updateAlpha;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(WFCircularGlyphView *)selectedView;
-(UILabel *)label;
-(void)setHighlighted:(BOOL)arg1 ;
-(WFCircularGlyphView *)unselectedView;
@end

