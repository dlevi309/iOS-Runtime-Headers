/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface CKLargeTitleAccessoryView : UIView {

	UIButton* _leftAccessoryButton;
	UIButton* _rightAccessoryButton;

}

@property (nonatomic,retain) UIButton * leftAccessoryButton;               //@synthesize leftAccessoryButton=_leftAccessoryButton - In the implementation block
@property (nonatomic,retain) UIButton * rightAccessoryButton;              //@synthesize rightAccessoryButton=_rightAccessoryButton - In the implementation block
+(id)newComposeButton;
+(id)newOptionsButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(UIButton *)leftAccessoryButton;
-(UIButton *)rightAccessoryButton;
-(void)setLeftAccessoryButton:(UIButton *)arg1 ;
-(void)setRightAccessoryButton:(UIButton *)arg1 ;
@end

