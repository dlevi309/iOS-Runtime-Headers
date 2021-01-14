/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface SKUIGiftTableSectionHeaderView : UIView {

	UIEdgeInsets _contentInsets;
	UILabel* _label;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * label; 
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

