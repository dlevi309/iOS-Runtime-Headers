/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIPreviewAction, UIImageView, UILabel;

@interface _UIPreviewQuickActionView : UIView {

	BOOL _selected;
	UIPreviewAction* _quickAction;
	UIImageView* _backgroundViewImage;
	UIImageView* _imageView;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) UIImageView * backgroundViewImage;              //@synthesize backgroundViewImage=_backgroundViewImage - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIPreviewAction * quickAction;                         //@synthesize quickAction=_quickAction - In the implementation block
@property (assign,nonatomic) BOOL selected;                                         //@synthesize selected=_selected - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)centerYAnchor;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setQuickAction:(UIPreviewAction *)arg1 ;
-(UIPreviewAction *)quickAction;
-(void)_updateCircleBackgroundImage;
-(void)updateFromQuickAction;
-(UIImageView *)backgroundViewImage;
-(void)setBackgroundViewImage:(UIImageView *)arg1 ;
@end

