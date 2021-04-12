/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UITableViewCell.h>

@class UIButton, UIImageView;

@interface TSDCheckableTableViewCell : UITableViewCell {

	UIButton* mImageButton;
	UIImageView* mCheckmarkImageView;
	BOOL mChecked;
	BOOL mShowsCheckboxOnRight;

}

@property (nonatomic,readonly) BOOL showsCheckboxOnRight; 
@property (assign,nonatomic) BOOL checked; 
-(void)dealloc;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)imageForState:(unsigned long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(BOOL)showsCheckboxOnRight;
-(id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(BOOL)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(BOOL)arg2 style:(long long)arg3 ;
-(void)setCheckmarkImage:(id)arg1 forState:(unsigned long long)arg2 ;
@end

