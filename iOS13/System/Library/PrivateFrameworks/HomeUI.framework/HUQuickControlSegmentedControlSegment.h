/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface HUQuickControlSegmentedControlSegment : UIView {

	BOOL _highlighted;
	BOOL _selected;
	unsigned long long _roundedCorners;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;                  //@synthesize roundedCorners=_roundedCorners - In the implementation block
+(id)highlightedColor;
+(id)selectedColor;
+(double)borderInset;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_updateBackgroundColor;
-(void)setSelected:(BOOL)arg1 ;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(unsigned long long)roundedCorners;
-(void)_setupConstraints;
@end

