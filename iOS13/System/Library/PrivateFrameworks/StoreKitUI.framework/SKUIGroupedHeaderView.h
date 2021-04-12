/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, NSString;

@interface SKUIGroupedHeaderView : UIView {

	UILabel* _titleLabel;
	UIView* _topBorder;
	UIView* _botBorder;

}

@property (assign,nonatomic) BOOL hasTopBorder; 
@property (assign,nonatomic) BOOL hasBottomBorder; 
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)hasTopBorder;
-(void)setHasTopBorder:(BOOL)arg1 ;
-(BOOL)hasBottomBorder;
-(void)setHasBottomBorder:(BOOL)arg1 ;
@end

