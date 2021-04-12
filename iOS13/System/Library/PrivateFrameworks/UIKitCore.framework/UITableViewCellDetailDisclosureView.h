/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIButton, UIImageView, UITableViewCell;

@interface UITableViewCellDetailDisclosureView : UIControl {

	UIButton* _accessoryButton;
	UIImageView* _disclosureView;
	UITableViewCell* _cell;

}

@property (nonatomic,readonly) UIButton * accessoryButton;              //@synthesize accessoryButton=_accessoryButton - In the implementation block
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 cell:(id)arg3 buttonType:(long long)arg4 shouldReverseLayoutDirection:(BOOL)arg5 ;
-(UIButton *)accessoryButton;
@end

