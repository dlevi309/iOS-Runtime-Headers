/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBlurEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIView*<SBUIPasscodeLockView>)passcodeView;
-(id)initWithFrame:(CGRect)arg1 includeBlur:(BOOL)arg2 passcodeViewGenerator:(/*^block*/id)arg3 ;
@end

