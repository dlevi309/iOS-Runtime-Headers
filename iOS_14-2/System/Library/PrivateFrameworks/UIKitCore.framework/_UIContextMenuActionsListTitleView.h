/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

@interface _UIContextMenuActionsListTitleView : UICollectionReusableView {

	NSString* _title;
	UILabel* _titleLabel;
	UIView* _separator;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separator;                //@synthesize separator=_separator - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)_titleFont;
-(UIView *)separator;
-(void)didMoveToWindow;
-(unsigned long long)_titleLabelNumberOfLines;
-(void)setSeparator:(UIView *)arg1 ;
-(void)_updateLayoutMargins;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
@end

