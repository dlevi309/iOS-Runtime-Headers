/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextButton;

@interface SPUILockScreenFooterView : NUIContainerBoxView {

	TLKTextButton* _unlockScreenButton;

}

@property (retain) TLKTextButton * unlockScreenButton;              //@synthesize unlockScreenButton=_unlockScreenButton - In the implementation block
-(id)init;
-(void)setUnlockScreenButton:(TLKTextButton *)arg1 ;
-(void)unlockButtonPressed:(id)arg1 ;
-(TLKTextButton *)unlockScreenButton;
-(void)updateTitle;
@end

