/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBUIPasscodeLockView;
@class UIView, SBUIBackgroundView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView {

	UIView*<SBUIPasscodeLockView> _passcodeView;
	SBUIBackgroundView* _backgroundView;

}

@property (nonatomic,readonly) UIView*<SBUIPasscodeLockView> passcodeView;              //@synthesize passcodeView=_passcodeView - In the implementation block
-(void)layoutSubviews;
-(UIView*<SBUIPasscodeLockView>)passcodeView;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 includeBlur:(BOOL)arg2 passcodeViewGenerator:(/*^block*/id)arg3 ;
@end

