/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>

@protocol PKExplanationViewDelegate;
@class UIImageView, PKPaymentSetupDockView, NSString, UILabel, UIActivityIndicatorView, PKCheckGlyphLayer, _PKUIKVisibilityBackdropView, UIButton, UITextView, UIView, UIImage, UIColor, UIFont, NSAttributedString, OBPrivacyLinkController, UIScrollView;

@interface PKExplanationView : UIView <UIScrollViewDelegate, UITextViewDelegate, _PKUIKVisibilityBackdropViewDelegate> {

	long long _context;
	BOOL _privacyFooterShouldPin;
	UIImageView* _imageView;
	PKPaymentSetupDockView* _dockView;
	NSString* _titleText;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicator;
	PKCheckGlyphLayer* _checkmarkLayer;
	_PKUIKVisibilityBackdropView* _backdropView;
	double _backdropWeight;
	BOOL _showPrivacyView;
	double _topMargin;
	CGRect _titleLabelFrame;
	CGRect _titleLabelLastLineBounds;
	double _titleLabelLastLineDescent;
	UIButton* _bodyButton;
	UITextView* _secondaryBodyTextView;
	UIView* _topBackgroundView;
	BOOL _forceShowSetupLaterButton;
	BOOL _hideTitleText;
	id<PKExplanationViewDelegate> _delegate;
	double _titleHyphenationFactor;
	UIImage* _image;
	UIView* _heroView;
	UIColor* _topBackgroundColor;
	UIImage* _titleImage;
	UIFont* _titleFont;
	long long _titleTextAlignment;
	NSString* _bodyText;
	NSAttributedString* _attributedBodyText;
	NSAttributedString* _attributedSecondaryBodyText;
	NSString* _bodyButtonText;
	long long _bodyButtonNumberOfLines;
	UIView* _bodyView;
	long long _bodyTextAlignment;
	unsigned long long _bodyDataDetectorTypes;
	OBPrivacyLinkController* _privacyLink;
	UIScrollView* _scrollView;
	UIImageView* _logoImageView;
	UITextView* _bodyTextView;

}

@property (nonatomic,retain) UIImageView * logoImageView;                                 //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UITextView * bodyTextView;                                   //@synthesize bodyTextView=_bodyTextView - In the implementation block
@property (assign,nonatomic,__weak) id<PKExplanationViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showPrivacyView;                                        //@synthesize showPrivacyView=_showPrivacyView - In the implementation block
@property (assign,nonatomic) BOOL forceShowSetupLaterButton;                              //@synthesize forceShowSetupLaterButton=_forceShowSetupLaterButton - In the implementation block
@property (assign,nonatomic) double topMargin;                                            //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) double titleHyphenationFactor;                               //@synthesize titleHyphenationFactor=_titleHyphenationFactor - In the implementation block
@property (nonatomic,retain) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,retain) UIView * heroView;                                           //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UIColor * topBackgroundColor;                                //@synthesize topBackgroundColor=_topBackgroundColor - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                          //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIImage * titleImage;                                        //@synthesize titleImage=_titleImage - In the implementation block
@property (nonatomic,copy) UIFont * titleFont;                                            //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) BOOL hideTitleText;                                          //@synthesize hideTitleText=_hideTitleText - In the implementation block
@property (assign,nonatomic) long long titleTextAlignment;                                //@synthesize titleTextAlignment=_titleTextAlignment - In the implementation block
@property (nonatomic,readonly) UIFont * bodyTextFont; 
@property (nonatomic,copy) NSString * bodyText;                                           //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedBodyText;                       //@synthesize attributedBodyText=_attributedBodyText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedSecondaryBodyText;              //@synthesize attributedSecondaryBodyText=_attributedSecondaryBodyText - In the implementation block
@property (nonatomic,copy) NSString * bodyButtonText;                                     //@synthesize bodyButtonText=_bodyButtonText - In the implementation block
@property (assign,nonatomic) long long bodyButtonNumberOfLines;                           //@synthesize bodyButtonNumberOfLines=_bodyButtonNumberOfLines - In the implementation block
@property (nonatomic,retain) UIView * bodyView;                                           //@synthesize bodyView=_bodyView - In the implementation block
@property (assign,nonatomic) long long bodyTextAlignment;                                 //@synthesize bodyTextAlignment=_bodyTextAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long bodyDataDetectorTypes;                    //@synthesize bodyDataDetectorTypes=_bodyDataDetectorTypes - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                       //@synthesize privacyLink=_privacyLink - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupDockView * dockView;                         //@synthesize dockView=_dockView - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;               //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) PKCheckGlyphLayer * checkmarkLayer;                        //@synthesize checkmarkLayer=_checkmarkLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PKExplanationViewDelegate>)delegate;
-(void)setDelegate:(id<PKExplanationViewDelegate>)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithContext:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)tintColorDidChange;
-(double)topMargin;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIScrollView *)scrollView;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(PKPaymentSetupDockView *)dockView;
-(UIActivityIndicatorView *)activityIndicator;
-(UIView *)bodyView;
-(void)setBodyView:(UIView *)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(NSString *)titleText;
-(void)setTitleImage:(UIImage *)arg1 ;
-(UIImage *)titleImage;
-(void)_createSubviews;
-(void)_updateTitleLabel;
-(UIColor *)topBackgroundColor;
-(void)setTopBackgroundColor:(UIColor *)arg1 ;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(void)pk_applyAppearance:(id)arg1 ;
-(UIImageView *)logoImageView;
-(PKCheckGlyphLayer *)checkmarkLayer;
-(void)setShowPrivacyView:(BOOL)arg1 ;
-(void)setAttributedBodyText:(NSAttributedString *)arg1 ;
-(void)setHeroView:(UIView *)arg1 ;
-(void)setForceShowSetupLaterButton:(BOOL)arg1 ;
-(void)setBodyDataDetectorTypes:(unsigned long long)arg1 ;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(void)_setupLater;
-(void)_updateCheckmarkColor;
-(id)initWithContext:(long long)arg1 delegate:(id)arg2 ;
-(UITextView *)bodyTextView;
-(BOOL)_showTitleLogoImageView;
-(void)_updateCachedTitleLabelLastLine;
-(void)_calculateBlur;
-(id)_createBodyTextView;
-(UIFont *)bodyTextFont;
-(void)_bodyButtonTapped;
-(BOOL)_isBuddyiPad;
-(void)_continue;
-(void)setHideTitleText:(BOOL)arg1 ;
-(void)setBodyTextAlignment:(long long)arg1 ;
-(void)setTitleTextAlignment:(long long)arg1 ;
-(void)setAttributedSecondaryBodyText:(NSAttributedString *)arg1 ;
-(void)setBodyButtonText:(NSString *)arg1 ;
-(void)setBodyButtonNumberOfLines:(long long)arg1 ;
-(void)setTitleHyphenationFactor:(double)arg1 ;
-(BOOL)showPrivacyView;
-(BOOL)forceShowSetupLaterButton;
-(double)titleHyphenationFactor;
-(UIView *)heroView;
-(BOOL)hideTitleText;
-(long long)titleTextAlignment;
-(NSAttributedString *)attributedBodyText;
-(NSAttributedString *)attributedSecondaryBodyText;
-(NSString *)bodyButtonText;
-(long long)bodyButtonNumberOfLines;
-(long long)bodyTextAlignment;
-(unsigned long long)bodyDataDetectorTypes;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(void)setBodyTextView:(UITextView *)arg1 ;
@end

