/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(BOOL)hasTopBorder;
-(void)setHasTopBorder:(BOOL)arg1 ;
-(BOOL)hasBottomBorder;
-(void)setHasBottomBorder:(BOOL)arg1 ;
@end

