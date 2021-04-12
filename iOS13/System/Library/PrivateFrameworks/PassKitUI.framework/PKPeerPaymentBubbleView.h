/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKTranscriptPluginView.h>

@class PKPeerPayment3DTextView, UILabel, UIActivityIndicatorView, CAShapeLayer, UIImageView, NSTimer, NSDecimalNumber, NSString, PKContinuousButton;

@interface PKPeerPaymentBubbleView : UIView <CKTranscriptPluginView> {

	PKPeerPayment3DTextView* _renderView;
	BOOL _renderViewRemovedByLossOfWindow;
	BOOL _snapshotInProgress;
	BOOL _usedForSnapshotting;
	UILabel* _messageLabel;
	UILabel* _statusLabel;
	UIActivityIndicatorView* _actionSpinner;
	CAShapeLayer* _maskLayer;
	CGRect _lastBoundsForRoundedCornerLayout;
	UIImageView* _applePayLogoImageView;
	NSTimer* _testTimer;
	BOOL _testTransition;
	BOOL _showsActionSpinner;
	BOOL _hasRoundedCorners;
	BOOL _usesWatchColors;
	BOOL _displaysApplePayLogo;
	BOOL _liveRenderingEnabled;
	unsigned long long _state;
	NSDecimalNumber* _amount;
	NSString* _currency;
	unsigned long long _action;
	/*^block*/id _actionHandler;
	PKContinuousButton* _actionButton;
	UIEdgeInsets _contentInset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CKTranscriptPluginViewDelegate> pluginViewDelegate; 
@property (nonatomic,readonly) BOOL wantsOutline; 
@property (assign,nonatomic) unsigned long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                                    //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currency;                                                         //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                 //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) CGRect referenceBounds; 
@property (assign,nonatomic) BOOL testTransition;                                                       //@synthesize testTransition=_testTransition - In the implementation block
@property (assign,nonatomic) unsigned long long action;                                                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                            //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign,nonatomic) BOOL showsActionSpinner;                                                   //@synthesize showsActionSpinner=_showsActionSpinner - In the implementation block
@property (nonatomic,readonly) PKContinuousButton * actionButton;                                       //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic) BOOL hasRoundedCorners;                                                    //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL usesWatchColors;                                                      //@synthesize usesWatchColors=_usesWatchColors - In the implementation block
@property (assign,nonatomic) BOOL displaysApplePayLogo;                                                 //@synthesize displaysApplePayLogo=_displaysApplePayLogo - In the implementation block
@property (assign,getter=isLiveRenderingEnabled,nonatomic) BOOL liveRenderingEnabled;                   //@synthesize liveRenderingEnabled=_liveRenderingEnabled - In the implementation block
+(CGSize)referenceSizeForState:(unsigned long long)arg1 ;
+(CGSize)referenceSizeForState:(unsigned long long)arg1 andAction:(unsigned long long)arg2 ;
+(id)referenceBackgroundColorForState:(unsigned long long)arg1 ;
+(CGSize)referenceSize;
+(id)applePayLogo;
+(id)referenceWatchBackgroundColorForState:(unsigned long long)arg1 ;
+(CGSize)referenceSizeForPeerPaymentStatusResponse:(id)arg1 ;
+(id)referenceBackgroundColor;
+(id)generatedSnapshotForDataURL:(id)arg1 contentInset:(UIEdgeInsets)arg2 isFromMe:(BOOL)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(unsigned long long)action;
-(void)setState:(unsigned long long)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_backgroundColor;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setAction:(unsigned long long)arg1 ;
-(void)didMoveToWindow;
-(UIEdgeInsets)contentInset;
-(void)awakeFromNib;
-(CGRect)referenceBounds;
-(id)_messageText;
-(PKContinuousButton *)actionButton;
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setHasRoundedCorners:(BOOL)arg1 ;
-(BOOL)hasRoundedCorners;
-(void)_actionButtonTapped:(id)arg1 ;
-(id)_statusText;
-(id)interactiveViews;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(void)_updateContent;
-(id)initWithCurrencyAmount:(id)arg1 state:(unsigned long long)arg2 ;
-(void)setDisplaysApplePayLogo:(BOOL)arg1 ;
-(void)setLiveRenderingEnabled:(BOOL)arg1 ;
-(CGSize)referenceSize;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 state:(unsigned long long)arg3 ;
-(id)_actionTitle;
-(void)setAction:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)_messageTextAttributes;
-(double)_messageAlpha;
-(void)updateWithPeerPaymentStatus:(long long)arg1 animated:(BOOL)arg2 ;
-(id)generatedSnapshot;
-(id)initForSnapshotting;
-(void)performPostRender:(/*^block*/id)arg1 ;
-(void)setShowsActionSpinner:(BOOL)arg1 ;
-(void)setTestTransition:(BOOL)arg1 ;
-(void)updateWithPeerPaymentStatusResponse:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateWithPaymentTransaction:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateWithPeerPaymentMessage:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)testTransition;
-(BOOL)showsActionSpinner;
-(BOOL)usesWatchColors;
-(void)setUsesWatchColors:(BOOL)arg1 ;
-(BOOL)displaysApplePayLogo;
-(BOOL)isLiveRenderingEnabled;
@end
