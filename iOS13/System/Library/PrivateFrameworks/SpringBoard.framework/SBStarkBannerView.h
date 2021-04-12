/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBStarkBannerItemObserver.h>
#import <libobjc.A.dylib/BSUIDateLabelDelegate.h>
#import <libobjc.A.dylib/SBUIBannerView.h>

@protocol SBStarkNotificationsConfiguring, BSUIDateLabel;
@class SBUIBannerContext, SBStarkBannerItem, NSArray, UILabel, SBUIStarkBannerViewButton, NSString;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, BSUIDateLabelDelegate, SBUIBannerView> {

	id<SBStarkNotificationsConfiguring> _configuration;
	SBUIBannerContext* _context;
	SBStarkBannerItem* _bannerItem;
	NSArray* _iconImageViews;
	UILabel* _titleLabel;
	double _titleAscender;
	UILabel* _subTitleLabel;
	double _subTitleAscender;
	SBUIStarkBannerViewButton* _okButton;
	SBUIStarkBannerViewButton* _actionButton;
	UILabel*<BSUIDateLabel> _relevanceDateLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_titleFont;
-(BOOL)canBecomeFirstResponder;
-(id)_subtitleFont;
-(void)dateLabelDidChange:(id)arg1 ;
-(BOOL)shouldBorrowScreen;
-(BOOL)_hasSubtitle;
-(id)bannerContext;
-(void)starkBannerItemDidReloadDisplayProperties:(id)arg1 ;
-(void)_updateButtonStates;
-(void)_setRelevanceDate:(id)arg1 allDay:(BOOL)arg2 timeZone:(id)arg3 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 ;
-(id)_boundedTraitCollectionForLabelFont;
-(id)_defaultRelevanceDateFont;
-(BOOL)_shouldShowOKButton;
-(void)_layoutForButton:(id)arg1 contentFrame:(CGRect)arg2 ;
-(UIEdgeInsets)_iconImageInsets;
@end

