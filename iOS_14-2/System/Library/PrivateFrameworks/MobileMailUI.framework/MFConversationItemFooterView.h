/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@protocol MFMessageFooterViewDelegate;
@class UIVisualEffectView, UIButton, MFMessageDisplayMetrics, NSString, EMCachingContactStore;

@interface MFConversationItemFooterView : UIView <_UICursorInteractionDelegate> {

	BOOL _allowsCursorSnapping;
	UIVisualEffectView* _backgroundView;
	UIButton* _revealActionsButton;
	id<MFMessageFooterViewDelegate> _delegate;
	MFMessageDisplayMetrics* _displayMetrics;
	NSString* _senderName;
	double _defaultRevealActionButtonOriginY;
	double _defaultSeeMoreButtonOriginY;
	EMCachingContactStore* _contactStore;
	double _currentYOffset;
	UIButton* _seeMoreButton;

}

@property (assign,nonatomic) double defaultRevealActionButtonOriginY;                            //@synthesize defaultRevealActionButtonOriginY=_defaultRevealActionButtonOriginY - In the implementation block
@property (assign,nonatomic) double defaultSeeMoreButtonOriginY;                                 //@synthesize defaultSeeMoreButtonOriginY=_defaultSeeMoreButtonOriginY - In the implementation block
@property (nonatomic,retain) EMCachingContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) double currentYOffset;                                              //@synthesize currentYOffset=_currentYOffset - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideStickyFooterView; 
@property (nonatomic,retain) UIButton * revealActionsButton;                                     //@synthesize revealActionsButton=_revealActionsButton - In the implementation block
@property (nonatomic,retain) UIButton * seeMoreButton;                                           //@synthesize seeMoreButton=_seeMoreButton - In the implementation block
@property (nonatomic,copy) NSString * senderName;                                                //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,getter=isSeeMoreButtonHidden,nonatomic) BOOL seeMoreButtonHidden; 
@property (assign,nonatomic) double seeMoreButtonAlpha; 
@property (nonatomic,readonly) double seeMoreButtonHeight; 
@property (assign,nonatomic,__weak) id<MFMessageFooterViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFMessageDisplayMetrics * displayMetrics;                           //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (assign,nonatomic) BOOL allowsCursorSnapping;                                          //@synthesize allowsCursorSnapping=_allowsCursorSnapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nameFont;
+(id)prefixFont;
-(void)setContactStore:(EMCachingContactStore *)arg1 ;
-(void)_updateBackgroundView;
-(EMCachingContactStore *)contactStore;
-(void)layoutMarginsDidChange;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(MFMessageDisplayMetrics *)displayMetrics;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDisplayMetrics:(MFMessageDisplayMetrics *)arg1 ;
-(id<MFMessageFooterViewDelegate>)delegate;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDelegate:(id<MFMessageFooterViewDelegate>)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(void)_updateButtons;
-(UIButton *)seeMoreButton;
-(void)setSeeMoreButton:(UIButton *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)senderName;
-(void)setSenderName:(NSString *)arg1 ;
-(void)_updateSeeMoreButton;
-(void)_fontMetricCacheDidInvalidate:(id)arg1 ;
-(BOOL)shouldHideStickyFooterView;
-(void)setSeeMoreButtonHidden:(BOOL)arg1 ;
-(UIButton *)revealActionsButton;
-(void)layoutActionButtonWithBounds:(CGRect)arg1 ;
-(void)layoutSeeMoreButton;
-(double)currentYOffset;
-(void)moveOriginYByOffset:(double)arg1 ;
-(void)setDefaultSeeMoreButtonOriginY:(double)arg1 ;
-(void)setDefaultRevealActionButtonOriginY:(double)arg1 ;
-(void)setCurrentYOffset:(double)arg1 ;
-(double)defaultRevealActionButtonOriginY;
-(double)defaultSeeMoreButtonOriginY;
-(BOOL)allowsCursorSnapping;
-(BOOL)isSeeMoreButtonHidden;
-(void)setSeeMoreButtonAlpha:(double)arg1 ;
-(double)seeMoreButtonAlpha;
-(double)seeMoreButtonHeight;
-(void)addTarget:(id)arg1 action:(SEL)arg2 toButton:(long long)arg3 ;
-(void)showAttributionWithSenderName:(id)arg1 ;
-(void)hideAttribution;
-(void)setRevealActionsButton:(UIButton *)arg1 ;
-(void)setAllowsCursorSnapping:(BOOL)arg1 ;
@end

