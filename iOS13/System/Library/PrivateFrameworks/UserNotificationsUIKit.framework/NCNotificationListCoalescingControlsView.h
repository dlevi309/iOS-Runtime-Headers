/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NCToggleControlDelegate.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@protocol NCNotificationListCoalescingControlsViewDelegate;
@class NSString, NCToggleControlPair, _UILegibilitySettings;

@interface NCNotificationListCoalescingControlsView : UIView <NCToggleControlDelegate, PLContentSizeCategoryAdjusting, MTMaterialGrouping> {

	NSString* _materialGroupNameBase;
	id<NCNotificationListCoalescingControlsViewDelegate> _delegate;
	NCToggleControlPair* _toggleControlPair;
	_UILegibilitySettings* _legibilitySettings;
	double _effectiveButtonHeight;
	double _effectiveHorizontalPadding;
	double _effectiveVerticalPadding;

}

@property (nonatomic,retain) NCToggleControlPair * toggleControlPair;                                           //@synthesize toggleControlPair=_toggleControlPair - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                        //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,getter=_effectiveButtonHeight,nonatomic) double effectiveButtonHeight;                        //@synthesize effectiveButtonHeight=_effectiveButtonHeight - In the implementation block
@property (assign,getter=_effectiveHorizontalPadding,nonatomic) double effectiveHorizontalPadding;              //@synthesize effectiveHorizontalPadding=_effectiveHorizontalPadding - In the implementation block
@property (assign,getter=_effectiveVerticalPadding,nonatomic) double effectiveVerticalPadding;                  //@synthesize effectiveVerticalPadding=_effectiveVerticalPadding - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListCoalescingControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (nonatomic,copy) NSString * materialGroupNameBase;                                                    //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
+(double)preferredHeight;
+(id)labelTextStyle;
-(id<NCNotificationListCoalescingControlsViewDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationListCoalescingControlsViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)_edgeInsets;
-(double)_cornerRadius;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(id)_clearButton;
-(BOOL)adjustsFontForContentSizeCategory;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSString *)materialGroupNameBase;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)resetClearButtonStateAnimated:(BOOL)arg1 ;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(CGPoint)arg1 ;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)_handleClearAll:(id)arg1 ;
-(id)containerViewForToggleControlClickInteractionPresentedContent:(id)arg1 ;
-(void)toggleControlDidBeginClickInteraction:(id)arg1 ;
-(void)toggleControlDidPresentClickInteractionPresentedContent:(id)arg1 ;
-(void)toggleControlDidDismssClickInteractionPresentedContent:(id)arg1 ;
-(BOOL)_isClearButtonExpanded;
-(void)_configureToggleControlPairIfNecessary;
-(void)_layoutToggleControlPair;
-(double)_effectiveValue:(double)arg1 ;
-(double)_effectiveButtonHeight;
-(double)_effectiveHorizontalPadding;
-(double)_effectiveVerticalPadding;
-(void)_handleRestackTouchUpInside:(id)arg1 ;
-(void)_handleRestackPrimaryAction:(id)arg1 ;
-(void)_handleClearTouchUpInside:(id)arg1 ;
-(void)_handleClearPrimaryAction:(id)arg1 ;
-(id)_newRestackButton;
-(id)_newClearButton;
-(double)_imageDimension;
-(id)_restackButtonTitle;
-(id)_clearButtonTitle;
-(NCToggleControlPair *)toggleControlPair;
-(void)setToggleControlPair:(NCToggleControlPair *)arg1 ;
-(void)setEffectiveButtonHeight:(double)arg1 ;
-(void)setEffectiveHorizontalPadding:(double)arg1 ;
-(void)setEffectiveVerticalPadding:(double)arg1 ;
@end

