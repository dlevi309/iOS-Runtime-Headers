/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SUTermsAndConditionsViewDelegate;
@class SUSubtitledButton, SUClientInterface, SULinkControl;

@interface SUTermsAndConditionsView : UIView {

	SUSubtitledButton* _button;
	SUClientInterface* _clientInterface;
	id<SUTermsAndConditionsViewDelegate> _delegate;
	BOOL _hideAccountButton;
	double _rightMargin;
	long long _style;
	SULinkControl* _termsAndConditionsControl;

}

@property (nonatomic,retain) SUClientInterface * clientInterface;                               //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign,nonatomic,__weak) id<SUTermsAndConditionsViewDelegate> delegate; 
@property (assign,nonatomic) BOOL hideAccountButton;                                            //@synthesize hideAccountButton=_hideAccountButton - In the implementation block
@property (assign,nonatomic) double rightMargin;                                                //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) long long style;                                                   //@synthesize style=_style - In the implementation block
-(void)dealloc;
-(id<SUTermsAndConditionsViewDelegate>)delegate;
-(void)setDelegate:(id<SUTermsAndConditionsViewDelegate>)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(id)_button;
-(double)rightMargin;
-(SUClientInterface *)clientInterface;
-(void)_updateButton;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)setHideAccountButton:(BOOL)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_destroyButton;
-(long long)_linkStyleForStyle:(long long)arg1 ;
-(double)_buttonHeightForStyle:(long long)arg1 ;
-(id)_termsAndConditionsControl;
-(void)_clearButtonSelection:(id)arg1 ;
-(void)_termsAndConditionsAction:(id)arg1 ;
-(BOOL)hideAccountButton;
@end

