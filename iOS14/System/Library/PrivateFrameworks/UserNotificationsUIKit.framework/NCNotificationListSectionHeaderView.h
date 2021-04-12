/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NCToggleControlDelegate.h>
#import <libobjc.A.dylib/NCLegibilitySettingsAdjusting.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@protocol NCNotificationListSectionHeaderViewDelegate;
@class NCToggleControl, NSString, NCNotificationListHeaderTitleView, _UILegibilitySettings, UIControl;

@interface NCNotificationListSectionHeaderView : UIView <NCToggleControlDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {

	NCToggleControl* _clearButton;
	BOOL _adjustsFontForContentSizeCategory;
	NSString* _preferredContentSizeCategory;
	id<NCNotificationListSectionHeaderViewDelegate> _delegate;
	NSString* _sectionIdentifier;
	NSString* _title;
	NSString* _materialGroupNameBase;
	NCNotificationListHeaderTitleView* _headerTitleView;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) NCNotificationListHeaderTitleView * headerTitleView;                          //@synthesize headerTitleView=_headerTitleView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * sectionIdentifier;                                                   //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * materialGroupNameBase;                                               //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
@property (nonatomic,readonly) UIControl * clearButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                        //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(double)headerHeightWithWidth:(double)arg1 title:(id)arg2 ;
+(CGSize)_clearButtonPreferredSize;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)_legibilitySettings;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NCNotificationListSectionHeaderViewDelegate>)delegate;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(NSString *)materialGroupNameBase;
-(void)setDelegate:(id<NCNotificationListSectionHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSString *)preferredContentSizeCategory;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(NCNotificationListHeaderTitleView *)headerTitleView;
-(void)setHeaderTitleView:(NCNotificationListHeaderTitleView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIControl *)clearButton;
-(NSString *)title;
-(void)resetClearButtonStateAnimated:(BOOL)arg1 ;
-(void)_configureClearButtonIfNecessary;
-(void)_configureHeaderTitleViewIfNecessary;
-(void)_layoutClearButton;
-(void)_layoutHeaderTitleView;
-(void)_resetClearButtonStateAnimated:(BOOL)arg1 ;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)_updateHeaderTitleViewWithLegibilitySettings:(id)arg1 ;
-(void)_handleClearButtonTouchUpInside:(id)arg1 ;
-(void)_handleClearButtonPrimaryActionTriggered:(id)arg1 ;
-(void)_handleClearAll:(id)arg1 ;
-(id)containerViewForToggleControlClickInteractionPresentedContent:(id)arg1 ;
-(void)toggleControlDidBeginClickInteraction:(id)arg1 ;
-(void)toggleControlDidPresentClickInteractionPresentedContent:(id)arg1 ;
-(void)toggleControlDidDismssClickInteractionPresentedContent:(id)arg1 ;
@end

