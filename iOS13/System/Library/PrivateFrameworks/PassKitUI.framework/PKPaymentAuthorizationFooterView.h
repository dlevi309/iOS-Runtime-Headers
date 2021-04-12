/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKGlyphViewDelegate.h>

@protocol PKPaymentAuthorizationFooterViewDelegate;
@class UILabel, PKGlyphView, UIButton, UIView, NSString, NSMutableArray, NSLayoutConstraint, NSArray, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationFooterView : UIView <PKGlyphViewDelegate> {

	UILabel* _labelView;
	PKGlyphView* _glyphView;
	UIButton* _payWithPasscodeButton;
	UILabel* _passbookPaymentDetailsView;
	UIView* _separatorView;
	UIView* _lockupView;
	NSString* _overrideString;
	unsigned long long _stateTransitionIndex;
	BOOL _deferringState;
	BOOL _deferredStateRequiresRetry;
	NSString* _deferredStateString;
	BOOL _biometricSuccessOutstanding;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _deferredCompletionHandlers;
	NSLayoutConstraint* _separatorLeftConstraint;
	NSArray* _hiddenConstraints;
	NSArray* _staticRegularConstraints;
	NSMutableArray* _dynamicRegularConstraints;
	BOOL _compact;
	BOOL _compactUserIntent;
	long long _constraintState;
	long long _queuedConstraintState;
	BOOL _constraintsDirty;
	BOOL _isPad;
	BOOL _hasPearl;
	double _minimumHeight;
	unsigned _emphasizedEdge;
	BOOL _occludesBodyView;
	long long _state;
	PKPaymentAuthorizationLayout* _layout;
	unsigned long long _requestType;
	unsigned long long _confirmationStyle;
	NSString* _biometricConfirmationTitle;
	NSString* _confirmationTitle;
	id<PKPaymentAuthorizationFooterViewDelegate> _delegate;

}

@property (assign,nonatomic) long long state;                                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationLayout * layout;                                     //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                            //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long confirmationStyle;                                      //@synthesize confirmationStyle=_confirmationStyle - In the implementation block
@property (nonatomic,retain) NSString * biometricConfirmationTitle;                                     //@synthesize biometricConfirmationTitle=_biometricConfirmationTitle - In the implementation block
@property (nonatomic,retain) NSString * confirmationTitle;                                              //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (assign,nonatomic) BOOL occludesBodyView;                                                     //@synthesize occludesBodyView=_occludesBodyView - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKPaymentAuthorizationFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationFooterViewDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(PKPaymentAuthorizationLayout *)layout;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(unsigned long long)requestType;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)_prepareConstraints;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)_createSubviews;
-(unsigned long long)confirmationStyle;
-(void)setConfirmationStyle:(unsigned long long)arg1 ;
-(void)setConfirmationTitle:(NSString *)arg1 ;
-(NSString *)confirmationTitle;
-(BOOL)_shouldCompact;
-(id)initWithFrame:(CGRect)arg1 layout:(id)arg2 ;
-(void)updateRotation;
-(void)setState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)glyphView:(id)arg1 revealingCheckmark:(BOOL)arg2 ;
-(void)glyphViewUserIntentEdgeDidChange:(id)arg1 ;
-(void)setBiometricConfirmationTitle:(NSString *)arg1 ;
-(void)setOccludesBodyView:(BOOL)arg1 ;
-(void)setState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 ;
-(id)_titleLabelAttributedString:(id)arg1 ;
-(id)_titleAttributedStringForState:(long long)arg1 ;
-(id)_payWithPasscodeTitleForState:(long long)arg1 ;
-(BOOL)setConstraintState:(long long)arg1 ;
-(void)_payWithPasscodePressed;
-(id)defaultHeightConstraints;
-(NSString *)biometricConfirmationTitle;
-(BOOL)occludesBodyView;
@end

