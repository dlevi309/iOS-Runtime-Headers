/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

