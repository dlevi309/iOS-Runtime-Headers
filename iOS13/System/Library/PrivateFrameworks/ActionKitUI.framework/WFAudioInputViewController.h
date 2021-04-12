/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIView;

@interface WFAudioInputViewController : UIViewController {

	UILabel* _statusLabel;
	UIView* _contentView;

}

@property (nonatomic,readonly) UILabel * statusLabel;              //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIView * contentView;               //@synthesize contentView=_contentView - In the implementation block
-(UIView *)contentView;
-(void)loadView;
-(BOOL)accessibilityPerformMagicTap;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)statusLabel;
-(void)handleTap;
@end

