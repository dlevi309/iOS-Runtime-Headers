/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/ICQUpgradeFlowManagerDelegate.h>

@protocol ICQBannerViewDelegate;
@class ICQOffer, UIFont, UIColor, ICQUpgradeFlowOptions, _ICQTextView, NSArray, ICQUpgradeFlowManager, NSString;

@interface ICQBannerView : UIView <UITextViewDelegate, ICQUpgradeFlowManagerDelegate> {

	ICQOffer* _offer;
	id<ICQBannerViewDelegate> _delegate;
	UIFont* _font;
	UIFont* _titleFont;
	UIFont* _detailMessageFont;
	UIFont* _linkMessageFont;
	UIColor* _titleColor;
	UIColor* _detailMessageColor;
	UIColor* _linkMessageColor;
	UIColor* _textColor;
	long long _textAlignment;
	double _textLineSpacing;
	UIFont* _linkTextFont;
	UIColor* _linkTextColor;
	ICQUpgradeFlowOptions* _flowOptions;
	_ICQTextView* _textView;
	NSArray* _activeConstraints;
	ICQUpgradeFlowManager* _localFlowManager;
	NSDirectionalEdgeInsets _textMargins;

}

@property (nonatomic,readonly) _ICQTextView * textView;                              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                            //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) ICQUpgradeFlowManager * localFlowManager;               //@synthesize localFlowManager=_localFlowManager - In the implementation block
@property (nonatomic,retain) ICQOffer * offer; 
@property (assign,nonatomic,__weak) id<ICQBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIFont * font;                                          //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                     //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIFont * detailMessageFont;                             //@synthesize detailMessageFont=_detailMessageFont - In the implementation block
@property (nonatomic,retain) UIFont * linkMessageFont;                               //@synthesize linkMessageFont=_linkMessageFont - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                   //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,retain) UIColor * detailMessageColor;                           //@synthesize detailMessageColor=_detailMessageColor - In the implementation block
@property (nonatomic,retain) UIColor * linkMessageColor;                             //@synthesize linkMessageColor=_linkMessageColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                    //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets textMargins;                    //@synthesize textMargins=_textMargins - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) double textLineSpacing;                                 //@synthesize textLineSpacing=_textLineSpacing - In the implementation block
@property (nonatomic,copy) UIFont * linkTextFont;                                    //@synthesize linkTextFont=_linkTextFont - In the implementation block
@property (nonatomic,copy) UIColor * linkTextColor;                                  //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (nonatomic,copy) ICQUpgradeFlowOptions * flowOptions;                      //@synthesize flowOptions=_flowOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)replaceWordsIn:(id)arg1 with:(id)arg2 ;
+(BOOL)shouldShowForOffer:(id)arg1 ;
-(_ICQTextView *)textView;
-(id)titleAttributes;
-(void)setTitleFont:(UIFont *)arg1 ;
-(id)attributedText;
-(UIColor *)titleColor;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)upgradeFlowManagerDidCancel:(id)arg1 ;
-(void)upgradeFlowManagerDidComplete:(id)arg1 ;
-(id<ICQBannerViewDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(void)_registerForDarwinNotifications;
-(UIFont *)titleFont;
-(void)setLinkTextFont:(UIFont *)arg1 ;
-(void)setTextMargins:(NSDirectionalEdgeInsets)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setDelegate:(id<ICQBannerViewDelegate>)arg1 ;
-(void)updateConstraints;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_handlePushReceivedDarwinNotification;
-(UIColor *)linkTextColor;
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setOffer:(ICQOffer *)arg1 ;
-(void)updateBannerView;
-(id)initWithOffer:(id)arg1 ;
-(long long)userInterfaceLayoutDirection;
-(ICQOffer *)offer;
-(long long)semanticContentAttribute;
-(UIFont *)font;
-(void)setTitleColor:(UIColor *)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)setFlowOptions:(ICQUpgradeFlowOptions *)arg1 ;
-(ICQUpgradeFlowOptions *)flowOptions;
-(id)messageAttributes;
-(double)textLineSpacing;
-(id)textParagraphStyle;
-(UIFont *)detailMessageFont;
-(UIColor *)detailMessageColor;
-(UIFont *)linkMessageFont;
-(id)textParagraphStyleAttributes;
-(UIFont *)linkTextFont;
-(id)detailMessageAttributes;
-(id)linkAttributes;
-(id)detailAttributedText;
-(void)_applyTextStorageAttributes;
-(void)_applyTextParagraphAttributes;
-(long long)_delegateActionForAction:(long long)arg1 ;
-(BOOL)_legacyDelegateMethodHandlesAction:(long long)arg1 ;
-(BOOL)_performLink:(id)arg1 ;
-(void)setTextLineSpacing:(double)arg1 ;
-(void)setDetailMessageFont:(UIFont *)arg1 ;
-(void)setLinkMessageFont:(UIFont *)arg1 ;
-(void)setDetailMessageColor:(UIColor *)arg1 ;
-(UIColor *)linkMessageColor;
-(void)setLinkMessageColor:(UIColor *)arg1 ;
-(NSDirectionalEdgeInsets)textMargins;
-(ICQUpgradeFlowManager *)localFlowManager;
-(void)setLocalFlowManager:(ICQUpgradeFlowManager *)arg1 ;
@end

