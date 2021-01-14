/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setExpectedImageSize:(CGSize)arg1 ;
-(CGSize)expectedImageSize;
@end

