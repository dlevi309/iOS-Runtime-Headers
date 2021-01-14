/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)layoutSubviews;
-(id)centerYAnchor;
-(UIPreviewAction *)quickAction;
-(void)setQuickAction:(UIPreviewAction *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImageView *)backgroundViewImage;
-(void)_updateCircleBackgroundImage;
-(void)updateFromQuickAction;
-(void)setBackgroundViewImage:(UIImageView *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

