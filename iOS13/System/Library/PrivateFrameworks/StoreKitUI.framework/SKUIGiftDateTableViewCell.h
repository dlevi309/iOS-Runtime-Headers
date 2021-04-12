/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView, UIImageView, UILabel, NSString;

@interface SKUIGiftDateTableViewCell : UITableViewCell {

	UIView* _bottomBorderView;
	BOOL _checked;
	UIImageView* _checkmarkView;
	UILabel* _dateLabel;
	UILabel* _labelLabel;
	UILabel* _placeholderLabel;
	UIView* _topBorderView;
	BOOL _leftToRight;

}

@property (assign,nonatomic) BOOL leftToRight;                           //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked;              //@synthesize checked=_checked - In the implementation block
@property (nonatomic,copy) NSString * dateString; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * placeholder; 
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)_newLabel;
-(NSString *)placeholder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLeftToRight:(BOOL)arg1 ;
-(BOOL)leftToRight;
-(void)setChecked:(BOOL)arg1 ;
-(id)_labelColor;
-(BOOL)isChecked;
-(void)setDateString:(NSString *)arg1 ;
-(NSString *)dateString;
@end

