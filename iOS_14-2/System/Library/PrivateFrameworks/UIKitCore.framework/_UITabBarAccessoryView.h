/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGSize)preferredSize;
-(void)commonInit;
-(void)setPreferredSize:(CGSize)arg1 ;
-(UIView *)contentView;
@end

