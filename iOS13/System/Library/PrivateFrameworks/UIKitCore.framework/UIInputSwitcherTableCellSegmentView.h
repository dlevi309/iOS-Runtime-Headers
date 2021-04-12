/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UILabel, UIImageView, UIInputSwitcherTableCellBackgroundView;

@interface UIInputSwitcherTableCellSegmentView : UIView {

	UIImage* _invertedImage;
	UIImage* _originalImage;
	BOOL _selected;
	BOOL _usesDarkTheme;
	UILabel* _label;
	UIImageView* _imageView;
	UIInputSwitcherTableCellBackgroundView* _backgroundView;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                                        //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL usesDarkTheme;                                                     //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIInputSwitcherTableCellBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
+(id)_fontForBiasLabel;
-(UILabel *)label;
-(BOOL)isSelected;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIInputSwitcherTableCellBackgroundView *)backgroundView;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(BOOL)usesDarkTheme;
@end

