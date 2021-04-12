/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_newLabel;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)_labelColor;
-(void)setLeftToRight:(BOOL)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(NSString *)placeholder;
-(NSString *)dateString;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDateString:(NSString *)arg1 ;
-(BOOL)leftToRight;
-(NSString *)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

