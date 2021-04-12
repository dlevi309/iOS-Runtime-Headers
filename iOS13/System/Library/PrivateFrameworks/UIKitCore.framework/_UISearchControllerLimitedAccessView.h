/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, UIButton;

@interface _UISearchControllerLimitedAccessView : UIView {

	UIView* _backgroundView;
	UILabel* _keyboardLimitedLabel;
	UIButton* _backButton;

}

@property (nonatomic,retain) UIButton * backButton;              //@synthesize backButton=_backButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(UIButton *)backButton;
-(void)setBackButton:(UIButton *)arg1 ;
@end

