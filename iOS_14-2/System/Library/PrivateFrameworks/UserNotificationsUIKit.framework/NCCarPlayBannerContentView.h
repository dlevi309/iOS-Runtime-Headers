/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/BSUIDateLabelDelegate.h>

@protocol BSUIDateLabel, NCCarPlayBannerContentViewDelegate;
@class NSArray, UILabel, CPUIBannerViewButton, NCNotificationRequest, NSString;

@interface NCCarPlayBannerContentView : UIView <BSUIDateLabelDelegate> {

	BOOL _displayPropertiesValid;
	NSArray* _iconImageViews;
	UILabel* _titleLabel;
	double _titleAscender;
	UILabel* _subTitleLabel;
	double _subTitleAscender;
	CPUIBannerViewButton* _okButton;
	CPUIBannerViewButton* _actionButton;
	UILabel*<BSUIDateLabel> _relevanceDateLabel;
	NCNotificationRequest* _notificationRequest;
	id<NCCarPlayBannerContentViewDelegate> _delegate;

}

@property (nonatomic,readonly) NCNotificationRequest * notificationRequest;                       //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (assign,nonatomic,__weak) id<NCCarPlayBannerContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_title;
-(id<NCCarPlayBannerContentViewDelegate>)delegate;
-(id)_titleFont;
-(id)_subTitle;
-(void)dateLabelDidChange:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<NCCarPlayBannerContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)_hasSubtitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_subtitleFont;
-(void)dealloc;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(void)_updateButtonStates;
-(void)_setRelevanceDate:(id)arg1 allDay:(BOOL)arg2 timeZone:(id)arg3 ;
-(void)invalidateDisplayProperties;
-(void)_reloadDisplayPropertiesIfNecessary;
-(BOOL)_shouldShowOKButton;
-(void)_layoutForButton:(id)arg1 contentFrame:(CGRect)arg2 ;
-(UIEdgeInsets)_iconImageInsets;
-(id)_defaultRelevanceDateFont;
-(id)_boundedTraitCollectionForLabelFont;
-(void)updateRequestToInstance:(id)arg1 ;
@end

