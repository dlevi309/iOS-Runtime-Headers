/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UITabBarAccessoryView : UIView {

	UIView* _contentView;
	CGSize _preferredSize;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                //@synthesize preferredSize=_preferredSize - In the implementation block
-(id)init;
-(void)commonInit;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
@end

