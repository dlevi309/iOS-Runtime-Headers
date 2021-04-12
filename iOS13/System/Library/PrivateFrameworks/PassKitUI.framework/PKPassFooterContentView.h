/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@protocol PKPassFooterContentViewDelegate;
@class PKPass, PKLinkedAppIconView, UIButton, UIView, PKPaymentPass;

@interface PKPassFooterContentView : UIView {

	BOOL _userIntentRequired;
	BOOL _invalidated;
	BOOL _requestPileSuppression;
	long long _style;
	id<PKPassFooterContentViewDelegate> _delegate;
	PKPass* _pass;
	PKLinkedAppIconView* _appIconView;
	UIButton* _infoButton;
	UIView* _bottomRule;
	long long _coachingState;

}

@property (nonatomic,readonly) long long style;                                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) id<PKPassFooterContentViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKPass * pass;                                                    //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,readonly) PKLinkedAppIconView * appIconView;                                //@synthesize appIconView=_appIconView - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;                                            //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIView * bottomRule;                                              //@synthesize bottomRule=_bottomRule - In the implementation block
@property (getter=isPassAuthorized,nonatomic,readonly) BOOL passAuthorized; 
@property (getter=isUserIntentRequired,nonatomic,readonly) BOOL userIntentRequired;              //@synthesize userIntentRequired=_userIntentRequired - In the implementation block
@property (nonatomic,readonly) long long coachingState;                                          //@synthesize coachingState=_coachingState - In the implementation block
@property (nonatomic,readonly) BOOL invalidated;                                                 //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,readonly) BOOL requestPileSuppression;                                      //@synthesize requestPileSuppression=_requestPileSuppression - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<PKPassFooterContentViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassFooterContentViewDelegate>)arg1 ;
-(long long)style;
-(void)layoutSubviews;
-(UIButton *)infoButton;
-(BOOL)invalidated;
-(PKPaymentPass *)paymentPass;
-(id)initWithPass:(id)arg1 ;
-(PKPass *)pass;
-(void)_setUserIntentRequired:(BOOL)arg1 ;
-(BOOL)isPassAuthorized;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(long long)coachingState;
-(BOOL)requestPileSuppression;
-(BOOL)isUserIntentRequired;
-(void)_setRequestPileSuppression:(BOOL)arg1 ;
-(UIView *)bottomRule;
-(PKLinkedAppIconView *)appIconView;
-(void)_setCoachingState:(long long)arg1 ;
-(id)_buttonWithTitle:(id)arg1 ;
-(void)_infoButtonPressed:(id)arg1 ;
@end

