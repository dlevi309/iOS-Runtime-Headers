/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface SKUICategoryTableViewCell : UITableViewCell {

	UIView* _separatorView;
	CGSize _expectedImageSize;
	BOOL _layoutNeedsLayout;

}

@property (assign,nonatomic) CGSize expectedImageSize;              //@synthesize expectedImageSize=_expectedImageSize - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setExpectedImageSize:(CGSize)arg1 ;
-(CGSize)expectedImageSize;
@end

