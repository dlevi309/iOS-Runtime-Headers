/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>

@protocol PKExplanationViewDelegate;
@class UIImageView, PKPaymentSetupDockView, NSString, UILabel, UIActivityIndicatorView, _PKUIKVisibilityBackdropView, UIButton, UITextView, UIView, UIImage, UIColor, UIFont, NSAttributedString, OBPrivacyLinkController, UIScrollView, LAUICheckmarkLayer;

@interface PKExplanationView : UIView <UIScrollViewDelegate, UITextViewDelegate, _PKUIKVisibilityBackdropViewDelegate> {

	long long _context;
	BOOL _privacyFooterShouldPin;
	UIImageView* _imageView;
	PKPaymentSetupDockView* _dockView;
	NSString* _titleText;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicator;
	_PKUIKVisibilityBackdropView* _backdropView;
	double _backdropWeight;
	BOOL _showPrivacyView;
	double _topMargin;
	CGRect _titleLabelFrame;
	CGRect _titleLabelLastLineBounds;
	double _titleLabelLastLineDescent;
	UIImageView* _bodyImageView;
	UIButton* _bodyButton;
	UITextView* _secondaryBodyTextView;
	UIView* _topBackgroundView;
	BOOL _forceShowSetupLaterButton;
	BOOL _hideTitleText;
	BOOL _titleTextAdjustsFontSizeToWidth;
	int _titleTextNumberOfLines;
	id<PKExplanationViewDelegate> _delegate;
	double _titleHyphenationFactor;
	double _topLogoPadding;
	UIImage* _image;
	UIView* _heroView;
	UIColor* _topBackgroundColor;
	UIImage* _titleImage;
	UIFont* _titleFont;
	long long _titleTextAlignment;
	UIImage* _bodyImage;
	NSString* _bodyText;
	NSAttributedString* _attributedBodyText;
	NSAttributedString* _attributedSecondaryBodyText;
	NSString* _bodyButtonText;
	long long _bodyButtonNumberOfLines;
	UIView* _bodyView;
	double _bodyViewPadding;
	long long _bodyTextAlignment;
	unsigned long long _bodyDataDetectorTypes;
	OBPrivacyLinkController* _privacyLink;
	UIScrollView* _scrollView;
	LAUICheckmarkLayer* _checkmarkLayer;
	UIImageView* _logoImageView;
	UITextView* _bodyTextView;
	CGSize _logoImageViewTargetSize;

}

