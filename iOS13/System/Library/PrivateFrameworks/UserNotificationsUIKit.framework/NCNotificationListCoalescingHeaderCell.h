/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NCNotificationListCoalescingControlsViewDelegate.h>
#import <libobjc.A.dylib/NCLegibilitySettingsAdjusting.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/NCNotificationListCoalescingControlsHandler.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@protocol NCNotificationListCoalescingControlsHandlerDelegate;
@class NSString, NCNotificationListCoalescingControlsView, NCNotificationListHeaderTitleView, _UILegibilitySettings;

@interface NCNotificationListCoalescingHeaderCell : UIView <NCNotificationListCoalescingControlsViewDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler, MTMaterialGrouping> {

	BOOL _adjustsFontForContentSizeCategory;
	id<NCNotificationListCoalescingControlsHandlerDelegate> _handlerDelegate;
	NSString* _materialGroupNameBase;
	NSString* _title;
	NCNotificationListCoalescingControlsView* _coalescingControlsView;
	NCNotificationListHeaderTitleView* _headerTitleView;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) NCNotificationListCoalescingControlsView * coalescingControlsView;                           //@synthesize coalescingControlsView=_coalescingControlsView - In the implementation block
@property (nonatomic,retain) NCNotificationListHeaderTitleView * headerTitleView;                                         //@synthesize headerTitleView=_headerTitleView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                  //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                              //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                      //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic,__weak) id<NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate;              //@synthesize handlerDelegate=_handlerDelegate - In the implementation block
@property (nonatomic,copy) NSString * materialGroupNameBase;                                                              //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
+(void)initialize;
+(void)_contentSizeCategoryDidChange:(id)arg1 ;
+(CGSize)_coalescingControlsViewPreferredSize;
+(double)coalescingHeaderCellHeightForWidth:(double)arg1 title:(id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(NCNotificationListHeaderTitleView *)headerTitleView;
-(void)setHeaderTitleView:(NCNotificationListHeaderTitleView *)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSString *)materialGroupNameBase;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(void)resetClearButtonStateAnimated:(BOOL)arg1 ;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(CGPoint)arg1 ;
-(void)_configureHeaderTitleViewIfNecessary;
-(void)_layoutHeaderTitleView;
-(BOOL)dismissModalFullScreenIfNeeded;
-(NCNotificationListCoalescingControlsView *)coalescingControlsView;
-(void)_configureCoalescingControlsViewIfNecessary;
-(void)_layoutCoalescingControlsView;
-(id<NCNotificationListCoalescingControlsHandlerDelegate>)handlerDelegate;
-(CGRect)_coalescingControlsViewFrameForBounds:(CGRect)arg1 ;
-(void)notificationListCoalescingControlsViewRequestsClear:(id)arg1 ;
-(id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)arg1 ;
-(void)notificationListCoalescingControlsViewRequestsClearAll:(id)arg1 ;
-(void)notificationListCoalescingControlsViewRequestsRestack:(id)arg1 ;
-(void)notificationListCoalescingControlsView:(id)arg1 didTransitionToClearState:(BOOL)arg2 ;
-(void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)arg1 ;
-(void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)arg1 ;
-(void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)arg1 ;
-(void)setHandlerDelegate:(id<NCNotificationListCoalescingControlsHandlerDelegate>)arg1 ;
-(void)setCoalescingControlsView:(NCNotificationListCoalescingControlsView *)arg1 ;
@end

