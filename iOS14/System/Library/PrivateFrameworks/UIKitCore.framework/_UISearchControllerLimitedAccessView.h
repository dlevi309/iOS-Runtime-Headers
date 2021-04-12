/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setBackButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)backButton;
@end

