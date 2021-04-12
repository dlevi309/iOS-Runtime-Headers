/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)shouldShowForOffer:(id)arg1 ;
-(id<ICQBannerViewDelegate>)delegate;
-(void)setDelegate:(id<ICQBannerViewDelegate>)arg1 ;
-(_ICQTextView *)textView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)userInterfaceLayoutDirection;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIFont *)font;
-(void)updateConstraints;
-(id)attributedText;
-(long long)semanticContentAttribute;
-(UIColor *)textColor;
-(long long)textAlignment;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(ICQOffer *)offer;
-(void)setOffer:(ICQOffer *)arg1 ;
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(UIColor *)linkTextColor;
-(void)setLinkTextFont:(UIFont *)arg1 ;
-(void)setTextMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)initWithOffer:(id)arg1 ;
-(void)setFlowOptions:(ICQUpgradeFlowOptions *)arg1 ;
-(void)upgradeFlowManagerDidCancel:(id)arg1 ;
-(void)upgradeFlowManagerDidComplete:(id)arg1 ;
-(ICQUpgradeFlowOptions *)flowOptions;
-(id)messageAttributes;
-(id)_initWithFrame:(CGRect)arg1 ;
-(double)textLineSpacing;
-(id)textParagraphStyle;
-(id)textParagraphStyleAttributes;
-(UIFont *)linkTextFont;
-(void)_applyTextStorageAttributes;
-(void)_applyTextParagraphAttributes;
-(long long)_delegateActionForAction:(long long)arg1 ;
-(BOOL)_legacyDelegateMethodHandlesAction:(long long)arg1 ;
-(BOOL)_performLink:(id)arg1 ;
-(void)setTextLineSpacing:(double)arg1 ;
-(NSDirectionalEdgeInsets)textMargins;
-(ICQUpgradeFlowManager *)localFlowManager;
-(void)setLocalFlowManager:(ICQUpgradeFlowManager *)arg1 ;
@end

