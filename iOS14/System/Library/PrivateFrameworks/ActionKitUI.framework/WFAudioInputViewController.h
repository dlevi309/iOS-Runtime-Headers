/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)accessibilityPerformMagicTap;
-(UILabel *)statusLabel;
-(void)loadView;
-(UIView *)contentView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)handleTap;
@end

