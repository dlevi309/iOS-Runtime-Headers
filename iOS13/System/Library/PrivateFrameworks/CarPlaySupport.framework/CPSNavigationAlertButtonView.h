/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@class CPSNavigationAlertFocusButton;

@interface CPSNavigationAlertButtonView : UIView {

	CPSNavigationAlertFocusButton* _primaryButton;
	CPSNavigationAlertFocusButton* _secondaryButton;

}

@property (nonatomic,retain) CPSNavigationAlertFocusButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) CPSNavigationAlertFocusButton * secondaryButton;              //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(void)setPrimaryButton:(CPSNavigationAlertFocusButton *)arg1 ;
-(void)setSecondaryButton:(CPSNavigationAlertFocusButton *)arg1 ;
-(CPSNavigationAlertFocusButton *)primaryButton;
-(CPSNavigationAlertFocusButton *)secondaryButton;
-(id)initWithPrimaryAction:(id)arg1 secondaryAction:(id)arg2 progressView:(id)arg3 ;
@end