@property (nonatomic,retain) UIImageView * logoImageView;                                 //@synthesize logoImageView=_logoImageView - In the implementation block
@property (assign,nonatomic) CGSize logoImageViewTargetSize;                              //@synthesize logoImageViewTargetSize=_logoImageViewTargetSize - In the implementation block
@property (nonatomic,retain) UITextView * bodyTextView;                                   //@synthesize bodyTextView=_bodyTextView - In the implementation block
@property (assign,nonatomic,__weak) id<PKExplanationViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showPrivacyView;                                        //@synthesize showPrivacyView=_showPrivacyView - In the implementation block
@property (assign,nonatomic) BOOL forceShowSetupLaterButton;                              //@synthesize forceShowSetupLaterButton=_forceShowSetupLaterButton - In the implementation block
@property (assign,nonatomic) double topMargin;                                            //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) double titleHyphenationFactor;                               //@synthesize titleHyphenationFactor=_titleHyphenationFactor - In the implementation block
@property (assign,nonatomic) double topLogoPadding;                                       //@synthesize topLogoPadding=_topLogoPadding - In the implementation block
@property (nonatomic,retain) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,retain) UIView * heroView;                                           //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UIColor * topBackgroundColor;                                //@synthesize topBackgroundColor=_topBackgroundColor - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                          //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIImage * titleImage;                                        //@synthesize titleImage=_titleImage - In the implementation block
@property (nonatomic,copy) UIFont * titleFont;                                            //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) BOOL hideTitleText;                                          //@synthesize hideTitleText=_hideTitleText - In the implementation block
@property (assign,nonatomic) long long titleTextAlignment;                                //@synthesize titleTextAlignment=_titleTextAlignment - In the implementation block
@property (assign,nonatomic) BOOL titleTextAdjustsFontSizeToWidth;                        //@synthesize titleTextAdjustsFontSizeToWidth=_titleTextAdjustsFontSizeToWidth - In the implementation block
@property (assign,nonatomic) int titleTextNumberOfLines;                                  //@synthesize titleTextNumberOfLines=_titleTextNumberOfLines - In the implementation block
@property (nonatomic,retain) UIImage * bodyImage;                                         //@synthesize bodyImage=_bodyImage - In the implementation block
@property (nonatomic,readonly) UIImageView * bodyImageView; 
@property (nonatomic,readonly) UIFont * bodyTextFont; 
@property (nonatomic,copy) NSString * bodyText;                                           //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedBodyText;                       //@synthesize attributedBodyText=_attributedBodyText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedSecondaryBodyText;              //@synthesize attributedSecondaryBodyText=_attributedSecondaryBodyText - In the implementation block
@property (nonatomic,copy) NSString * bodyButtonText;                                     //@synthesize bodyButtonText=_bodyButtonText - In the implementation block
@property (assign,nonatomic) long long bodyButtonNumberOfLines;                           //@synthesize bodyButtonNumberOfLines=_bodyButtonNumberOfLines - In the implementation block
@property (nonatomic,retain) UIView * bodyView;                                           //@synthesize bodyView=_bodyView - In the implementation block
@property (assign,nonatomic) double bodyViewPadding;                                      //@synthesize bodyViewPadding=_bodyViewPadding - In the implementation block
@property (assign,nonatomic) long long bodyTextAlignment;                                 //@synthesize bodyTextAlignment=_bodyTextAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long bodyDataDetectorTypes;                    //@synthesize bodyDataDetectorTypes=_bodyDataDetectorTypes - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                       //@synthesize privacyLink=_privacyLink - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupDockView * dockView;                         //@synthesize dockView=_dockView - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;               //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) LAUICheckmarkLayer * checkmarkLayer;                       //@synthesize checkmarkLayer=_checkmarkLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIActivityIndicatorView *)activityIndicator;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)tintColorDidChange;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(void)setImage:(UIImage *)arg1 ;
-(UIFont *)bodyTextFont;
-(id)init;
-(long long)titleTextAlignment;
-(NSString *)bodyText;
-(UIImageView *)imageView;
-(id<PKExplanationViewDelegate>)delegate;
-(void)setTitleTextAlignment:(long long)arg1 ;
-(void)setTitleImage:(UIImage *)arg1 ;
-(id)initWithContext:(long long)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setTitleHyphenationFactor:(double)arg1 ;
-(UIFont *)titleFont;
-(NSString *)titleText;
-(void)_continue;
-(UIImage *)image;
-(void)setTitleText:(NSString *)arg1 ;
-(UIImage *)titleImage;
-(void)setAttributedSecondaryBodyText:(NSAttributedString *)arg1 ;
-(UIView *)bodyView;
-(void)setDelegate:(id<PKExplanationViewDelegate>)arg1 ;
-(void)setBodyDataDetectorTypes:(unsigned long long)arg1 ;
-(UITextView *)bodyTextView;
-(void)setBodyText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithContext:(long long)arg1 delegate:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_updateCheckmarkColor;
-(double)topMargin;
-(PKPaymentSetupDockView *)dockView;
-(void)setBodyButtonText:(NSString *)arg1 ;
-(void)setBodyButtonNumberOfLines:(long long)arg1 ;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(long long)bodyTextAlignment;
-(UIImageView *)logoImageView;
-(void)pk_applyAppearance:(id)arg1 ;
-(void)_updateTitleLabel;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setBodyTextAlignment:(long long)arg1 ;
-(LAUICheckmarkLayer *)checkmarkLayer;
-(UIView *)heroView;
-(void)setShowPrivacyView:(BOOL)arg1 ;
-(void)setHeroView:(UIView *)arg1 ;
-(void)setTopBackgroundColor:(UIColor *)arg1 ;
-(void)setBodyViewPadding:(double)arg1 ;
-(void)setTopLogoPadding:(double)arg1 ;
-(void)setAttributedBodyText:(NSAttributedString *)arg1 ;
-(void)setBodyView:(UIView *)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(UIScrollView *)scrollView;
-(BOOL)_showTitleLogoImageView;
-(void)_updateCachedTitleLabelLastLine;
-(void)_calculateBlur;
-(id)_createBodyTextView;
-(void)_bodyButtonTapped;
-(BOOL)_isBuddyiPad;
-(UIImageView *)bodyImageView;
-(void)setHideTitleText:(BOOL)arg1 ;
-(void)setTitleTextNumberOfLines:(int)arg1 ;
-(void)setTitleTextAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setBodyImage:(UIImage *)arg1 ;
-(void)setLogoImageViewTargetSize:(CGSize)arg1 ;
-(BOOL)showPrivacyView;
-(BOOL)forceShowSetupLaterButton;
-(double)titleHyphenationFactor;
-(double)topLogoPadding;
-(UIColor *)topBackgroundColor;
-(BOOL)hideTitleText;
-(BOOL)titleTextAdjustsFontSizeToWidth;
-(int)titleTextNumberOfLines;
-(void)setForceShowSetupLaterButton:(BOOL)arg1 ;
-(void)_setupLater;
-(void)setTitleTextAdjustsFontSizeToWidth:(BOOL)arg1 ;
-(UIImage *)bodyImage;
-(NSAttributedString *)attributedBodyText;
-(NSAttributedString *)attributedSecondaryBodyText;
-(NSString *)bodyButtonText;
-(long long)bodyButtonNumberOfLines;
-(double)bodyViewPadding;
-(unsigned long long)bodyDataDetectorTypes;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(CGSize)logoImageViewTargetSize;
-(void)setBodyTextView:(UITextView *)arg1 ;
-(void)dealloc;
-(void)_createSubviews;
@end

