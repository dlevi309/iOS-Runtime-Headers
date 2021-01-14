/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 cell:(id)arg3 buttonType:(long long)arg4 shouldReverseLayoutDirection:(BOOL)arg5 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(UIButton *)accessoryButton;
@end

