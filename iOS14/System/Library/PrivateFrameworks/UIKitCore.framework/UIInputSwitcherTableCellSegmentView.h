/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIInputSwitcherTableCellBackgroundView;

@interface UIInputSwitcherTableCellSegmentView : UIView {

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
-(CGSize)intrinsicContentSize;
-(BOOL)usesDarkTheme;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UIInputSwitcherTableCellBackgroundView *)backgroundView;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(UILabel *)label;
@end

