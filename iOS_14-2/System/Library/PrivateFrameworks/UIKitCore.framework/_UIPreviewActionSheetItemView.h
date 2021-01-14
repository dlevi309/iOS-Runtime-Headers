/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIPreviewAction, UILabel, UIImageView;

@interface _UIPreviewActionSheetItemView : UIView {

	BOOL _selected;
	UIPreviewAction* _action;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (assign,nonatomic,__weak) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL selected;                               //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) UIPreviewAction * action;                      //@synthesize action=_action - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)_updateConstraints;
-(UIPreviewAction *)action;
-(void)setSelected:(BOOL)arg1 ;
-(void)setAction:(UIPreviewAction *)arg1 ;
-(BOOL)selected;
-(void)_contentSizeChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 action:(id)arg2 ;
-(void)_updateLabelFont;
-(void)_updateTitleFromAction;
-(void)_updateImageFromAction;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)dealloc;
@end

