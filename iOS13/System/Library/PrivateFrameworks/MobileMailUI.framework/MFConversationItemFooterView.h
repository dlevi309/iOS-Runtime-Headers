/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@protocol MFMessageFooterViewDelegate;
@class UIVisualEffectView, UIButton, MFMessageDisplayMetrics, NSString, EMCachingContactStore;

@interface MFConversationItemFooterView : UIView <_UICursorInteractionDelegate> {

	BOOL _shouldArchiveByDefault;
	BOOL _allowsCursorSnapping;
	UIVisualEffectView* _backgroundView;
	UIButton* _seeMoreButton;
	UIButton* _revealActionsButton;
	id<MFMessageFooterViewDelegate> _delegate;
	MFMessageDisplayMetrics* _displayMetrics;
	NSString* _senderName;
	double _defaultRevealActionButtonOriginY;
	double _defaultTrashButtonOriginY;
	double _defaultSeeMoreButtonOriginY;
	UIButton* _trashButton;
	EMCachingContactStore* _contactStore;
	double _currentYOffset;

}

@property (assign,nonatomic) double defaultRevealActionButtonOriginY;                      //@synthesize defaultRevealActionButtonOriginY=_defaultRevealActionButtonOriginY - In the implementation block
@property (assign,nonatomic) double defaultTrashButtonOriginY;                             //@synthesize defaultTrashButtonOriginY=_defaultTrashButtonOriginY - In the implementation block
@property (assign,nonatomic) double defaultSeeMoreButtonOriginY;                           //@synthesize defaultSeeMoreButtonOriginY=_defaultSeeMoreButtonOriginY - In the implementation block
@property (nonatomic,retain) UIButton * trashButton;                                       //@synthesize trashButton=_trashButton - In the implementation block
@property (nonatomic,retain) EMCachingContactStore * contactStore;                         //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) double currentYOffset;                                        //@synthesize currentYOffset=_currentYOffset - In the implementation block
@property (nonatomic,retain) UIButton * revealActionsButton;                               //@synthesize revealActionsButton=_revealActionsButton - In the implementation block
@property (nonatomic,retain) UIButton * seeMoreButton;                                     //@synthesize seeMoreButton=_seeMoreButton - In the implementation block
@property (nonatomic,copy) NSString * senderName;                                          //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<MFMessageFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFMessageDisplayMetrics * displayMetrics;                     //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (assign,nonatomic) BOOL shouldArchiveByDefault;                                  //@synthesize shouldArchiveByDefault=_shouldArchiveByDefault - In the implementation block
@property (assign,nonatomic) BOOL allowsCursorSnapping;                                    //@synthesize allowsCursorSnapping=_allowsCursorSnapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nameFont;
+(id)prefixFont;
-(id<MFMessageFooterViewDelegate>)delegate;
-(void)setDelegate:(id<MFMessageFooterViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(EMCachingContactStore *)contactStore;
-(void)setContactStore:(EMCachingContactStore *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)layoutSubviews;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)_updateBackgroundView;
-(UIButton *)seeMoreButton;
-(void)setSeeMoreButton:(UIButton *)arg1 ;
-(BOOL)shouldArchiveByDefault;
-(NSString *)senderName;
-(void)setSenderName:(NSString *)arg1 ;
-(MFMessageDisplayMetrics *)displayMetrics;
-(void)setDisplayMetrics:(MFMessageDisplayMetrics *)arg1 ;
-(void)setShouldArchiveByDefault:(BOOL)arg1 ;
-(void)_updateSeeMoreButton;
-(void)_fontMetricCacheDidInvalidate:(id)arg1 ;
-(void)_updateButtonsForTraitCollection:(id)arg1 ;
-(BOOL)_shouldHideStickyFooter;
-(UIButton *)revealActionsButton;
-(UIButton *)trashButton;
-(void)layoutActionButtonWithBounds:(CGRect)arg1 ;
-(void)layoutTrashButtonWithBounds:(CGRect)arg1 ;
-(void)layoutSeeMoreButton;
-(double)currentYOffset;
-(void)moveOriginYByOffset:(double)arg1 ;
-(void)setDefaultSeeMoreButtonOriginY:(double)arg1 ;
-(void)setDefaultTrashButtonOriginY:(double)arg1 ;
-(void)setDefaultRevealActionButtonOriginY:(double)arg1 ;
-(void)setCurrentYOffset:(double)arg1 ;
-(double)defaultRevealActionButtonOriginY;
-(double)defaultTrashButtonOriginY;
-(double)defaultSeeMoreButtonOriginY;
-(BOOL)allowsCursorSnapping;
-(void)addTarget:(id)arg1 action:(SEL)arg2 toButton:(long long)arg3 ;
-(void)showAttributionWithSenderName:(id)arg1 ;
-(void)hideAttribution;
-(void)setRevealActionsButton:(UIButton *)arg1 ;
-(void)setAllowsCursorSnapping:(BOOL)arg1 ;
-(void)setTrashButton:(UIButton *)arg1 ;
@end

